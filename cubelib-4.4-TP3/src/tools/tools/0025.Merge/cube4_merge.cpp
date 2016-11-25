/****************************************************************************
**  CUBE        http://www.scalasca.org/                                   **
*****************************************************************************
**  Copyright (c) 1998-2016                                                **
**  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          **
**                                                                         **
**  Copyright (c) 2009-2015                                                **
**  German Research School for Simulation Sciences GmbH,                   **
**  Laboratory for Parallel Programming                                    **
**                                                                         **
**  This software may be modified and distributed under the terms of       **
**  a BSD-style license.  See the COPYING file in the package base         **
**  directory for details.                                                 **
****************************************************************************/




/**
 * \file cube4_merge.cpp
 * \brief Merges several cubes into single one.
 *
 */
/******************************************

   Performance Algebra Operation: MERGE

 *******************************************/

#include "config.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>

#include "Cube.h"
#include "CubeCnode.h"
#include "CubeMachine.h"
#include "CubeMetric.h"
#include "CubeRegion.h"
#include "CubeServices.h"
#include "algebra4.h"
using namespace std;
using namespace cube;
using namespace services;
/**

 * Main program.
 * - Check the calling parameters.
 * - For every filename it does
 * - Read the  .cube file. and saves it on alternate way either in 0-th,
   or 1th place in cube[] array.
 * - Calls cube_merge(...) with previous cube (merged) and the current one.
 * - Saves a created merged cube in either "-o output" or "merge.cube|.gz" file.
 * - end.
 */
int
main( int argc, char* argv[] )
{
    int             ch;
    bool            subset   = false;
    bool            collapse = false;
    vector <string> inputs;
    const char*     output = "merge";

    const string USAGE = "Usage: " + string( argv[ 0 ] ) + " [-o output] [-c] [-C] [-h] <cube experiment> ...\n"
                         "  -o     Name of the output file (default: " + output + ")\n"
                         "  -c     Reduce system dimension, if experiments are incompatible\n"
                         "  -C     Collapse system dimension!\n"
                         "  -h     Help; Output a brief help message.\n"
    ;


    while ( ( ch = getopt( argc, argv, "o:cCh?" ) ) != -1 )
    {
        switch ( ch )
        {
            case 'o':
                output = optarg;
                break;
            case 'c':
                subset = true;
                break;
            case 'C':
                collapse = true;
                break;
            case 'h':
            case '?':
                cerr << USAGE << endl;
                exit( 0 );
                break;
            default:
                cerr << USAGE << "\nError: Wrong arguments.\n";
                exit( 0 );
        }
    }

    if ( argc - optind < 2 )
    {
        cerr << USAGE << "\nError: Wrong arguments.\n";
        exit( 0 );
    }

    for ( int i = optind; i < argc; i++ )
    {
        inputs.push_back( argv[ i ] );
    }



    cout << "++++++++++++ Merge operation begins ++++++++++++++++++++++++++" << endl;
    int    num  = inputs.size();
    Cube** cube = new Cube *[ num ];




    for ( int i = 0; i < num; i++ )
    {
        cout << "Reading " << inputs[ i ] << " ... " << flush;
        if ( check_file( inputs[ i ].c_str() ) != 0 )
        {
            exit( -1 );
        }
        cube[ i ] = new Cube();
        cube[ i ]->openCubeReport( inputs[ i ].c_str() );
        cout << "done." << endl;
    }

    Cube* merge = new Cube();

    cube4_merge( merge, cube, num, subset, collapse );


    cout << "++++++++++++ Mean operation ends successfully ++++++++++++++++" << endl;
    for ( int i = 0; i < num; i++ )
    {
        delete cube[ i ];
    }
    cout << "Writing " << output << ".cubex ... " << flush;
    merge->writeCubeReport( get_cube4_name( output ) );
    delete merge;
    delete[] cube;
    cout << "done." << endl;
}

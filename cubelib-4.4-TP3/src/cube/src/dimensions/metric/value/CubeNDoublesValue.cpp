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
 *
 * \file CubeNDoublesValue.cpp
 * \brief   Defines the methods of the "NDoublesValue".
 ************************************************/

#include "config.h"

#include <sstream>
#include <cstring>
#include <string>
#include <iostream>

#include "CubeValues.h"
#include "CubeConnection.h"

using namespace std;
using namespace cube;

std::vector<cube::NDoublesValueConfig> cube::NDoublesValue::parameters;

NDoublesValue::NDoublesValue() : N( 0 )
{
    isSingleValue = false;

    values = NULL;
}

NDoublesValue::NDoublesValue( uint64_t n ) : N( n )
{
    isSingleValue = false;
    values        = NULL;

    if ( n == 0 )
    {
        return;
    }

    values = new double[ n ];
    for ( unsigned i = 0; i < n; ++i )
    {
        values[ i ] = 0.;
    }
}

NDoublesValue::NDoublesValue( uint64_t n,
                              double*  vals ) : N( n )
{
    isSingleValue = false;

    if ( n == 0 )
    {
        return;
    }

    values = new double[ n ];
    memcpy( values, vals, N * sizeof( double ) );
}
/***********************************
 * setNumTerms() and processArguments() are an example of how to pass parameters from metric
 * creation to the datatype. They are not used since the design has problems:
 * - only useful for parameters to all instances of the datatype
 * - consequently, parameter is not metric-specific
 */
void
NDoublesValue::setNumTerms( size_t num )
{
    if ( num > 0 )
    {
        // TODO: debug output
//         cout << "Changed number of terms to: " << num << endl;
        delete[] values;
        N      = num;
        values = new double[ num ];
        for ( unsigned i = 0; i < num; i++ )
        {
            values[ i ] = 0.;
        }
    }
    else
    {
        throw RuntimeError( "NDoublesValue: num_terms needs to be positive" );
    }
}

/* Take generic argument list and parse it.
 * We only take the first argument, which is the actual number of terms used in the Metric
 */
void
NDoublesValue::processArguments( std::vector<std::string> args )
{
    if ( args.size() == 1 )
    {
        stringstream ss;
        int          num = 0;
        ss << args[ 0 ];
        ss >> num;
        setNumTerms( num );
    }
    else
    {
        throw RuntimeError( "NDoublesValue: too many arguments for this datatype" );
    }
}



uint16_t
NDoublesValue::getUnsignedShort()
{
    return ( uint16_t )getDouble();
}
int16_t
NDoublesValue::getSignedShort()
{
    return ( int16_t )getDouble();
}
uint32_t
NDoublesValue::getUnsignedInt()
{
    return ( uint32_t )getDouble();
}
int32_t
NDoublesValue::getSignedInt()
{
    return ( int32_t )getDouble();
}

uint64_t
NDoublesValue::getUnsignedLong()
{
    return ( uint64_t )getDouble();
}
int64_t
NDoublesValue::getSignedLong()
{
    return ( int64_t )getDouble();
}



char
NDoublesValue::getChar()
{
    return ' ';
}

string
NDoublesValue::getString()
{
    string tmp = "(";
    for ( unsigned i = 0; i < N; ++i )
    {
        stringstream sstr;
        sstr << values[ i ];
        string str;
        sstr >> str;
        tmp += str;
        if ( i < ( N )-1 )
        {
            tmp += ", ";
        }
    }
    tmp += ")";
    return tmp;
}


double
NDoublesValue::getValue( unsigned idx )
{
    if ( idx < N )
    {
        return values[ idx ];
    }
    stringstream sstr;
    string       str1, str2;

    sstr <<  idx  << endl;
    sstr >> str1;
    sstr << N << endl;
    sstr >> str2;
    string str = "Index in NDoubleValue is out of boundary: ";
    throw RuntimeError( str + str1 + " of " + str2 );
}




Value*
NDoublesValue::copy()
{
    double* tmp_d = new double[ N ];
    toStream( ( char* )tmp_d );
    NDoublesValue* _return =  new NDoublesValue( N, tmp_d );
    delete[] tmp_d;
    return _return;
}


char*
NDoublesValue::fromStream( char* cv )
{
    memcpy( values, cv, N * sizeof( double ) );
    return cv + N * sizeof( double );
}

double*
NDoublesValue::fromStreamOfDoubles( double* cv )
{
    return ( double* )fromStream( ( char* )cv );
}

char*
NDoublesValue::toStream( char* cv )
{
    memcpy( cv, values, N * sizeof( double ) );
    return cv + N * sizeof( double );
}

char*
NDoublesValue::transformStream( char* cv, SingleValueTrafo* trafo )
{
    char*        stream = cv;
    DoubleValue* _v     = new DoubleValue( 0. );
    for ( unsigned i = 0; i < N; ++i )
    {
        stream = _v->transformStream( stream, trafo );
        if ( stream == cv )
        {
            delete _v;
            return cv;
        }
    }
    delete _v;
    return stream;
}


void*
NDoublesValue::operator new( size_t size )
{
    return ( void* )ndoubles_preallocator.Get();
}
// delete operator overloaded
void
NDoublesValue::operator delete( void* p )
{
    ndoubles_preallocator.Put( ( NDoublesValue* )p );
}


void
NDoublesValue::operator+=( Value* chval )
{
    if ( chval == NULL )
    {
        return;
    }
    for ( unsigned i = 0; i < N; ++i )
    {
        ( values[ i ] ) += (  ( NDoublesValue* )chval )->values[ i ];
    }
}

void
NDoublesValue::operator-=( Value* chval )
{
    if ( chval == NULL )
    {
        return;
    }
    for ( unsigned i = 0; i < N; ++i )
    {
        ( values[ i ] ) -= (  ( NDoublesValue* )chval )->values[ i ];
    }
}


void
NDoublesValue::operator*=( double dval )
{
    for ( unsigned i = 0; i < N; ++i )
    {
        ( values[ i ]  ) *= dval;
    }
}

void
NDoublesValue::operator/=( double dval )
{
    if ( dval == 0. )
    {
        cerr << "ERROR: DEVISION BY ZERO!" << endl;
    }
    else
    {
        for ( unsigned i = 0; i < N; ++i )
        {
            ( values[ i ] ) /= dval;
        }
    }
}




void
NDoublesValue::operator=( double d )
{
    throw RuntimeError( "Impossible to assign a  single double value to NDoublesValue" );
}


void
NDoublesValue::operator=( Value* val )
{
    throw RuntimeError( "Impossible to assign a  single general value to NDoublesValue" );
}


void
NDoublesValue::normalizeWithClusterCount( uint64_t _N )
{
    for ( uint64_t i = 0; i < N; i++ )
    {
        values[ i ] =  values[ i ] / ( double )_N;
    }
}

bool
NDoublesValue::isZero()
{
    for ( unsigned i = 0; i < N; ++i )
    {
        if ( values[ i ] != 0. )
        {
            return false;
        }
    }
    return true;
}

void
NDoublesValue::init_new()
{
    NDoublesValueConfig a;
    ( cube::NDoublesValue::parameters ).push_back( a );
    index = ( cube::NDoublesValue::parameters ).size() - 1;
};

void
NDoublesValue::clone_new( Value* v )
{
    index = ( static_cast<NDoublesValue*>( v ) )->index;
}

void
cube::NDoublesValue::fromStream( Connection& connection )
{
    uint64_t new_N;
    connection >> new_N;

    resize( new_N );

    if ( new_N == N )
    {
        for (size_t i = 0; i < N; ++i)
        {
            connection >> this->values[ i ];
        }
    }
    else
    {
        // Shrink not allowed, but we still need to clear
        // the data from the Cube connection anyway.
        for (size_t i = 0; i < new_N; ++i)
        {
            connection.get<double>();
        }
    }
}

void
cube::NDoublesValue::toStream( Connection& connection ) const
{
    connection << N;
    for (size_t i = 0; i < N; ++i)
    {
        connection << this->values[ i ];
    }
}

void
cube::NDoublesValue::resize( size_t num )
{
    if ( num > N )
    {
        double* new_values = NULL;
        try
        {
            new_values = new double[ num ];
        }
        catch (std::bad_alloc& e)
        {
            cerr << e.what() << endl;
            return;
        }
        // allocation succeeded => swap pointers
        N = num;
        if (values)
        {
            delete[] values;
        }
        values = new_values;
    }
    else
    {
        cerr << "WARNING: Shrinking of container not allowed." << endl;
    }
}

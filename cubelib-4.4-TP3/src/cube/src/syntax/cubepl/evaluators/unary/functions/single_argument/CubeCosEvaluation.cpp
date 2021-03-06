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



#include "config.h"

#include <cmath>

#include "CubeCosEvaluation.h"
using namespace cube;
using namespace std;


CosEvaluation::CosEvaluation() : UnaryEvaluation()
{
};


CosEvaluation::~CosEvaluation()
{
}

double
CosEvaluation::eval() const
{
    return cos( arguments[ 0 ]->eval() );
}



double
CosEvaluation::eval( cube::Cnode* _cnode, CalculationFlavour _cf, cube::Sysres* _sf, CalculationFlavour _tf   ) const
{
    return cos( arguments[ 0 ]->eval( _cnode, _cf,
                                      _sf, _tf
                                      ) );
}



double
CosEvaluation::eval( cube::Cnode* _cnode, CalculationFlavour _cf ) const
{
    return cos( arguments[ 0 ]->eval( _cnode, _cf
                                      ) );
}

double
CosEvaluation::eval( double arg1, double arg2  ) const
{
    return cos( arguments[ 0 ]->eval( arg1, arg2 ) );
}

double*
CosEvaluation::eval_row( Cnode*             _cnode,
                         CalculationFlavour _cf ) const
{
    double* result =  arguments[ 0 ]->eval_row( _cnode, _cf );
    if ( result == NULL )
    {
        result =  new double[ row_size ]();
    }
    for ( size_t i = 0; i < row_size; i++ )
    {
        result[ i ] = cos( result[ i ] );
    }
    return result;
}

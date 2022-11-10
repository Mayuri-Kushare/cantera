//! @file IdealCondensedTransport.cpp

// This file is part of Cantera. See License.txt in the top-level directory or
// at https://cantera.org/license.txt for license and copyright information.

#include "cantera/transport/IdealCondensedTransport.h"
//#include "cantera/thermo/IdealSolidSolnPhase.h"




namespace Cantera
{

IdealCondensedTransport::IdealCondensedTransport(ThermoPhase* thermo, int ndim) :
    Transport(thermo, ndim)
{
    if (thermo) {
        // init(thermo);
    }
}

/*void IdealCondensedTransport::init(ThermoPhase* thermo, int mode =1 )
{
    m_thermo = thermo;
} */

using namespace std;

namespace {

const double D_k = 647.27; 

}
double IdealCondensedTransport::DiffusionCoeff()
{
  
    return D_k;
}

}//namespace 

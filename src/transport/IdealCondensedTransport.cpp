//! @file IdealCondensedTransport.cpp

// This file is part of Cantera. See License.txt in the top-level directory or
// at https://cantera.org/license.txt for license and copyright information.

#include "cantera/transport/IdealCondensedTransport.h"
#include "cantera/thermo/IdealSolidSolnPhase.h"
#include "cantera/transport/TransportData.h"
#include "cantera/base/stringUtils.h"
#include "cantera/base/utilities.h"
#include "cantera/base/global.h"


namespace Cantera
{

IdealCondensedTransport::IdealCondensedTransport(ThermoPhase* thermo, int ndim) :
    Transport(thermo,ndim)
{
    if (thermo) {
        init(thermo);
    }
}

void IdealCondensedTransport::init(ThermoPhase* thermo, int mode, int log_level)
{
    m_thermo = thermo;
} 

using namespace std;

namespace {

const double D_k = 647.27; 

}
double IdealCondensedTransport::diffusion_coefficient()
{
  
    // diff_coef = 1E-6*D_k;
    // return diff_coef;

    return D_k;
}

}//namespace 

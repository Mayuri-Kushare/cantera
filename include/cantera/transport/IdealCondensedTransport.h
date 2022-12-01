/**
 *  @file IdealCondensedTransport.h Header file defining class WaterTransport
 */

// This file is part of Cantera. See License.txt in the top-level directory or
// at https://cantera.org/license.txt for license and copyright information.

#ifndef CT_IDEALCONDENSEDTRAN_H
#define CT_IDEALCONDENSEDTRAN_H

//#include "cantera/thermo/WaterPropsIAPWS.h"
#include "cantera/transport/Transport.h"
#include "cantera/thermo/IdealSolidSolnPhase.h"

namespace Cantera
{


//! @ingroup tranprops
class IdealCondensedTransport : public Transport
{
public:
    //! default constructor
    /*!
     *  @param thermo   ThermoPhase object that represents the phase.
     *                  Defaults to zero
     *  @param ndim     Number of dimensions of the flux expressions.
     *                  Defaults to a value of one.
     */
    IdealCondensedTransport(ThermoPhase* thermo = 0, int ndim = 1);

    virtual std::string transportModel() const {
        return "ideal-condensed";
    }

    
    virtual double diffusion_coefficient();

    // virtual void init(ThermoPhase* thermo, int mode);
};
}
#endif

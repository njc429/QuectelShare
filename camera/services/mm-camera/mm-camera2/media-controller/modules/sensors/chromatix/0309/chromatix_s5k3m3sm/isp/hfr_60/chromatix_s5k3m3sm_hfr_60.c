
/*============================================================================

Copyright (c) 2016 Qualcomm Technologies, Inc.
All Rights Reserved.
Confidential and Proprietary - Qualcomm Technologies, Inc.

============================================================================*/

/*============================================================================
 *                      INCLUDE FILES
 *===========================================================================*/
#include "chromatix.h"

static chromatix_parms_type chromatix_s5k3m3sm_parms = {
#include "chromatix_s5k3m3sm_hfr_60.h"
};

/*============================================================================
 * FUNCTION    - load_chromatix -
 *chromatix_s5k3m3sm_hfr_60
 * DESCRIPTION:
 *==========================================================================*/
void *load_chromatix(void)
{
  return &chromatix_s5k3m3sm_parms;
}

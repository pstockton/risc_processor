/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000942194857_3092946469_init();
    work_m_00000000001862068918_1733832700_init();
    work_m_00000000000710477047_2531829270_init();
    work_m_00000000003816189961_0167548600_init();
    work_m_00000000000832418451_3886125004_init();
    work_m_00000000004186451437_0016260332_init();
    work_m_00000000002666443483_0621066737_init();
    work_m_00000000000117701029_3262291752_init();
    work_m_00000000003644715141_0915291001_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003644715141_0915291001");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

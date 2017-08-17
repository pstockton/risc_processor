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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Patrick/Desktop/Xilinx/RISC_Processor/RISC_Processor.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};



static void Always_521_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(521, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(522, ng0);

LAB5:    xsi_set_current_line(523, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(524, ng0);

LAB14:    xsi_set_current_line(525, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 16, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(527, ng0);

LAB15:    xsi_set_current_line(528, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB13;

LAB11:    xsi_set_current_line(530, ng0);

LAB16:    xsi_set_current_line(531, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 16, 16, 2U, t3, 8, t4, 8);
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 16, 0LL);
    goto LAB13;

}


extern void work_m_00000000003816189961_0167548600_init()
{
	static char *pe[] = {(void *)Always_521_0};
	xsi_register_didat("work_m_00000000003816189961_0167548600", "isim/RISC_Processor_isim_beh.exe.sim/work/m_00000000003816189961_0167548600.didat");
	xsi_register_executes(pe);
}

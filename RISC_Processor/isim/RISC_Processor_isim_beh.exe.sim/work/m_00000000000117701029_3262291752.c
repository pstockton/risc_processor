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
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {7U, 0U};



static void Always_655_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(655, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(656, ng0);

LAB5:    xsi_set_current_line(657, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(659, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(660, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 16, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(661, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 16, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(662, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_and(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 16, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(663, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_or(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 16, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(664, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_xor(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 16, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(665, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t7 = (t5 + 4);
    memcpy(t8, t5, 8);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t10 | t11);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t13 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t15 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t15, t8, 0, 0, 16, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(666, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_lshift(t8, 16, t5, 16, t4, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 16, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(667, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_rshift(t8, 16, t5, 16, t4, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 16, 0LL);
    goto LAB23;

}


extern void work_m_00000000000117701029_3262291752_init()
{
	static char *pe[] = {(void *)Always_655_0};
	xsi_register_didat("work_m_00000000000117701029_3262291752", "isim/RISC_Processor_isim_beh.exe.sim/work/m_00000000000117701029_3262291752.didat");
	xsi_register_executes(pe);
}

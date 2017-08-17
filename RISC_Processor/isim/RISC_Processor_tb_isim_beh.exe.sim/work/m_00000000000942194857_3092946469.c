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
static const char *ng0 = "C:/Users/Patrick/Desktop/Xilinx/RISC_Processor/controller.v";
static const char *ng1 = "Start of loop: instruction = %b";
static const char *ng2 = "Start of loop: Opcode = %b";
static unsigned int ng3[] = {0U, 0U};
static const char *ng4 = "START: alu_sel = %b";
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "FETCH1";
static const char *ng7 = "FETCH2";
static const char *ng8 = "DECODE";
static const char *ng9 = "ADD 0000: alu_sel = %b";
static const char *ng10 = "SUB 0001: alu_sel = %b";
static unsigned int ng11[] = {2U, 0U};
static const char *ng12 = "AND 0010: alu_sel = %b";
static unsigned int ng13[] = {3U, 0U};
static const char *ng14 = "OR 0011: alu_sel = %b";
static unsigned int ng15[] = {4U, 0U};
static const char *ng16 = "XOR 0100: alu_sel = %b";
static unsigned int ng17[] = {5U, 0U};
static const char *ng18 = "NOT 0101: alu_sel = %b";
static unsigned int ng19[] = {6U, 0U};
static const char *ng20 = "SLA 0110: alu_sel = %b";
static unsigned int ng21[] = {7U, 0U};
static const char *ng22 = "SRA 0111: alu_sel = %b";
static unsigned int ng23[] = {9U, 0U};
static const char *ng24 = "LD 1001: alu_sel = %b";
static unsigned int ng25[] = {10U, 0U};
static const char *ng26 = "SW 1010: alu_sel = %b";
static const char *ng27 = "MEM";
static const char *ng28 = "WB";
static const char *ng29 = "End of controller: alu_sel = %b";
static const char *ng30 = " ";



static void Initial_46_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(47, ng0);

LAB2:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 5280);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 3);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 8664);
    *((int *)t2) = 1;
    t3 = (t0 + 6640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 5440);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    goto LAB2;

}

static void Cont_59_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 8856);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8680);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_60_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 8920);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8696);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_61_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 8984);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8712);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_62_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 9048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8728);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_63_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 9112);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 8744);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_64_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 8096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 9176);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 8760);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_67_8(char *t0)
{
    char t9[8];
    char t25[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;

LAB0:    t1 = (t0 + 8344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 8776);
    *((int *)t2) = 1;
    t3 = (t0 + 8376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t5, 16);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t0, (char)118, t3, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5440);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t7 == 1)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(359, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng29, 2, t0, (char)118, t6, 3);
    xsi_set_current_line(360, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    goto LAB2;

LAB7:    xsi_set_current_line(74, ng0);

LAB20:    xsi_set_current_line(75, ng0);
    t5 = (t0 + 608);
    t8 = *((char **)t5);
    t5 = (t0 + 5440);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 3);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t5, 3);
    goto LAB19;

LAB9:    xsi_set_current_line(90, ng0);

LAB21:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 744);
    t5 = *((char **)t2);
    t2 = (t0 + 5440);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 3);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    goto LAB19;

LAB11:    xsi_set_current_line(99, ng0);

LAB22:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = (t0 + 5440);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 3);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB19;

LAB13:    xsi_set_current_line(105, ng0);

LAB23:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = (t0 + 5440);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 3);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);

LAB24:    t2 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB19;

LAB15:    xsi_set_current_line(334, ng0);

LAB56:    xsi_set_current_line(335, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(336, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4960);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 4480);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB60;

LAB57:    if (t21 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t9) = 1;

LAB60:    memset(t25, 0, 8);
    t26 = (t9 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t26) != 0)
        goto LAB63;

LAB64:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB65;

LAB66:    memcpy(t65, t25, 8);

LAB67:    t96 = (t65 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t65);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(340, ng0);
    t2 = (t0 + 4480);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB86;

LAB83:    if (t21 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t9) = 1;

LAB86:    memset(t25, 0, 8);
    t26 = (t9 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t26) != 0)
        goto LAB89;

LAB90:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB91;

LAB92:    memcpy(t65, t25, 8);

LAB93:    t96 = (t65 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t65);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(342, ng0);
    t2 = (t0 + 4480);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB112;

LAB109:    if (t21 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t9) = 1;

LAB112:    memset(t25, 0, 8);
    t26 = (t9 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t26) != 0)
        goto LAB115;

LAB116:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB117;

LAB118:    memcpy(t65, t25, 8);

LAB119:    t96 = (t65 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t65);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB131;

LAB132:
LAB133:
LAB107:
LAB81:    goto LAB19;

LAB17:    xsi_set_current_line(348, ng0);

LAB135:    xsi_set_current_line(349, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(350, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4960);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(351, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4000);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(352, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4160);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(353, ng0);
    t2 = (t0 + 608);
    t5 = *((char **)t2);
    t2 = (t0 + 5440);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 3);
    xsi_set_current_line(354, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4320);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4480);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB19;

LAB25:    xsi_set_current_line(115, ng0);

LAB46:    xsi_set_current_line(116, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 3520);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4000);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4160);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4320);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB27:    xsi_set_current_line(123, ng0);

LAB47:    xsi_set_current_line(124, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4160);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB29:    xsi_set_current_line(130, ng0);

LAB48:    xsi_set_current_line(131, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4160);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng11)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB31:    xsi_set_current_line(137, ng0);

LAB49:    xsi_set_current_line(138, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4160);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng13)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB33:    xsi_set_current_line(144, ng0);

LAB50:    xsi_set_current_line(145, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4160);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB35:    xsi_set_current_line(151, ng0);

LAB51:    xsi_set_current_line(152, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB37:    xsi_set_current_line(158, ng0);

LAB52:    xsi_set_current_line(159, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng19)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB39:    xsi_set_current_line(164, ng0);

LAB53:    xsi_set_current_line(165, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng21)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB41:    xsi_set_current_line(170, ng0);

LAB54:    xsi_set_current_line(171, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4480);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 3840);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 3680);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB43:    xsi_set_current_line(176, ng0);

LAB55:    xsi_set_current_line(177, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4640);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 3840);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4000);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)118, t6, 3);
    goto LAB45;

LAB59:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t25) = 1;
    goto LAB64;

LAB63:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB64;

LAB65:    t37 = (t0 + 4320);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB71;

LAB68:    if (t53 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t41) = 1;

LAB71:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t58) != 0)
        goto LAB74;

LAB75:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t25 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB67;

LAB70:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t57) = 1;
    goto LAB75;

LAB74:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB75;

LAB76:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t25 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t7 = (t82 & t84);
    t89 = (t86 & t88);
    t90 = (~(t7));
    t91 = (~(t89));
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t94 & t90);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    goto LAB78;

LAB79:    xsi_set_current_line(337, ng0);

LAB82:    xsi_set_current_line(338, ng0);
    t102 = (t0 + 1288);
    t103 = *((char **)t102);
    t102 = (t0 + 5440);
    xsi_vlogvar_assign_value(t102, t103, 0, 0, 3);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4320);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB81;

LAB85:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t25) = 1;
    goto LAB90;

LAB89:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB90;

LAB91:    t37 = (t0 + 4320);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng5)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB97;

LAB94:    if (t53 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t41) = 1;

LAB97:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t58) != 0)
        goto LAB100;

LAB101:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t25 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB96:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t57) = 1;
    goto LAB101;

LAB100:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB101;

LAB102:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t25 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t7 = (t82 & t84);
    t89 = (t86 & t88);
    t90 = (~(t7));
    t91 = (~(t89));
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t94 & t90);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    goto LAB104;

LAB105:    xsi_set_current_line(340, ng0);

LAB108:    xsi_set_current_line(341, ng0);
    t102 = (t0 + 608);
    t103 = *((char **)t102);
    t102 = (t0 + 5440);
    xsi_vlogvar_assign_value(t102, t103, 0, 0, 3);
    goto LAB107;

LAB111:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t25) = 1;
    goto LAB116;

LAB115:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB116;

LAB117:    t37 = (t0 + 4320);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB123;

LAB120:    if (t53 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t41) = 1;

LAB123:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t58) != 0)
        goto LAB126;

LAB127:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t25 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB128;

LAB129:
LAB130:    goto LAB119;

LAB122:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t57) = 1;
    goto LAB127;

LAB126:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB127;

LAB128:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t25 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t7 = (t82 & t84);
    t89 = (t86 & t88);
    t90 = (~(t7));
    t91 = (~(t89));
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t94 & t90);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    goto LAB130;

LAB131:    xsi_set_current_line(342, ng0);

LAB134:    xsi_set_current_line(343, ng0);
    t102 = (t0 + 1288);
    t103 = *((char **)t102);
    t102 = (t0 + 5440);
    xsi_vlogvar_assign_value(t102, t103, 0, 0, 3);
    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4320);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB133;

}


extern void work_m_00000000000942194857_3092946469_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Always_52_1,(void *)Cont_59_2,(void *)Cont_60_3,(void *)Cont_61_4,(void *)Cont_62_5,(void *)Cont_63_6,(void *)Cont_64_7,(void *)Always_67_8};
	xsi_register_didat("work_m_00000000000942194857_3092946469", "isim/RISC_Processor_tb_isim_beh.exe.sim/work/m_00000000000942194857_3092946469.didat");
	xsi_register_executes(pe);
}

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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/US_Sensors/US_Sensor.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 1U};
static int ng4[] = {40000, 0};
static int ng5[] = {331500, 0};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3064);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 25);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3224);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 25);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3384);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 25);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2584);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 13);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_51_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2744);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 5640);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 5528);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 2904);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_52_2(char *t0)
{
    char t6[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3064);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t2, 32, t5, 25);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 5704);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 1U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t22 = (t0 + 5544);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_54_3(char *t0)
{
    char t8[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 3384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 25, t7, 32);
    t9 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 25, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB6:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB8;

LAB9:    t10 = (t0 + 3544);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t12);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t17 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB11;

LAB12:
LAB13:    t45 = (t13 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t13);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB19;

LAB18:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB20;

LAB21:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1152);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB28;

LAB27:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB30;

LAB29:    *((unsigned int *)t8) = 1;

LAB30:    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(70, ng0);

LAB36:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(74, ng0);

LAB41:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 25, 0LL);

LAB39:
LAB34:
LAB25:
LAB16:    goto LAB2;

LAB7:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t25 | t26);
    t27 = (t8 + 4);
    t28 = (t12 + 4);
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t27);
    t32 = (~(t31));
    t33 = *((unsigned int *)t12);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (~(t35));
    t37 = (t30 & t32);
    t38 = (t34 & t36);
    t39 = (~(t37));
    t40 = (~(t38));
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t41 & t39);
    t42 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t42 & t40);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    t44 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t44 & t40);
    goto LAB13;

LAB14:    xsi_set_current_line(56, ng0);

LAB17:    xsi_set_current_line(57, ng0);
    t51 = ((char*)((ng1)));
    t52 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB19:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(60, ng0);

LAB26:    xsi_set_current_line(61, ng0);
    t12 = ((char*)((ng2)));
    t17 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t17, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB28:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB32:    xsi_set_current_line(63, ng0);

LAB35:    xsi_set_current_line(64, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 25, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB34;

LAB37:    xsi_set_current_line(72, ng0);

LAB40:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 3224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 25, t7, 32);
    t9 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 25, 0LL);
    goto LAB39;

}


extern void work_m_00000000003508075092_4149649288_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Cont_51_1,(void *)Cont_52_2,(void *)Always_54_3};
	xsi_register_didat("work_m_00000000003508075092_4149649288", "isim/main_isim_beh.exe.sim/work/m_00000000003508075092_4149649288.didat");
	xsi_register_executes(pe);
}

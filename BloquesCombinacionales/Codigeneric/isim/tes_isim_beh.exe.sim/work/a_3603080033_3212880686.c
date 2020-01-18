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

/* This file is designed for use with ISim build 0x2f00eba5 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//vboxsrv/(00)Codigos_VHDL_basys2/BloquesCombinacionales/Codigeneric/codigeneric.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_3603080033_3212880686_p_0(char *t0)
{
    char t19[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(17, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t3 = (t0 + 1744);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(18, ng0);
    t1 = (t0 + 1780);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(19, ng0);
    t8 = xsi_vhdl_pow(2, 3);
    t9 = (t8 - 1);
    t1 = (t0 + 3284);
    *((int *)t1) = 0;
    t2 = (t0 + 3288);
    *((int *)t2) = t9;
    t10 = 0;
    t11 = t9;

LAB2:    if (t10 <= t11)
        goto LAB3;

LAB5:    t1 = (t0 + 1700);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t3 = (t0 + 3284);
    t12 = *((int *)t3);
    t13 = (t12 - 7);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t3));
    t15 = (1U * t14);
    t16 = (0 + t15);
    t5 = (t4 + t16);
    t17 = *((unsigned char *)t5);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 3284);
    t10 = *((int *)t1);
    t2 = (t0 + 3288);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB5;

LAB11:    t8 = (t10 + 1);
    t10 = t8;
    t3 = (t0 + 3284);
    *((int *)t3) = t10;
    goto LAB2;

LAB6:    xsi_set_current_line(21, ng0);
    t6 = (t0 + 3284);
    t7 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t19, *((int *)t6), 3);
    t20 = (t19 + 12U);
    t21 = *((unsigned int *)t20);
    t21 = (t21 * 1U);
    t22 = (3U != t21);
    if (t22 == 1)
        goto LAB9;

LAB10:    t23 = (t0 + 1744);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memcpy(t27, t7, 3U);
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1780);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB7;

LAB9:    xsi_size_not_matching(3U, t21, 0);
    goto LAB10;

}


extern void work_a_3603080033_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3603080033_3212880686_p_0};
	xsi_register_didat("work_a_3603080033_3212880686", "isim/tes_isim_beh.exe.sim/work/a_3603080033_3212880686.didat");
	xsi_register_executes(pe);
}

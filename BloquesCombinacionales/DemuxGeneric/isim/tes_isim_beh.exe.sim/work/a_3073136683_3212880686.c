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
static const char *ng0 = "//vboxsrv/(00)Codigos_VHDL_basys2/BloquesCombinacionales/DemuxGeneric/Demux.vhd";



static void work_a_3073136683_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 2020);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(21, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 2056);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(22, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 2092);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(23, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 2128);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3910);
    t8 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3912);
    t8 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t8 = 0;

LAB15:    if (t8 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3914);
    t8 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t8 = 0;

LAB23:    if (t8 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2128);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 1976);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t6 = (t0 + 2020);
    t10 = (t6 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    t9 = 0;

LAB8:    if (t9 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t4 = (t2 + t9);
    t5 = (t1 + t9);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(27, ng0);
    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t6 = (t0 + 2056);
    t10 = (t6 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB13:    t9 = 0;

LAB16:    if (t9 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t4 = (t2 + t9);
    t5 = (t1 + t9);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB14;

LAB18:    t9 = (t9 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(29, ng0);
    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t6 = (t0 + 2092);
    t10 = (t6 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB21:    t9 = 0;

LAB24:    if (t9 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t4 = (t2 + t9);
    t5 = (t1 + t9);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB22;

LAB26:    t9 = (t9 + 1);
    goto LAB24;

}


extern void work_a_3073136683_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3073136683_3212880686_p_0};
	xsi_register_didat("work_a_3073136683_3212880686", "isim/tes_isim_beh.exe.sim/work/a_3073136683_3212880686.didat");
	xsi_register_executes(pe);
}

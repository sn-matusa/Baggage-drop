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
static const char *ng0 = "D:/facultate/A321/AC/tema1/Matusa_Sebastian-Nicolae_331AA-tema1/build/bin/sensors_input.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t20[8];
    char t35[8];
    char t51[8];
    char t59[8];
    char t96[8];
    char t99[8];
    char t100[8];
    char t132[8];
    char t134[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
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
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t133;
    char *t135;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) != 0)
        goto LAB12;

LAB13:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (!(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    memcpy(t59, t20, 8);

LAB16:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB38;

LAB35:    if (t16 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB38:    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t21) != 0)
        goto LAB41;

LAB42:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (!(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB43;

LAB44:    memcpy(t59, t20, 8);

LAB45:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(39, ng0);

LAB64:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 8, t4, 8);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t6, 32, t5, 8);
    t2 = (t0 + 1688U);
    t19 = *((char **)t2);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t20, 32, t19, 8);
    t2 = (t0 + 1208U);
    t21 = *((char **)t2);
    t2 = (t0 + 1368U);
    t27 = *((char **)t2);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t21, 8, t27, 8);
    t2 = (t0 + 1528U);
    t28 = *((char **)t2);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t51, 32, t28, 8);
    t2 = (t0 + 1688U);
    t33 = *((char **)t2);
    memset(t96, 0, 8);
    xsi_vlog_unsigned_add(t96, 32, t59, 32, t33, 8);
    t2 = ((char*)((ng3)));
    t7 = *((unsigned int *)t96);
    t8 = *((unsigned int *)t2);
    t9 = (t7 & t8);
    *((unsigned int *)t99) = t9;
    t34 = (t96 + 4);
    t36 = (t2 + 4);
    t37 = (t99 + 4);
    t10 = *((unsigned int *)t34);
    t11 = *((unsigned int *)t36);
    t12 = (t10 | t11);
    *((unsigned int *)t37) = t12;
    t13 = *((unsigned int *)t37);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB65;

LAB66:
LAB67:    memset(t100, 0, 8);
    xsi_vlog_unsigned_add(t100, 32, t35, 32, t99, 32);
    t58 = ((char*)((ng3)));
    memset(t132, 0, 8);
    xsi_vlog_unsigned_rshift(t132, 32, t100, 32, t58, 32);
    t63 = (t0 + 2088);
    xsi_vlogvar_assign_value(t63, t132, 0, 0, 16);

LAB59:
LAB30:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB12:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB13;

LAB14:    t33 = (t0 + 1528U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB20;

LAB17:    if (t47 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t35) = 1;

LAB20:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t52) != 0)
        goto LAB23;

LAB24:    t60 = *((unsigned int *)t20);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t20 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t51) = 1;
    goto LAB24;

LAB23:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB24;

LAB25:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t20 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t20);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB27;

LAB28:    xsi_set_current_line(33, ng0);

LAB31:    xsi_set_current_line(34, ng0);
    t93 = (t0 + 1368U);
    t94 = *((char **)t93);
    t93 = (t0 + 1688U);
    t95 = *((char **)t93);
    memset(t96, 0, 8);
    xsi_vlog_unsigned_add(t96, 32, t94, 8, t95, 8);
    t93 = (t0 + 1368U);
    t97 = *((char **)t93);
    t93 = (t0 + 1688U);
    t98 = *((char **)t93);
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 32, t97, 8, t98, 8);
    t93 = ((char*)((ng2)));
    t101 = *((unsigned int *)t99);
    t102 = *((unsigned int *)t93);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t99 + 4);
    t105 = (t93 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB32;

LAB33:
LAB34:    memset(t132, 0, 8);
    xsi_vlog_unsigned_add(t132, 32, t96, 32, t100, 32);
    t133 = ((char*)((ng2)));
    memset(t134, 0, 8);
    xsi_vlog_unsigned_rshift(t134, 32, t132, 32, t133, 32);
    t135 = (t0 + 2088);
    xsi_vlogvar_assign_value(t135, t134, 0, 0, 16);
    goto LAB30;

LAB32:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t99 + 4);
    t115 = (t93 + 4);
    t116 = *((unsigned int *)t99);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t93);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t130 & t126);
    t131 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t131 & t127);
    goto LAB34;

LAB37:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t20) = 1;
    goto LAB42;

LAB41:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB42;

LAB43:    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB49;

LAB46:    if (t47 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t35) = 1;

LAB49:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t52) != 0)
        goto LAB52;

LAB53:    t60 = *((unsigned int *)t20);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t20 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB45;

LAB48:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t51) = 1;
    goto LAB53;

LAB52:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB53;

LAB54:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t20 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t20);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB56;

LAB57:    xsi_set_current_line(36, ng0);

LAB60:    xsi_set_current_line(37, ng0);
    t93 = (t0 + 1208U);
    t94 = *((char **)t93);
    t93 = (t0 + 1528U);
    t95 = *((char **)t93);
    memset(t96, 0, 8);
    xsi_vlog_unsigned_add(t96, 32, t94, 8, t95, 8);
    t93 = (t0 + 1208U);
    t97 = *((char **)t93);
    t93 = (t0 + 1528U);
    t98 = *((char **)t93);
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 32, t97, 8, t98, 8);
    t93 = ((char*)((ng2)));
    t101 = *((unsigned int *)t99);
    t102 = *((unsigned int *)t93);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t99 + 4);
    t105 = (t93 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB61;

LAB62:
LAB63:    memset(t132, 0, 8);
    xsi_vlog_unsigned_add(t132, 32, t96, 32, t100, 32);
    t133 = ((char*)((ng2)));
    memset(t134, 0, 8);
    xsi_vlog_unsigned_rshift(t134, 32, t132, 32, t133, 32);
    t135 = (t0 + 2088);
    xsi_vlogvar_assign_value(t135, t134, 0, 0, 16);
    goto LAB59;

LAB61:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t99 + 4);
    t115 = (t93 + 4);
    t116 = *((unsigned int *)t99);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t93);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t130 & t126);
    t131 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t131 & t127);
    goto LAB63;

LAB65:    t15 = *((unsigned int *)t99);
    t16 = *((unsigned int *)t37);
    *((unsigned int *)t99) = (t15 | t16);
    t50 = (t96 + 4);
    t52 = (t2 + 4);
    t17 = *((unsigned int *)t96);
    t18 = (~(t17));
    t22 = *((unsigned int *)t50);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t52);
    t29 = (~(t26));
    t78 = (t18 & t23);
    t82 = (t25 & t29);
    t30 = (~(t78));
    t31 = (~(t82));
    t32 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t32 & t30);
    t38 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t38 & t31);
    t39 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t39 & t30);
    t40 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t40 & t31);
    goto LAB67;

}

static void Cont_44_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 3592);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void uut_m_00000000001606534845_3166864719_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Cont_44_1};
	xsi_register_didat("uut_m_00000000001606534845_3166864719", "isim/tester.exe.sim/uut/m_00000000001606534845_3166864719.didat");
	xsi_register_executes(pe);
}

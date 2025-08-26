/*
ap,i,i[n1],ip,ia,ip,i[n2],ia,i[n4]-[N]
ip-aps/pd,ijp-ppd,ip[n5]-ppd,ip,iaj,   ip,  i[n1], in3,  ia, in2-[N]    n4 n2 n3  n1 n4
n5 n1 n2 n
            i1-3，i2-3,i1-3,                   i1-3   i1-3,i2-3,i1-3
n4=32/42 n3=24 n1=32/42 n2=33 n5=52
APPDD,IP-P/PD,ipn-ppd
图一乐的假阵 5路单波炮伤接近2了都，，主要是炸率 没办法
seml测得砸率为零 不排除极端情况下（如小丑炸垫）会出事
对跳跳​严谨 能同收两波跳跳的核坑只有三个 特化处理以下也够用了
核坑排得很sb，，，有3-2，4-2和2-4，5-2两组循环​，核CD卡到极限的情况下只能这样多开核坑了
*/
#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;

void Script()
{
    averageSpawn({GIGA, GARG, POGO, POLE, DIGG, ZOMB});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE, M_ICE, DOOM, CHERRY, SPIKE, JALA, COFFEE, GARLIC, LEAF, POT});
    SetZombies({POLE, POGO, LADD, FOOT, ZOMB, JACK, DIGG, DANCING_ZOMBIE, GARG, GIGA});

    SetGameSpeed(1);
    SetTime(-599, 1);
    SetErrorMode(AvZ::NONE);
    // SkipTick(0, 1);
    MaidCheats::dancing();
    InsertOperation([=]()
                    { SetGameSpeed(1); });
    SetIce({{1, 2}, {2, 5}, {4, 6}, {3, 1}});
    SetTime(137, 4);
    Card(DOOM, {{3, 2}, {4, 2}});
    Delay(5001);
    Card(DOOM, 3, 3);
    SetTime(6460, 9);
    Card(DOOM, {{2, 4}, {5, 2}});
    Delay(5001);
    Card(DOOM, {{3, 2}, {4, 2}});
    Delay(5001);
    Card(DOOM, 3, 3);
    Delay(5001);
    Card(DOOM, 3, 7);
    Delay(5001);
    Card(DOOM, {{3, 2}, {4, 2}});
    Delay(5001);
    Card(DOOM, {{2, 4}, {5, 2}});

    for (auto w : waves(1))
    {
        A(360, 2, 9);
        P(467, 1, 7.8);
        PP(250, {4, 4}, 9);
        P(360, 4, 8.8);
        I();
        C(-599, SPIKE, 1, 1);
        C(160, SPIKE, 2, 1);
        C(445, keep(133), {POT, LEAF}, {1, 2}, 9);
    }
    for (auto w : waves(10))
    {
        I(0);
        RM(500, {{3, 4}, {4, 7}, {4, 3}, {2, 1}});
        C(320, keep(30), SPIKE, 2, 9);
        C(after(751), SPIKE, 2, 1);
        P(200, 4, 8.8);
        J(1550 + 578, 3, 4);
        PP(1351, {4, 4}, 8.575);
        I(after(210));
        A(1352, 4, 9);
        P(1350, 1, 8.4);
        P(after(220), 1, 7.4125);
        C(840, until(1070), LEAF, 5, 9);
        C(1351, keep(1), {GARLIC, POT}, {2, 5}, 9);
    }
    for (auto w : waves(2))
    {
        P(587, 4, 9);
        J(587, 3, 4);
        C(350, keep(30), SPIKE, 2, 9);
        C(600, until(1060), GARLIC, 5, 9);
        P(1451, 4, 8.6);
        I(after(210));
        P(1450, 1, 8.6);
        P(after(220), 1, 7.4125);
        C(1451, keep(1), {SPIKE, POT}, {2, 5}, 9);
    }
    for (auto w : waves(3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19))
    {
        C(552, keep(30), SPIKE, 2, 9);
        C(580, keep(235), LEAF, 2, 8);
        C(588, until(1060), GARLIC, 5, 9);
        C(660, until(815), POT, 2, 9);
        P(578, 4, 9);

        if (w != 9 && w != 19)
        {
            P(1539, 4, 8.6);
            I(after(210));
            P(1538, 1, 8.6);
            P(after(220), 1, 7.4125);
            C(1539, keep(1), {SPIKE, POT}, {2, 5}, 9);
            C(1539, keep(900), LEAF, 1, 7);
        }
        if (w == 4 || w == 6 || w == 13 || w == 15)
        {
            P(957, 4, 3);
        }
        if (w == 3 || w == 9 || w == 16)
        {
            SetTime(656, w);
            Card(COFFEE, {{3, 2}, {4, 2}});
        }
        if (w == 7 || w == 19)
        {
            C(957, COFFEE, 3, 3);
        }
        if (w == 12)
        {
            C(957, COFFEE, 5, 2);
        }
        if (w == 17)
        {
            C(957, COFFEE, 2, 4);
        }
        if (w == 5 || w == 14)
        {
            J(578, 3, 4);
            A(957, 4, 3);
        }
        if (w == 8 || w == 18)
        {
            A(957, 4, 3);
        }
        if (w == 9 || w == 19)
        {
            if (w == 9)
            {
                N(1751, 3, 8);
            }
            if (w == 19)
            {
                C(1751, COFFEE, 3, 7);
            }
            PP(1538, 8.6);
            P(1538, 1, 8.6);
            P(1963, 4, 8.5);
            J(1770, 1, 7);
            P(2316, 2, 9);
            P(3275, 4, 8.5);

            C(1800, until(3275), GARLIC, 4, 7);
            C(2035, POT, 5, 9);
            RM(after(133), 5, 9);
            C(after(74), LEAF, 5, 9);
            RM(after(133), 5, 9);
            C(after(74), SPIKE, 5, 9);
            RM(after(133), 5, 9);
            C(after(74), GARLIC, 5, 9);
            RM(after(133), 5, 9);
            C(after(74), POT, 5, 9);
            C(3000, LEAF, 3, 4);
            C(after(751), LEAF, 4, 7);
            RM(after(751), 2, 1);
            C(now, LEAF, 2, 1);
            C(after(751), LEAF, 4, 3);
        }
    }
    for (auto w : waves(20))
    {
        C(200, keep(100), POT, 2, 9);
        PP(360, 8.8);
        PP(360, 8.8);
        DD(470, 8.8);
        RM(now, {{3, 4}, {4, 7}, {4, 3}, {2, 1}, {1, 1}});
        PP(1200, {3, 4}, 8.6);
        P(5500, 1, 8);
    }
}

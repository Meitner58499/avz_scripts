#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;
CobOperator c1(1);
CobOperator c4(4);
CobOperator c6(6);

void Script()
{
    SetGameSpeed(1);
    KeyConnect('x', [=]()
               { Shovel(1, 8); });
    KeyConnect('z', [=]()
               { Card(FLOWER_POT, 1, 8); });

    averageSpawn({GARG, GIGA, ZOMB, POLE, POGO});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE, M_ICE, DOOM, CHERRY, JALA, SQUASH, POT, SNOW, LEAF, PUMP});
    SetZombies({POLE, GARG, GIGA, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA});
    SetWaveZombies(20, {POLE, GARG, GIGA, GARG, GIGA, BUNGEE_ZOMBIE, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA, ZOMBIE, ZOMBIE, ZOMBIE, ZOMBIE});
    // SetWaveZombies(10, {POLE, GARG, GARG, GIGA, GIGA, BUNGEE_ZOMBIE, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA});
    SetTime(-599, 1);
    SetGameSpeed(1);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });

    // SkipTick(0, 9);

    // a4 601
    for (auto w : waves(1))
    {
        c1.P(230, 2, 9.2);
        C(-599, POT, 2, 9);
        C(330, SQUASH, 2, 9);
        C(now, JALA, 1, 9);
        C(440, CHERRY, 1, 9);
        C(160, POT, 1, 9);
        RM(450, {1, 2}, 9);

        c6.P(230, 4, 9);
        c1.P(after(110), 4, 9.2);
        c6.P(after(110), 4, 9);
    }
    // n2 700
    for (auto w : waves(2))
    {
        SetTime(400, w);
        Card(FLOWER_POT, {{2, 8}, {4, 8}});
        Card(DOOM_SHROOM, {{2, 8}, {4, 8}});
        c4.P(613, 4, 7.4);
        c1.P(613, 2, 7.4);
    }
    // 4 746
    for (auto w : waves(3))
    {
        c4.P(546, 4, 8.35);
        c4.P(546, 2, 8.35);
        c1.P(after(107), 2, 8.2);
        c6.P(now, 4, 8.175);
        M_I(after(105), 5, 3);
    }
    // i4-2 1860
    for (auto w : waves(4))
    {
        c6.P(300, 2, 9);
        c4.P(now, 4, 9);
        c1.P(680, 2, 8.5125);
        c6.P(now, 4, 8.5125);
        C(0, until(1260), {POT, SNOW}, 2, 9);
        C(850, until(1260), {POT}, 3, 9);

        c6.P(1660, 4, 8.375);
        c1.P(now, 2, 8.85);
        I(after(210), 5, 3);
    }
    // i4-2a 1927
    for (auto w : waves(5, 15))
    {

        c6.P(578, 2, 9);
        c1.P(now, 4, 9);
        C(820, until(1260), {POT}, 3, 9);

        C(1727 + 314, CHERRY, 3, 5);
        C(1727 + 185, SQUASH, 1, 9);
        C(1728, {POT, PUMP}, 1, 9);
        RM(after(250), {1, 1}, 9);
        C(1727 + 313, JALA, 5, 3);
        if (w == 5)
        {
            C(0, {POT}, 3, 5);
            c4.P(798, 2, 8.3);
            c1.P(798, 5, 8.3);
            c6.P(1727, 4, 8.35);
            c4.P(1727, 2, 8.35);
        }
        if (w == 15)
        {
            c4.PP(798, {2, 5}, 8.3);
            c6.P(1727, 4, 8.35);
            c1.P(1727, 2, 8.8);
        }
    }
    // 5 601
    for (auto w : waves(6, 16))
    {
        c4.P(225, 4, 8.7);
        c6.P(335, 4, 8.5);
        c6.P(after(110), 4, 8.8);
        c1.P(258, 2, 9.15);
        c4.P(now, 2, 8.7);
        c1.P(after(110), 2, 8.8);
    }
    // n3 746
    for (auto w : waves(7, 17))
    {
        SetTime(446, w);
        Card(FLOWER_POT, {{2, 8}, {4, 8}});
        Card(DOOM_SHROOM, {{2, 8}, {4, 8}});
        c6.P(546 + 202, 1, 6.2);
        c1.P(after(10), 4, 4.5);
        if (w == 7)
            M_I(747, 5, 3);
        else
            I(747, 5, 3);
    }
    // i2-2 1309
    for (auto w : waves(8, 18))
    {

        if (w == 8)
        {
            c1.P(1109, 2, 9.15);
            c6.P(1109, 4, 8.7);
            c4.P(after(220), 4, 7.8);
            c1.P(now, 2, 7.8);
        }
        if (w == 18)
        {
            c4.P(1109, 2, 8.7);
            c6.P(1109, 4, 8.7);
            c4.P(after(220), 4, 7.8);
            c1.P(now, 2, 7.8);
        }
    }
    // i6
    for (auto w : waves(9, 19))
    {
        c4.P(860 + 220, 4, 8.5);
        c1.P(now, 2, 8.9);
        c6.P(after(220), 4, 8.8);
        c1.P(now, 2, 8.9);

        c6.P(2200, 4, 8.5);
        c1.P(now, 3, 8.5);

        // C(2000, until(4300), SNOW, 1, 5);
        C(1000, {POT, PUMP, SNOW}, 1, 8);

        if (w == 9)
        {
            c6.P(860, 4, 8.4);
            c4.P(now, 2, 8.5);
            I(440, 5, 3);
            c6.P(1300, 1, 5); // 819+t
            c4.P(1300, 2, 5);
            c1.P(3400, 1, 8);
        }
        if (w == 19)
        {
            c6.P(860, 4, 8.4);
            c1.P(now, 2, 8.5);
            M_I(440, 5, 3);
            c6.P(1300, 2, 5);
            c4.P(1300, 1, 5);
            c6.P(3400, 1, 8);
        }
    }

    for (auto w : waves(10))
    {
        c1.P(225, 2, 9.2);
        // c1.P(after(135), 2, 8.8);
        c6.P(225, 4, 9);
        c4.P(335, 3, 8.8);
        c6.P(after(110), 4, 8.8);
        C(100, POT, 1, 9);

        C(325, keep(200), SQUASH, 1, 9);
        c1.P(after(210), 2, 4.1);
        C(335, JALA, 5, 3);
        C(340, LEAF, 5, 3);
        RM(600, 5, 3);
        M_I(631, 3, 5);
    }

    // ia-1-3a 1852
    for (auto w : waves(11))
    {
        c6.P(665, 4, 8.5125);
        c1.P(665, 2, 8.5125);
        C(730, until(1200), POT, 3, 9);

        c6.P(1652, 4, 8.4);
        c1.P(1652, 2, 8.85);
        c4.P(after(230), 4, 8.35);
        C(1652 + 220, CHERRY, 1, 9);
        C(1652 + 20, {POT, PUMP}, 1, 9);
    }
    for (auto w : waves(12))
    {
        c4.PP(225, {2, 4}, 8.7);
        c6.P(after(110), 4, 8.175);
        c1.P(now, 2, 8.175);
    }
    for (auto w : waves(13))
    {
        C(410, POT, 3, 8);
        C(542, DOOM, 3, 8);
        c6.P(after(118), 4, 8.25);
        c1.P(after(2), 2, 8.2);
        c4.P(after(114), 4, 8.8125);
        I(767, 5, 3);
    }
    for (auto w : waves(14))
    {
        C(420, POT, 1, 9);
        C(603, SQUASH, 1, 9);
        RM(1200, 1, 9);
        c1.P(310, 2, 9);
        C(1350, keep(266), POT, 5, 8);
        c6.P(620, 3, 8.575);

        c1.P(1627, 2, 8.9);
        c6.P(now, 4, 8.4);
        M_I(after(210), 5, 3);
    }
    for (auto w : waves(20))
    {
        c6.P(330, 4, 8.8);
        c1.P(330, 2, 9.1);
        c4.PP(330, 8.6);
        c6.PP(440, 8.6);
        c1.PP(440, 9.2);
        c4.PP(500, 4);
        I(-10, 5, 3);
        c6.P(5500, 4, 8.5);
    }
}

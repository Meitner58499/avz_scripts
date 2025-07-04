// 【【ME】废狱】 https://www.bilibili.com/video/BV1U1421d7iK/
#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;
CobOperator c1(1);
CobOperator c3(3);
CobOperator c6(6);

void Script()
{
    SetErrorMode(AvZ::NONE);
    SetGameSpeed(1);
    KeyConnect('x', [=]()
               { Shovel(1, 8); });
    KeyConnect('z', [=]()
               { Card(FLOWER_POT, 1, 8); });

    averageSpawn({GARG, GIGA, ZOMB, POLE, POGO});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE, M_ICE, DOOM, CHERRY, JALA, SQUASH, POT, SNOW, LEAF, PUMP});
    SetZombies({POLE, GARG, GIGA, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA});
    SetWaveZombies(20, {POLE, GARG, GIGA, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA, ZOMBIE, ZOMBIE, ZOMBIE, ZOMBIE, ZOMBIE});

    SetTime(-599, 1);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });

    // SkipTick(0, 7);

    // a4 601
    for (auto w : waves(1))
    {
        c1.P(230, 2, 9.2);
        C(-599, POT, 2, 9);
        C(290, SQUASH, 2, 9);
        C(now, JALA, 1, 5);
        C(after(110), CHERRY, 1, 9);
        C(160, POT, 1, 9);
        RM(410, {1, 2}, 9);

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
        c3.PP(613, 7.4);
    }
    // 4 746
    for (auto w : waves(3))
    {
        c3.P(546, 4, 8.5);
        c1.P(546, 2, 8.825);
        c1.P(after(107), 2, 8.2);
        c6.P(now, 4, 8.175);
        M_I(after(105), 3, 3);
    }
    // i4-2 1860
    for (auto w : waves(4))
    {
        c6.P(300, 2, 9);
        c3.P(now, 4, 9);
        c1.P(690, 2, 8.4875);
        c6.P(now, 4, 8.4875);
        C(0, until(1260), {POT, SNOW}, 2, 9);
        C(850, until(1260), {POT, SNOW}, 3, 9);

        c6.P(1660, 4, 8.375);
        c1.P(now, 2, 8.85);
        I(after(210), 3, 3);
    }
    // i4-2a 1927
    for (auto w : waves(5, 15))
    {

        c6.P(578, 2, 9);
        c1.P(now, 4, 9);
        c3.PP(805, {2, 5}, 8.275);
        C(820, until(1260), {POT, SNOW}, 3, 9);

        c6.P(1727, 4, 8.35);
        c1.P(1727, 2, 8.8);
        C(1727 + 314, CHERRY, 2, 5);
        C(1727 + 185, SQUASH, 4, 9);
        C(1728, {POT, PUMP}, 4, 9);
        RM(after(250), {4, 4}, 9);
        C(1727 + 313, JALA, 5, 5);
    }
    // 5 601
    for (auto w : waves(6, 16))
    {
        c3.P(225, 5, 8.65);
        c1.P(258, 4, 9.2);
        c1.P(after(120), 5, 8.8);
        c6.P(258, 2, 9);
        c3.P(after(107), 2, 8.55);
        c6.P(after(107), 1, 8.8);
    }
    // n3 746
    for (auto w : waves(7, 17))
    {
        SetTime(446, w);
        Card(FLOWER_POT, {{2, 8}, {4, 8}});
        Card(DOOM_SHROOM, {{2, 8}, {4, 8}});
        c6.P(770, 1, 5.4);
        c1.P(770, 4, 4.5);
        M_I(747, 3, 3);
    }
    // i2-2 1309
    for (auto w : waves(8, 18))
    {
        c1.P(1109, 2, 9.15);
        c6.P(1109, 4, 8.7);

        c3.P(after(220), 2, 7.8);
        c3.P(now, 4, 7.8);
    }
    // i6
    for (auto w : waves(9, 19))
    {
        I(440, 3, 3);
        c6.P(860, 4, 8.4);
        c1.P(now, 2, 8.4);

        c6.P(after(220), 4, 8.5);
        c1.P(now, 2, 8.9);
        c6.P(after(220), 4, 8.8);
        c1.P(now, 2, 8.9);

        c6.P(2200, 4, 8.5);
        c1.P(now, 3, 8.5);
        c3.P(1058, 1, 1);
        c3.P(1300, 3, 5);
        C(2000, until(4300), SNOW, 1, 5);
        C(1000, {POT, PUMP}, 1, 8);

        if (w == 9)
        {
            c1.P(4300, 1, 8);
            M_I(3700, 3, 3);
        }
        if (w == 19)
        {
            c1.P(3600, 1, 8);
        }
    }

    for (auto w : waves(10))
    {
        c1.P(225, 2, 9.2);
        c6.P(now, 4, 9);
        c1.P(after(110), 2, 9.2);
        c3.P(now, 4, 9);
        c1.P(after(110), 2, 9);
        c6.P(now, 4, 8.8);
        C(-200, POT, 1, 9);
        C(-740, LEAF, 2, 5);
        C(20, LEAF, 4, 5);
        RM(400, {2, 4}, 5);
    }

    // ia-1-3a 1846
    for (auto w : waves(11))
    {
        I(40, 3, 3);
        c6.P(680, 4, 8.4625);
        C(450, keep(200), SQUASH, 1, 9);
        C(300, JALA, 2, 9);
        C(-30, until(1200), POT, 2, 9);
        C(730, until(1200), POT, 1, 9);

        c6.P(1646, 4, 8.4);
        c1.P(1646, 2, 8.85);
        c3.P(after(230), 4, 8.5);
        C(1646 + 220, CHERRY, 1, 9);
        C(1646 + 20, {POT, PUMP}, 1, 9);
    }
    for (auto w : waves(12))
    {
        c3.PP(225, {2, 4}, 8.8);
        c6.P(after(110), 4, 8.175);
        c1.P(now, 2, 8.175);
    }
    for (auto w : waves(13))
    {
        C(546, {POT, DOOM}, 3, 8);
        c1.P(after(107), 2, 8.2);
        c6.P(now, 4, 8.175);
        c1.P(after(127), 2, 8.8);
        c3.P(now, 4, 8.9875);
        M_I(760, 3, 3);
    }
    for (auto w : waves(14))
    {
        C(632, until(1600), {POT, SQUASH}, 1, 8);
        C(1350, keep(266), POT, 5, 8);
        c6.P(620, 3, 8.5875);

        c1.P(1637, 2, 8.9);
        c6.P(now, 4, 8.4);
        I(after(210), 3, 3);
    }
    for (auto w : waves(20))
    {
        c6.PP(300, 8.8);
        c3.PP(300, 9);
        c6.PP(410, 8.8);
        c1.PP(410, 9.2);
        M_I(-10, 3, 3);
        c6.P(5500, 2, 8.5);
    }
}

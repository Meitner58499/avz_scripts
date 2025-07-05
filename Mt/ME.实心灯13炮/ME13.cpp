#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;

CobOperator c2(2);
CobOperator c3(3);
CobOperator c4(4);
CobOperator c5;
CobOperator c6(6);

void Script()
{
    KeyConnect('c', [=]()
               { Shovel({{4, 7}, {4, 7}, {2, 7}, {2, 7}}); });
    KeyConnect('x', [=]()
               { Card(FLOWER_POT, 4, 7); });
    KeyConnect('z', [=]()
               { Card({{FLOWER_POT, 4, 7}, {SNOW_PEA, 4, 7}}); });

    SetGameSpeed(10);
    SetErrorMode(AvZ::CONSOLE);
    averageSpawn({GIGA_GARGANTUAR, GARGANTUAR,ZOMBONI, POLE_VAULTING_ZOMBIE, POGO_ZOMBIE});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 JALAPENO,
                 SQUASH,
                 FLOWER_POT,
                 KERNEL_PULT,
                 COB_CANNON,
                 SNOW_PEA});
    SetZombies({POLE_VAULTING_ZOMBIE,
                CATAPULT_ZOMBIE,
                ZOMBONI,
                POGO_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                FOOTBALL_ZOMBIE,
                BALLOON_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR});
    SetWaveZombies(20, {POLE_VAULTING_ZOMBIE,
                        CATAPULT_ZOMBIE,
                        ZOMBONI,
                        ZOMBONI,
                        POGO_ZOMBIE,
                        LADDER_ZOMBIE,
                        JACK_IN_THE_BOX_ZOMBIE,
                        FOOTBALL_ZOMBIE,
                        GARGANTUAR,
                        GIGA_GARGANTUAR,
                        GIGA_GARGANTUAR,
                        BALLOON_ZOMBIE,
                        ZOMBIE,
                        ZOMBIE,
                        ZOMBIE,
                        ZOMBIE});

    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(2); });
    SetTime(0, 4);
    // SkipTick(1500, 19);
    SetTime(0, 20);
    InsertOperation([=]()
                    { SetGameSpeed(1); });

    //  PP3DA
    for (auto w : waves(1))
    {
        c6.PP(240, {4, 4}, 9);
        c4.P(240, 2, 9);
        c2.P(after(50), 2, 9);

        c4.P(360, 4, 9);
        C(210, POT, 1, 9);
        C(410, keep(1), CHERRY, 1, 9);
        C(-550, POT, 3, 1);
    }

    // NDD 700
    for (auto w : waves(2))
    {
        SetTime(400, w);
        Card(FLOWER_POT, {{2, 8}, {3, 8}, {4, 8}});
        Card(DOOM_SHROOM, {{2, 8}, {3, 8}, {4, 8}});

        c3.P(610, 2, 7.4);
        c5.P(610, 2, 5, 4, 7.4);
        RM(810, 2, 5);
        C(810, KERNEL, 2, 6);
        C(after(751), {KERNEL, COB}, 2, 5);
    }

    for (auto w : waves(10))
    {
        C(410, {POT, DOOM}, 4, 9);
        c4.P(260, 4, 9);
        c3.P(520, 2, 7.5875);
        c5.P(520, 2, 5, 4, 7.5);
        RM(720, 2, 5);
        C(720, KERNEL, 2, 6);
        C(after(751), {KERNEL, COB}, 2, 5);
    }

    // PP4D
    for (auto w : waves(3, 11))
    {
        M_I(759, 3, 1);
        c3.P(546, 2, 8.45);
        c6.P(546, 4, 8.35);
        c5.P(after(107), 4, 5, 4, 8.1875);
        c2.P(now, 2, 8.175);
        c2.P(after(127), 2, 8.6625);
        c4.P(now, 4, 8.65);
    }

    // IA'B-PDDP
    for (auto w : waves(4, 12))
    {
        C(310, {POT, JALA}, 5, 9);
        C(350, until(1050), SNOW_PEA, 5, 9);
        C(1000, POT, 4, 2);

        c5.P(1120, 2, 5, 2, 8.125);
        c6.PP(1710, {2, 2}, 8.3375);
        c4.P(1711, 4, 8.3375);
        I(after(210), 3, 1);
        c2.P(after(24), 2, 8.6625);
    }

    // IaPD-PPAD
    for (auto w : waves(5, 13))
    {

        C(188, {POT, SQUASH}, 1, 9);
        C(200, until(1050), SNOW_PEA, 1, 9);
        C(770, keep(265), POT, 3, 9);
        C(1521, keep(265), POT, 5, 8);

        c4.P(520, 4, 9);
        c3.P(after(220), 5, 8.4);

        c3.P(1815, 2, 8.4);
        c6.P(1815, 4, 8.35);

        c5.P(after(300), 4, 5, 1, 5);
        C(2120, CHERRY, 4, 5);

        RM(2000, 4, 5);
        C(now, KERNEL, 4, 6);
        C(after(1216), {KERNEL, COB}, 4, 5);
    }

    // N4D
    for (auto w : waves(6, 14))
    {
        SetTime(446, w);
        Card(FLOWER_POT, {{2, 8}, {4, 8}});
        Card(DOOM_SHROOM, {{2, 8}, {4, 8}});

        c2.P(546, 2, 8.3);
        c4.P(546, 4, 8.35);
        c2.P(after(107), 2, 7.8);
        c5.P(after(20), 2, 5, 4, 7.3);
    }

    // PPHD
    for (auto w : waves(7, 15))
    {
        c4.P(546, 2, 8.35);
        c6.P(546, 4, 8.35);
        c6.P(after(95), 4, 8.8);
        c2.P(after(113), 2, 5);
        M_I(746, 3, 1);
    }

    // IaA'PBD-PP
    for (auto w : waves(8, 16))
    {
        C(500, JALA, 4, 2);
        RM(501, 4, 2);
        C(200, until(1036), {POT, SQUASH}, 5, 9);
        C(770, keep(265), POT, 3, 9);

        c4.P(520, 4, 9);

        c3.P(880, 2, 8.275);
        c5.P(after(220), 4, 5, 1, 8.15);

        c3.P(1783, 2, 8.375);
        c6.P(1783, 4, 8.3);
        I(after(210), 3, 1);
    }

    // IPPDD-PP4D
    for (auto w : waves(9, 17))
    {
        c2.P(578, 2, 9);
        c4.P(578, 4, 9);
        c2.P(after(220), 2, 8.2875);
        c5.P(now, 2, 5, 4, 8.2875);

        if (w == 9)
        {
            c4.P(1582, 2, 8.5);
            c6.P(after(210), 2, 8.5);
            c4.P(after(220), 2, 8.4);

            c6.P(1650, 4, 8.375);
            c2.P(after(220), 4, 8.6);
            C(after(184), keep(1), CHERRY, 4, 9);

            c5.P(2600, 4, 5, 4, 8);
            c6.P(4300, 2, 8);

            C(0, {POT, SNOW_PEA}, 2, 7);
            C(1900, POT, 4, 9);
            C(2850, {POT, SQUASH}, 1, 8);
            RM(2850, 1, 8);
            RM(4300, {2, 2}, 7);
        }
        if (w == 17)
        {
            C(0, until(1783), {POT, SNOW_PEA}, 3, 8);
            C(770, keep(266), POT, 5, 9);
            C(1521, keep(266), POT, 1, 8);
            c6.PP(1783, 8.3);
            c2.P(after(225), 4, 7);
            C(after(85), CHERRY, 1, 5);
            RM(1990, 1, 4);
            C(now, KERNEL, 1, 4);
            C(after(751), KERNEL, 1, 5);
            C(now, COB, 1, 4);
        }
    }

    for (auto w : waves(18))
    {
        C(546, {POT, DOOM}, 4, 8);
        c4.PP(546, 8.35);
        c3.P(after(110), 2, 7.8);
        c5.P(now, 4, 5, 4, 7.8);
    }

    for (auto w : waves(19))
    {
        c3.P(546, 2, 8.3);
        c6.P(546, 4, 8.35);
        M_I(after(105), 3, 1);

        c2.P(after(680), 2, 8.6);
        c4.P(now, 4, 8.5);
        c2.P(after(220), 2, 8.6);
        c5.P(now, 2, 5, 4, 8.5);

        c6.P(after(1000), 2, 8);
        C(1000, {POT, SNOW_PEA}, 4, 7);
        C(2000, {POT, SQUASH}, 5, 8);
        RM(2000, 5, 8);
        c6.P(4300, 4, 8);
    }

    for (auto w : waves(20))
    {
        I(-1, 3, 1);
        RM(0, 3, 1);
        c2.PP(300, 9.2);
        c4.PP(350, 9);
        c3.PP(400, 9);
        c5.PP(450, 9);
    }
}
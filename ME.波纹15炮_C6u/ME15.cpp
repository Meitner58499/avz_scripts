#include "avz.h"
#include "avz_spawn_utils.h"
using namespace AvZ;
AvZ::PaoOperator p1;
AvZ::PaoOperator p2;
AvZ::PaoOperator p3;
AvZ::PaoOperator p4;
AvZ::PaoOperator p5;
AvZ::PaoOperator p6;

void Script()
{
    SetGameSpeed(1.25);
    // SkipTick(0, 9);
    // SetWavelength({{1, 601}, {2, 1630}, {3, 2032}, {4, 601}, {5, 738}, {6, 1631}, {7, 2032}, {8, 601}, {10, 601}, {11, 601}, {12, 1720}, {13, 2032}, {14, 601}, {15, 738}, {16, 1631}, {17, 2032}, {18, 601}});
    averageSpawn({GIGA_GARGANTUAR, GARGANTUAR, ZOMBONI, POLE_VAULTING_ZOMBIE, POGO_ZOMBIE});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 JALAPENO,
                 SQUASH,
                 FLOWER_POT,
                 SNOW_PEA,
                 BLOVER,
                 PUMPKIN});
    SetZombies({POLE_VAULTING_ZOMBIE,
                CATAPULT_ZOMBIE,
                ZOMBONI,
                POGO_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                FOOTBALL_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR});
    SetTime(-599, 1);
    p1.resetPaoList({{1, 1}, {5, 1}});
    p2.resetPaoList({{2, 2}, {4, 2}});
    p3.resetPaoList({{1, 3}, {3, 3}, {5, 3}});
    p4.resetPaoList({{2, 4}, {4, 4}});
    p5.resetPaoList({{1, 5}, {3, 5}, {5, 5}});
    p6.resetPaoList({{2, 6}, {4, 6}, {3, 7}});
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1.25); });

    // w1 PPDDDD
    SetTime(379 - 387, 1);
    p1.roofPao(2, 9);
    p4.roofPao(4, 9);
    Delay(128);
    p3.roofPao(2, 8.475);
    p6.roofPao(4, 8.4);
    Delay(128);
    p3.roofPao(2, 8.7);
    p5.roofPao(4, 8.8);
    SetTime(614 - 419);
    Card(M_ICE_SHROOM, 3, 1);

    // w2 I-B-PPSSDD 1630
    SetTime(1070 - 387, 2);
    p6.roofPao(3, 8.1625);

    SetTime(1430 - 387);
    p3.roofPao(2, 8.525);
    p5.roofPao(4, 8.4);
    p2.roofPao({{2, 9}, {4, 9}});
    Delay(235);
    p1.roofPao(2, 8.7);
    p5.roofPao(4, 8.8);

    // w3/13:I-B-PPDD 2032
    for (auto w : {3, 13})
    {
        SetTime(-88, w);
        Card(ICE_SHROOM, 3, 1);

        SetTime(1200 - 387);
        p6.roofPao(3, 8.05);

        SetTime(1832 - 387);
        p1.roofPao(2, 8.725);
        p4.roofPao(4, 8.275);
        Delay(262);
        p3.roofPao(1, 5.9);
        Delay(10);
        p4.roofPao(4, 5.8);

        SetTime(-200);
        Card(FLOWER_POT, 1, 7);
        SetTime(578);
        Card({{FLOWER_POT, 3, 9}, {SNOW_PEA, 3, 9}});
        Delay(480);
        Shovel({{3, 9}, {3, 9}});
        SetTime(1440);
        Card({{FLOWER_POT, 3, 9}, {SQUASH, 3, 9}});
        Delay(1);
        Shovel({{3, 9}, {3, 9}});
        SetTime(1430);
        Card(PUMPKIN, 1, 7);
        Delay(200);
        Shovel(1, 7, true);
        Card(BLOVER, 1, 7);
    }

    // w4/14 PNAD 601
    for (auto w : {4, 14})
    {
        SetTime(250 - 387, w);
        p6.roofPao(3, 9);
        SetTime(260);
        Card(FLOWER_POT, {{2, 9}, {2, 8}});
        Card(DOOM_SHROOM, {{2, 9}, {2, 8}});
        SetTime(470 - 387);
        p3.roofPao(4, 7.75);
        SetTime(385);
        Card(CHERRY_BOMB, 1, 7);
        Delay(100);
        Shovel(1, 7);
    }
    // w5/15 A'PPDDDD 738
    for (auto w : {5, 15})
    {
        SetTime(538 - 387, w);
        p5.roofPao(2, 8.3125);
        p6.roofPao(4, 8.4);
        Delay(110);
        p3.roofPao(2, 8.325);
        p5.roofPao(4, 8.2);
        Delay(123);
        p2.roofPao({{2, 8.7}, {4, 8.7}});
        SetTime(280);
        Card(JALAPENO, 3, 2);
        SetTime(755 - 419);
        Card(M_ICE_SHROOM, 3, 1);
    }
    // w6/16 I-B-PP 1631
    for (auto w : {6, 16})
    {
        SetTime(1070 - 387, w);
        p5.roofPao(3, 8.1625);
        SetTime(1431 - 387);
        p1.roofPao(2, 8.425);
        p6.roofPao(4, 8.425);
    }
    // w7/17 I3PPDD-B-PPDD 2032
    for (auto w : {7, 17})
    {
        SetTime(-89, w);
        Card(ICE_SHROOM, 3, 1);
        SetTime(578 - 387);
        p1.roofPao(2, 9.2);
        p4.roofPao(4, 9);
        Delay(220);
        p3.roofPao(2, 8.25);
        p4.roofPao(4, 8.25);

        SetTime(1200 - 387);
        p6.roofPao(3, 8.05);
        SetTime(1832 - 387);
        p5.roofPao(2, 8.25);
        p6.roofPao(4, 8.25);
        Delay(262);
        p3.roofPao(5, 5.9);
        Delay(10);
        p3.roofPao(2, 5.7);

        SetTime(-200);
        Card(FLOWER_POT, 1, 7);
        SetTime(578);
        Card({{FLOWER_POT, 3, 9}, {SNOW_PEA, 3, 9}});
        Delay(480);
        Shovel({{3, 9}, {3, 9}});
        SetTime(1440);
        Card({{FLOWER_POT, 3, 9}, {SQUASH, 3, 9}});
        Delay(1);
        Shovel({{3, 9}, {3, 9}});
        SetTime(1630);
        Card(BLOVER, 1, 7);
    }
    // w8 PNAD 601
    SetTime(360 - 387, 8);
    p5.roofPao(3, 9);
    SetTime(359);
    Card(FLOWER_POT, 4, 9);
    Card(DOOM_SHROOM, 4, 9);
    SetTime(470 - 387);
    p2.roofPao(4, 7.75);
    SetTime(385);
    Card(CHERRY_BOMB, 1, 7);
    Delay(100);
    Shovel(1, 7);

    // w9/19 A'PPDd 730
    for (auto w : {9, 19})
    {
        SetTime(530 - 387, w);
        p2.roofPao(2, 8.6);
        p5.roofPao(4, 8.4);
        Delay(119);
        p6.roofPao(4, 8.2);
        Delay(10);
        p1.roofPao(2, 7.4);
        SetTime(280);
        Card(JALAPENO, 3, 1);
        SetTime(754 - 419);
        Card(M_ICE_SHROOM, 3, 2);
        Ice3(419);

        SetTime(1434 - 387);
        p1.roofPao(4, 9);
        p4.roofPao(4, 9);

        SetTime(1640 - 387);
        p3.roofPao(2, 8.4);
        Delay(220);
        p4.roofPao(1, 8);
        Delay(200);
        p6.roofPao(3, 8);
    }
    SetTime(1400, 9);
    Card({{FLOWER_POT, 1, 7}, {PUMPKIN, 1, 7}});
    SetTime(2300);
    Card(ICE_SHROOM, 3, 1);
    SetTime(3900);
    p3.roofPao(1, 8);

    SetTime(2500, 19);
    p5.roofPao(1, 8);

    // w10 PA'NAD
    SetTime(-750, 10);
    Card(FLOWER_POT, 1, 7);
    SetTime(190);
    Card({{FLOWER_POT, 4, 8}, {DOOM_SHROOM, 4, 8}, {JALAPENO, 1, 7}});
    SetTime(290 - 387);
    p6.roofPao(4, 9);
    SetTime(400 - 387);
    p4.roofPao(4, 8.8);
    SetTime(330);
    Card(CHERRY_BOMB, 1, 7);
    Delay(100);
    Shovel(1, 7);

    // w11 PPDDDD
    SetTime(379 - 387, 11);
    p4.roofPao(4, 9);
    Delay(128);
    p6.roofPao(4, 8.4);
    Delay(128);
    p5.roofPao(4, 8.8);

    SetTime(397 - 387);
    p1.roofPao(2, 9);
    Delay(110);
    p3.roofPao(2, 8.55);
    Delay(128);
    p3.roofPao(2, 8.7);

    SetTime(614 - 419);
    Card(M_ICE_SHROOM, 3, 1);

    // w12 I-B-PPSSDD 1720
    SetTime(1070 - 387, 12);
    p6.roofPao(3, 8.1625);

    SetTime(1520 - 387);
    p3.roofPao(2, 8.5125);
    p5.roofPao(4, 8.3875);
    p2.roofPao({{2, 9}, {4, 9}});
    Delay(235);
    p1.roofPao(2, 8.7);
    p5.roofPao(4, 8.75);

    // w18 PNAD 601
    SetTime(250 - 387, 18);
    p5.roofPao(3, 9);
    SetTime(260);
    Card(FLOWER_POT, {{2, 9}, {2, 8}});
    Card(DOOM_SHROOM, {{2, 9}, {2, 8}});
    SetTime(470 - 387);
    p2.roofPao(4, 7.75);
    SetTime(385);
    Card(CHERRY_BOMB, 1, 7);
    Delay(100);
    Shovel(1, 7);

    // w20
    SetTime(-100, 20);
    Card(ICE_SHROOM, 3, 1);
    SetTime(340 - 387);
    p5.roofPao(1, 9);
    Delay(30);
    p5.roofPao(4, 9);
    Delay(30);
    p2.roofPao(2, 9);
    Delay(30);
    p2.roofPao(4, 9);
    Delay(30);
    p1.roofPao(2, 8.425);
    Delay(30);
    p6.roofPao(4, 8.425);
    Delay(30);
    p3.roofPao(2, 8.425);
    Delay(30);
    p6.roofPao(4, 7.5);
    Delay(100);
    p3.roofPao(3, 9);
    SetTime(650);
    Card({{FLOWER_POT, 5, 7}, {SNOW_PEA, 5, 7}});
    SetTime(3000);
    p4.roofPao(5, 7);
}
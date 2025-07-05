#include "avz.h"
#include "avz_spawn_utils.h"
using namespace AvZ;

AvZ::PaoOperator p1;
AvZ::PaoOperator p3;
AvZ::PaoOperator p5;
AvZ::PaoOperator p7;
AvZ::IceFiller i;
void Script()
{
    averageSpawn({POGO_ZOMBIE, GIGA_GARGANTUAR, ZOMBONI, POLE_VAULTING_ZOMBIE, GARGANTUAR, ZOMBIE});
    SetGameSpeed(1.25);
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 COFFEE_BEAN,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 SQUASH,
                 SNOW_PEA,
                 COB_CANNON,
                 FLOWER_POT,
                 KERNEL_PULT});
    SetZombies({ZOMBIE,
                POLE_VAULTING_ZOMBIE,
                ZOMBONI,
                POGO_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                FOOTBALL_ZOMBIE,
                BALLOON_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR});
    SetTime(-599, 1);
    p1.resetPaoList({{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}});
    p3.resetPaoList({{1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}});
    p5.resetPaoList({{1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}});
    p7.resetPaoList({{1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}});
    Card({{FLOWER_POT, 3, 9}, {ICE_SHROOM, 3, 9}});
    SetTime(-200, 10);
    p5.resetPaoList({{5, 5}, {1, 5}, {3, 5}, {2, 5}, {4, 5}});

    for (auto a : {4, 13})
    {
        // PSD/PD
        SetTime(55 - 387, a - 3);
        p7.roofPao(3, 9);
        SetTime(225 - 387);
        p3.roofPao(4, 8.8);
        Delay(110);
        p5.roofPao(4, 8.8);
        Delay(110);
        p5.roofPao(4, 8.8);

        SetTime(360 - 387);
        p7.roofPao(2, 9);
        Delay(110);
        p3.roofPao(2, 7.7);

        // PSD/PDD
        SetTime(225 - 387, a - 2);
        p5.roofPao(2, 8.8);
        Delay(110);
        p3.roofPao(2, 9);
        Delay(110);
        p1.roofPao(2, 9);

        SetTime(376 - 387);
        p7.roofPao(4, 9);
        Delay(140);
        p1.roofPao(4, 8.9);
        Delay(122);
        p3.roofPao(4, 8.9875);

        SetTime(701 - 298);
        i.start({{3, 9}});
        i.coffee();
        SetPlantActiveTime(ICE_SHROOM, 298);
        i.stop();
        Delay(299);
        Card(M_ICE_SHROOM, 3, 9);

        SetTime(225);
        Card(FLOWER_POT, 1, 9);
        Delay(250);
        Card(SQUASH, 1, 9);
        Delay(150);
        Card(SNOW_PEA, 1, 9);
        Delay(825);
        Shovel(1, 9);

        // IP-NAD
        SetTime(200 - 387, a - 1);
        p5.roofPao(2, 8.625);
        SetTime(950 - 268);
        Card(FLOWER_POT, {{2, 9}, {4, 9}});
        Card(DOOM_SHROOM, {{2, 9}, {4, 9}});
        Card(COFFEE_BEAN, {{2, 9}, {4, 9}});
        SetPlantActiveTime(DOOM_SHROOM, 268);
        SetTime(950 + 190 - 387);
        p3.roofPao(4, 8.8);
        SetTime(950 + 90);
        Card(CHERRY_BOMB, 1, 9);
        Delay(100);
        Shovel(1, 9);

        // PD/PSD
        SetTime(225 - 387, a);
        p1.roofPao(2, 9.2);
        Delay(150);
        p7.roofPao(1, 7);

        SetTime(225 - 387);
        p7.roofPao(4, 8.8);
        Delay(110);
        p1.roofPao(4, 9.2);
        Delay(110);
        p5.roofPao(4, 8.8);

        SetTime(800 - 387);
        p1.roofPao(4, 9.5);

        SetTime(602 - 298);
        i.start({{3, 9}});
        i.coffee();
        SetPlantActiveTime(M_ICE_SHROOM, 298);
        i.stop();
        Delay(300);
        Shovel(3, 9);

        // IPD/P-B-PPDD
        SetTime(580 - 387, a + 1);
        p7.roofPao(2, 9);
        Delay(240);
        p3.roofPao(1, 8.275);

        SetTime(1075 - 387);
        p5.roofPao(3, 8.175);

        SetTime(1355 - 387);
        p5.roofPao(2, 8.8);
        p7.roofPao(4, 8.8);

        Delay(220);
        p5.roofPao(1, 7.4);
        p3.roofPao(4, 7.4);

        SetTime(0);
        Card({{FLOWER_POT, 5, 9}, {SNOW_PEA, 5, 9}});
        SetTime(800);
        Card(FLOWER_POT, 1, 9);
        Delay(400);
        Shovel({{5, 9}, {5, 9}, {1, 9}});

        // w5/15 PPDDDD

        SetTime(376 - 387, a + 2);
        p7.roofPao(4, 9);
        Delay(142);
        p3.roofPao(4, 8.475);
        Delay(118);
        p5.roofPao(4, 8.75);

        SetTime(340 - 387, a + 2);
        p3.roofPao(2, 9);
        Delay(160);
        p1.roofPao(2, 8.35);
        Delay(136);
        p1.roofPao(2, 8.7);

        SetTime(340);
        Card({{FLOWER_POT, 3, 9}, {ICE_SHROOM, 3, 9}});
        SetTime(638 - 298);
        i.start({{3, 9}});
        i.resetIceSeedList({ICE_SHROOM});
        i.coffee();
        SetPlantActiveTime(ICE_SHROOM, 298);
        i.stop();
        Delay(300);
        Shovel(3, 9);

        SetTime(-120);
        Shovel(3, 5);
        Card(KERNEL_PULT, 3, 5);
        Delay(751);
        Card({{KERNEL_PULT, 3, 6}, {COB_CANNON, 3, 5}});

        // w6/16 I-PPDD

        SetTime(1012 - 387, a + 3);
        p3.roofPao(2, 8.8);
        p7.roofPao(4, 8.8);
        Delay(212);
        p5.roofPao(2, 9);
        Delay(20);
        p1.roofPao(4, 7.8);

        // w7/17 PD/PSD
        SetTime(-110, a + 4);
        Card(FLOWER_POT, 3, 9);
        SetTime(-15);
        Card(M_ICE_SHROOM, 3, 9);
        SetTime(225 - 387);
        p5.roofPao(2, 8.8);
        Delay(110);
        p1.roofPao(2, 8.1);

        SetTime(360 - 387);
        p7.roofPao(4, 8.8);
        Delay(122);
        p1.roofPao(4, 9.2);
        Delay(213);
        p7.roofPao(4, 5);

        SetTime(605 - 298);
        i.start({{3, 9}});
        i.resetIceSeedList({M_ICE_SHROOM});
        i.coffee();
        SetPlantActiveTime(M_ICE_SHROOM, 298);
        i.stop();
        Delay(300);
        Shovel(3, 9);

        // w8/18 IPD/A-B-PPDD
        SetTime(40, a + 5);
        Card({{FLOWER_POT, 5, 9}, {SQUASH, 5, 9}});
        SetTime(330);
        Card(CHERRY_BOMB, 5, 9);
        Delay(100);
        Card(SNOW_PEA, 5, 9);
        SetTime(800);
        Card(FLOWER_POT, 1, 9);
        Delay(400);
        Shovel({{5, 9}, {5, 9}, {1, 9}});

        SetTime(580 - 387);
        p3.roofPao(2, 9);
        Delay(240);
        p5.roofPao(1, 8.275);

        SetTime(1050 - 387);
        p5.roofPao(3, 8.1875);

        SetTime(1350 - 387);
        p3.roofPao(2, 8.5375);
        p7.roofPao(4, 8.45);
        Delay(218);
        p3.roofPao(4, 8.8);
        p7.roofPao(1, 8.8);
    }
    // w9
    SetTime(1570, 9);
    Card(FLOWER_POT, 3, 9);
    Delay(1400);
    Card(ICE_SHROOM, 3, 9);
    SetTime(1570 + 218 - 387);
    p3.roofPao(2, 9);
    p1.roofPao(4, 9);
    Delay(220);
    p5.roofPao(3, 9);
    p1.roofPao(5, 9);
    Shovel({{1, 7}, {1, 8}});
    Card(SNOW_PEA, 1, 7);
    SetTime(4300 - 387);
    p1.roofPao(1, 8);
    SetTime(4300);
    Shovel({{1, 7}, {1, 7}});
    Card({{FLOWER_POT, 1, 7}, {KERNEL_PULT, 1, 7}});
    Delay(751);
    Card({{FLOWER_POT, 1, 8}, {KERNEL_PULT, 1, 8}, {COB_CANNON, 1, 7}});

    // w19
    SetTime(245 - 387, 19);
    p3.roofPao(2, 8.7625);
    p1.roofPao(5, 8.8);
    SetTime(460 - 387);
    p5.roofPao(4, 9);
    p1.roofPao(2, 9.2);
    SetTime(351 - 268);
    Card(FLOWER_POT, {{2, 9}, {4, 9}});
    Card(DOOM_SHROOM, {{2, 9}, {4, 9}});
    Card(COFFEE_BEAN, {{2, 9}, {4, 9}});
    SetPlantActiveTime(DOOM_SHROOM, 268);
    SetTime(1124 - 387);
    p3.roofPao(3, 9);
    p7.roofPao(4, 9);

    SetTime(370);
    Shovel({{1, 7}, {1, 8}});
    Card(SNOW_PEA, 1, 7);
    SetTime(4300 - 387);
    p1.roofPao(1, 8);
    SetTime(4300);
    Shovel({{1, 7}, {1, 7}});
    Card({{FLOWER_POT, 1, 8}, {M_ICE_SHROOM, 1, 8}});
    Delay(751);
    Card({{FLOWER_POT, 1, 7}, {KERNEL_PULT, 1, 7}});
    Delay(751);
    Card({{KERNEL_PULT, 1, 8}, {COB_CANNON, 1, 7}});

    // w20
    SetTime(-300, 20);
    Card(COFFEE_BEAN, 1, 8);
    SetTime(360 - 387);
    p7.resetPaoList({{2, 7}, {3, 7}, {4, 7}, {5, 7}});
    p7.roofPao(2, 9);
    p5.roofPao({{2, 9}, {4, 9}});
    p3.roofPao(4, 9);
    Delay(110);
    p1.roofPao({{2, 9}, {5, 9}});
    p3.roofPao({{2, 9}, {5, 9}});
    Delay(350);
    p7.roofPao({{1, 9}, {5, 9}});

    SetTime(5500 - 387);
    p1.roofPao(3, 9);
}
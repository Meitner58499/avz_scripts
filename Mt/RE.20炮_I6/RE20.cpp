#include "avz.h"
#include "avz_spawn_utils.h"
using namespace AvZ;

AvZ::PaoOperator p1;
AvZ::PaoOperator p3;
AvZ::PaoOperator p5;
AvZ::PaoOperator p7;
void Script()
{
    averageSpawn({POGO_ZOMBIE, GIGA_GARGANTUAR, ZOMBONI, POLE_VAULTING_ZOMBIE, GARGANTUAR, ZOMBIE});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 COFFEE_BEAN,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 SQUASH,
                 JALAPENO,
                 FLOWER_POT,
                 COB_CANNON,
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
    SetWaveZombies(20, {ZOMBIE,
                        ZOMBIE,
                        POLE_VAULTING_ZOMBIE,
                        ZOMBONI,
                        POGO_ZOMBIE,
                        LADDER_ZOMBIE,
                        JACK_IN_THE_BOX_ZOMBIE,
                        FOOTBALL_ZOMBIE,
                        BALLOON_ZOMBIE,
                        GARGANTUAR,
                        GIGA_GARGANTUAR,
                        BUNGEE_ZOMBIE});
    // SetGameSpeed(10);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });
    SetTime(-599, 1);
    // SkipTick(0, 20);
    p1.resetPaoList({{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}});
    p3.resetPaoList({{1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}});
    p5.resetPaoList({{2, 5}, {1, 5}, {4, 5}, {5, 5}, {3, 5}});
    p7.resetPaoList({{1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}});

    // PD/ASD
    SetTime(300 - 387, 1);
    p5.roofPao(2, 8.8);
    Delay(110);
    p3.roofPao(2, 9);
    SetTime(126);
    Card({{FLOWER_POT, 2, 9}, {CHERRY_BOMB, 2, 9}});
    Delay(100);
    Shovel(2, 9);

    SetTime(360 - 387);
    p7.roofPao(4, 8.8);
    Delay(110);
    p1.roofPao(4, 7.7);

    // PSD/PDD
    SetTime(240 - 387, 2);
    p7.roofPao(4, 8.8);
    p1.roofPao(4, 9.2);
    Delay(119);
    p5.roofPao(4, 8.8);

    SetTime(376 - 387);
    p7.roofPao(2, 8.8);
    Delay(120);
    p3.roofPao(2, 8.8);
    Delay(139);
    p1.roofPao(2, 8.7);

    SetTime(700 - 298);
    Card(COFFEE_BEAN, 3, 9);
    SetPlantActiveTime(ICE_SHROOM, 298);
    Delay(300);
    Shovel(3, 9);
    SetTime(501);
    Card({{FLOWER_POT, 5, 9}, {M_ICE_SHROOM, 5, 9}});
    SetTime(634 - 387);
    p5.roofPao(4, 9);

    // IP-NAD 100 1151
    SetTime(951 - 268, 3);
    Card({{FLOWER_POT, 2, 9}, {DOOM_SHROOM, 2, 9}, {COFFEE_BEAN, 2, 9}});
    SetTime(1150 - 387);
    p1.roofPao(2, 8.85);
    p5.roofPao(4, 8.85);

    // PSD/PSD
    SetTime(225 - 387, 4);
    p3.roofPao(4, 9.2);
    Delay(160);
    p1.roofPao(5, 8.425);
    Delay(110);
    p7.roofPao(4, 8.8);

    SetTime(225 - 387);
    p7.roofPao(1, 8.8);
    Delay(100);
    p5.roofPao(2, 8.8);
    Delay(110);
    p3.roofPao(2, 8.8);
    SetTime(696 - 387);
    p3.roofPao(3, 9);

    SetTime(700 - 298);
    Card(COFFEE_BEAN, 5, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);

    SetTime(300);
    Card(FLOWER_POT, 1, 9);
    Delay(260);
    Card(JALAPENO, 1, 9);
    Delay(300);
    Card(ICE_SHROOM, 1, 9);

    // IPaA'-PPDD 100 1150
    SetTime(315, 5);
    Card(SQUASH, 5, 9);

    SetTime(950 - 387);
    p5.roofPao(1, 8.675);
    p3.roofPao(4, 8.8);
    Delay(250);
    Shovel(2, 5);
    Card(KERNEL_PULT, 2, 5);
    Delay(751);
    Card({{KERNEL_PULT, 2, 6}, {COB_CANNON, 2, 5}});

    SetTime(1125 - 387);
    p7.roofPao(2, 8.8);
    SetTime(1160 - 387);
    p1.roofPao(5, 8.8);

    // w6 PSD/PD
    SetTime(225 - 387, 6);
    p7.roofPao(4, 8.8);
    Delay(125);
    p7.roofPao(4, 8.1);

    SetTime(225 - 387);
    p1.roofPao(2, 8.675);
    Delay(110);
    p5.roofPao(2, 8.8);
    Delay(135);
    p3.roofPao(2, 8.8);
    SetTime(634 - 387);
    p1.roofPao(2, 9);

    SetTime(601 - 298);
    Card(COFFEE_BEAN, 1, 9);
    SetPlantActiveTime(ICE_SHROOM, 298);

    // w6/16 IPPD-B-PPDD 1 1567
    SetTime(580 - 387, 7);
    p5.roofPao(4, 9);
    Delay(240);
    p5.roofPao(4, 8.25);

    SetTime(1124 - 387);
    p5.roofPao(3, 8.125);

    SetTime(1367 - 387);
    p1.roofPao(2, 9);
    p7.roofPao(4, 9);
    Delay(210);
    p5.roofPao(4, 9);
    Delay(10);
    p1.roofPao(2, 7.4);

    SetTime(650);
    Card(FLOWER_POT, 5, 9);
    SetTime(770);
    Card(KERNEL_PULT, 1, 9);
    SetTime(1200);
    Shovel({{1, 9}, {1, 9}, {5, 9}});

    // w7/17 PD/PD
    SetTime(-166, 8);
    Card({{FLOWER_POT, 3, 9}, {M_ICE_SHROOM, 3, 9}});
    SetTime(225 - 387);
    p3.roofPao(4, 9.2);
    Delay(120);
    p3.roofPao(4, 8.1);

    SetTime(361 - 387);
    p7.roofPao(2, 8.8);
    Delay(143);
    p3.roofPao(2, 8.475);

    SetTime(609 - 298);
    Card(COFFEE_BEAN, 3, 9);
    Ice3(298);
    Delay(300);
    Shovel(3, 9);

    // w9 I3PS/AD-PPDD
    SetTime(210, 9);
    Card({{FLOWER_POT, 1, 9}, {CHERRY_BOMB, 1, 9}});
    Delay(100);
    Shovel(1, 9);

    SetTime(580 - 387);
    p3.roofPao(4, 9);
    SetTime(681 - 387);
    p7.roofPao(2, 8.5);
    SetTime(821 - 387);
    p1.roofPao(5, 8.25);

    SetTime(1045 - 387);
    p7.roofPao(2, 8.8);
    Delay(220);
    p5.roofPao(1, 8.8);
    Delay(220);
    p1.roofPao(2, 9);

    SetTime(1045 - 387);
    p1.roofPao(5, 8.8);
    Delay(210);
    p7.roofPao(4, 8.8);
    Delay(220);
    p3.roofPao(4, 9.2);

    SetTime(1900 - 387);
    p5.roofPao(1, 9);
    Delay(240);
    p5.roofPao(3, 9);
    Delay(446);
    p5.roofPao(4, 9);

    SetTime(1045);
    Card(FLOWER_POT, 3, 9);
    Delay(1170);
    Card(FLOWER_POT, 5, 9);

    SetTime(1400);
    Card(ICE_SHROOM, 3, 9);

    // w10 PDD/PSD
    SetTime(225 - 387, 10);
    p3.roofPao(4, 9.2);
    Delay(35);
    p1.roofPao(4, 9.2);
    Delay(110);
    p7.roofPao(4, 8.8);

    SetTime(376 - 387);
    p7.roofPao(2, 8.8);
    Delay(120);
    p3.roofPao(2, 8.8);
    Delay(139);
    p1.roofPao(2, 8.7);
    SetTime(696 - 387);
    p3.roofPao(4, 9.5);

    SetTime(700 - 298);
    Card(COFFEE_BEAN, 3, 9);
    SetPlantActiveTime(ICE_SHROOM, 298);
    Delay(300);
    Shovel(3, 9);
    SetTime(700);
    Card({{FLOWER_POT, 5, 9}, {M_ICE_SHROOM, 5, 9}});

    // w11 IP-PPDD
    SetTime(950 - 387, 11);
    p3.roofPao(4, 8.8);
    p5.roofPao(1, 8.675);

    SetTime(1160 - 387);
    p1.roofPao(5, 9.2);
    p7.roofPao(2, 8.8);

    SetTime(899);
    Card(FLOWER_POT, 1, 9);

    // w12 PPSSDD
    SetTime(225 - 387, 12);
    p5.roofPao(4, 8.8);
    Delay(160);
    p1.roofPao(5, 8.425);
    Delay(110);
    p7.roofPao(4, 8.8);

    SetTime(225 - 387);
    p7.roofPao(1, 8.8);
    Delay(100);
    p1.roofPao(2, 9.2);
    Delay(110);
    p3.roofPao(2, 8.8);
    SetTime(670 - 387);
    p5.roofPao(3, 9);

    SetTime(700 - 298);
    Card(COFFEE_BEAN, 5, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);

    SetTime(501);
    Card(FLOWER_POT, 3, 9);
    Delay(40);
    Card(JALAPENO, 1, 9);
    Delay(100);
    Shovel(1, 9);

    // w13 IPaA'-NDD 100 1150
    SetTime(315, 13);
    Card(SQUASH, 5, 9);
    SetTime(520);
    Card(ICE_SHROOM, 3, 9);

    SetTime(951 - 268);
    Card({{FLOWER_POT, 4, 9}, {DOOM_SHROOM, 4, 9}, {COFFEE_BEAN, 4, 9}});
    SetTime(1150 - 387);
    p5.roofPao(4, 8.85);
    Delay(20);
    p5.roofPao(1, 7.8);

    // w14 PAD/PSD
    SetTime(225 - 387, 14);
    p3.roofPao(4, 9.2);
    Delay(10);
    p1.roofPao(4, 9.2);
    Delay(125);
    p7.roofPao(4, 8.8);

    SetTime(344 - 387);
    p7.roofPao(2, 8.8);
    Delay(220);
    p3.roofPao(2, 9);

    SetTime(344);
    Card({{FLOWER_POT, 1, 9}, {CHERRY_BOMB, 1, 9}});
    Delay(300);
    Card(KERNEL_PULT, 1, 9);
    SetTime(601 - 298);
    Card(COFFEE_BEAN, 3, 9);
    SetPlantActiveTime(ICE_SHROOM, 298);
    Delay(300);
    Shovel(3, 9);

    // w15 IPP-B-PPDD 1567
    SetTime(315 - 387, 15);
    p3.roofPao(4, 9.5);
    p1.roofPao(2, 9);

    SetTime(1100 - 387);
    p5.roofPao(3, 8.15);
    Delay(230);
    Shovel(3, 5);
    Card(KERNEL_PULT, 3, 5);
    Delay(751);
    Card({{KERNEL_PULT, 3, 6}, {COB_CANNON, 3, 5}});

    SetTime(1367 - 387);
    p3.roofPao(2, 9);
    p7.roofPao(4, 9);

    Delay(212);
    p7.roofPao(1, 9);
    Delay(10);
    p1.roofPao(4, 7.4);

    SetTime(823);
    Card(FLOWER_POT, 5, 9);
    SetTime(1200);
    Shovel({{1, 9}, {1, 9}, {5, 9}});

    // w16
    SetTime(30, 16);
    Card({{FLOWER_POT, 1, 9}, {M_ICE_SHROOM, 1, 9}});

    SetTime(225 - 387);
    p5.roofPao(2, 8.8);
    Delay(65);
    p1.roofPao(2, 9.2);
    Delay(110);
    p5.roofPao(2, 8.8);

    SetTime(379 - 387);
    p7.roofPao(4, 8.8);
    Delay(134);
    p3.roofPao(4, 8.475);
    Delay(122);
    p1.roofPao(5, 8.7);

    SetTime(648 - 298);
    Card(COFFEE_BEAN, 1, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);
    Delay(300);
    Card(SQUASH, 1, 9);
    Delay(250);
    Card(KERNEL_PULT, 1, 9);

    // w17 IP-B-PPDD 48 1490
    SetTime(530 - 387, 17);
    p5.roofPao(2, 9);

    SetTime(1050 - 387);
    p5.roofPao(3, 8.15);

    SetTime(1290 - 387);
    p3.roofPao(2, 9);
    p7.roofPao(4, 8.45);

    Delay(210);
    p1.roofPao(2, 9);
    p5.roofPao(4, 8.8);

    SetTime(779);
    Card(FLOWER_POT, 5, 9);
    SetTime(1150);
    Shovel({{1, 9}, {1, 9}, {5, 9}});

    // w18
    SetTime(230 - 387, 18);
    p7.roofPao(4, 8.8);
    p3.roofPao(2, 9);
    Delay(110);
    p3.roofPao(4, 8.1);
    Delay(108);
    p1.roofPao(2, 5);

    SetTime(601 - 298);
    Card({{FLOWER_POT, 3, 9}, {ICE_SHROOM, 3, 9}, {COFFEE_BEAN, 3, 9}});
    SetPlantActiveTime(ICE_SHROOM, 298);

    // w19
    SetTime(215, 19);
    Card(JALAPENO, 3, 9);
    Delay(100);
    Shovel(3, 9);
    SetTime(589 - 387);
    p3.roofPao(2, 9);
    p7.roofPao(4, 9);

    Delay(240);
    p7.roofPao(4, 8.25);
    p1.roofPao(2, 8.25);

    SetTime(1075 - 387);
    p5.roofPao(4, 9);
    p1.roofPao(2, 9.2);
    Delay(210);
    p5.roofPao(4, 8.8);
    p7.roofPao(2, 8.8);
    Delay(220);
    p1.roofPao(2, 9.2);
    p3.roofPao(4, 9);

    SetTime(1500);
    Card({{FLOWER_POT, 1, 9}, {CHERRY_BOMB, 1, 9}});
    SetTime(2300 - 387);
    p5.roofPao(4, 9);
    SetTime(2339);
    Card(M_ICE_SHROOM, 1, 9);

    // w20
    SetTime(-298, 20);
    Card(COFFEE_BEAN, 1, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);
    Delay(300);
    Shovel(1, 9);

    SetTime(400 - 387);
    p7.roofPao(2, 9);
    p3.roofPao(4, 9);
    SetTime(1050 - 387);
    p5.roofPao({{2, 8.7}, {4, 8.7}});
    Delay(220);
    p1.roofPao(2, 8.7);
    p7.roofPao(4, 8.7);
    Delay(220);
    p3.roofPao(2, 8.7);
    p7.roofPao(4, 8.7);
    Delay(500);
    p3.roofPao(2, 8);
    p7.roofPao(4, 8);
    p1.roofPao(4, 9);

    SetTime(1050);
    Card(FLOWER_POT, 3, 9);
    Delay(408);
    Card(ICE_SHROOM, 3, 9);
}
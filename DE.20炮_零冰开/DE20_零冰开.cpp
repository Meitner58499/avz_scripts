#include "avz.h"
#include "avz_spawn_utils.h"
using namespace AvZ;

AvZ::PaoOperator p;
AvZ::IceFiller i;
void Script()
{
    MaidCheats::dancing();
    // SetGameSpeed(10);
    averageSpawn({POGO_ZOMBIE, GIGA_GARGANTUAR, ZOMBONI, POLE_VAULTING_ZOMBIE, GARGANTUAR, ZOMBIE});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 COFFEE_BEAN,
                 CHERRY_BOMB,
                 DOOM_SHROOM,
                 COB_CANNON,
                 SCAREDY_SHROOM,
                 FLOWER_POT,
                 KERNEL_PULT,
                 PUMPKIN});
    SetZombies({ZOMBIE,
                POLE_VAULTING_ZOMBIE,
                ZOMBONI,
                DIGGER_ZOMBIE,
                POGO_ZOMBIE,
                DANCING_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR});
    SetTime(-599, 1);
    Shovel(3, 9);
    // SkipTick(0, 10);
    p.resetPaoList({{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}, {1, 5}, {2, 5}, {4, 5}, {5, 5}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}});
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });

    SetTime(-599, 1);
    Card(M_ICE_SHROOM, 3, 9);

    // w1:PD/PSD
    SetTime(360 - 373, 1);
    p.pao(2, 9);
    Delay(107);
    p.pao(1, 7.8);

    SetTime(225 - 373);
    p.pao(4, 9);
    Delay(25);
    p.pao(4, 8.85);
    Delay(110);
    p.pao(4, 8.85);

    // w2:PAD/PD
    SetTime(360 - 373, 2);
    p.pao(2, 9);
    Delay(107);
    p.pao(1, 8.85);
    SetTime(156);
    Card({{KERNEL_PULT, 1, 9}, {CHERRY_BOMB, 2, 9}});
    Delay(10);
    Shovel(1, 9);

    SetTime(255 - 373);
    p.pao(4, 9);
    Delay(264);
    p.pao(4, 3.5);

    SetTime(445);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(134);
    Shovel({{4, 9}, {5, 9}});
    SetTime(460);
    Card(PUMPKIN, 3, 9);
    Delay(100);
    Shovel(3, 9, true);
    SetTime(600);
    Card(ICE_SHROOM, 1, 9);

    SetTime(700 - 298);
    Card(COFFEE_BEAN, 3, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);

    // w3:IPP-NDD 100 1151
    SetTime(250 - 373, 3);
    p.pao(2, 8.6);
    SetTime(550 - 373);
    p.pao(4, 7.2);

    SetTime(950 - 298);
    Card({{DOOM_SHROOM, 3, 9}, {COFFEE_BEAN, 3, 9}});
    SetPlantActiveTime(DOOM_SHROOM, 298);
    SetTime(1159 - 373);
    p.pao({{2, 8.85}, {4, 8.85}});

    SetTime(810);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(250);
    Shovel({{4, 9}, {5, 9}});

    // w4:PSD/Pd
    SetTime(225 - 373, 4);
    p.pao(1, 8.65);
    Delay(10);
    p.pao(2, 8.85);
    Delay(250);
    p.pao(1, 5);

    SetTime(235 - 373);
    p.pao(4, 8.85);
    Delay(264);
    p.pao(4, 3.5);

    SetTime(419);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(130);
    Shovel({{4, 9}, {5, 9}});
    SetTime(601 - 298);
    Card(COFFEE_BEAN, 1, 9);
    SetPlantActiveTime(ICE_SHROOM, 298);

    // w5:IPP-B-PPDD 1 1520
    SetTime(320 - 373, 5);
    p.rawPao(3, 5, 2, 9);
    Delay(210);
    Shovel(3, 5);
    Card(KERNEL_PULT, 3, 5);
    Delay(751);
    Card({{KERNEL_PULT, 3, 6}, {COB_CANNON, 3, 5}});
    SetTime(380 - 373, 5);
    p.pao(4, 7.65);

    SetTime(1080 - 373);
    p.pao(2, 8.15);

    SetTime(1320 - 373);
    p.pao({{1, 8.4}, {4, 9}});
    Delay(200);
    p.pao(2, 8.8);
    Delay(20);
    p.pao(4, 8.55);

    SetTime(848);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(266);
    Shovel({{4, 9}, {5, 9}});

    // w6:PSd/Pd
    SetTime(225 - 373, 6);
    p.pao(1, 8.65);
    Delay(10);
    p.pao(2, 8.85);
    Delay(264);
    p.pao(2, 3.5);

    SetTime(235 - 373);
    p.pao(4, 8.85);
    Delay(250);
    p.pao(4, 4.5);

    SetTime(419);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(160);
    Shovel({{4, 9}, {5, 9}});
    SetTime(0);
    Card(M_ICE_SHROOM, 1, 9);
    SetTime(620 - 298);
    Card(COFFEE_BEAN, 1, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);

    // w7:IPP-PPDD 8~20 1247
    SetTime(350 - 373, 7);
    p.pao(4, 7.7);
    p.rawPao(3, 5, 2, 7.8);

    SetTime(1047 - 373);
    p.pao({{2, 8.825}, {4, 8.825}});
    Delay(210);
    p.pao({{2, 8.825}, {4, 8.825}});

    SetTime(900);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(250);
    Shovel({{4, 9}, {5, 9}});

    // w8:Pd/AD
    SetTime(235 - 373, 8);
    p.pao(1, 8.85);
    Delay(264);
    p.pao(2, 3.5);

    SetTime(136);
    Card(CHERRY_BOMB, 4, 9);
    SetTime(345 - 373);
    p.pao(4, 8.1);

    SetTime(419);
    Card(FLOWER_POT, 4, 9);
    Delay(160);
    Shovel(4, 9);

    SetTime(360);
    Card(PUMPKIN, 5, 9);
    Delay(130);
    Shovel(5, 9, true);
    SetTime(601 - 298);
    Card({{ICE_SHROOM, 5, 9}, {COFFEE_BEAN, 5, 9}});
    SetPlantActiveTime(ICE_SHROOM, 298);

    // w9:IPPD-PSD/PDD 1 1250
    SetTime(589 - 373, 9);
    p.pao(2, 9);
    Delay(370);
    p.pao(2, 3);
    SetTime(400 - 373);
    p.pao(4, 7.55);

    SetTime(1050 - 373);
    p.pao({{2, 8.85}, {2, 8.85}, {4, 8.85}});
    Delay(210);
    p.pao(4, 8.85);
    Delay(2);
    p.pao(1, 8.65);
    Delay(220);
    p.pao(4, 8.8);
    SetTime(1527 - 373);
    p.pao({{1, 1}, {2, 9}});
    Delay(452);
    p.rawPao(3, 5, 4, 9);

    SetTime(900);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(250);
    Shovel({{4, 9}, {5, 9}});
    SetTime(2554);
    Card(M_ICE_SHROOM, 2, 9);

    // w10:PSSD/PD
    SetTime(225 - 373, 10);
    p.pao(2, 9);
    Delay(35);
    p.pao(3, 8.85);
    Delay(15);
    p.pao(2, 8.85);
    SetTime(295);
    Card(CHERRY_BOMB, 1, 9);

    SetTime(340 - 373);
    p.pao(4, 9);
    Delay(107);
    p.pao(4, 7.8);

    SetTime(445);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(134);
    Shovel({{4, 9}, {5, 9}});
    SetTime(600);
    Card(ICE_SHROOM, 1, 9);
    SetTime(700 - 298);
    Card(COFFEE_BEAN, 2, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);

    // w11 IPP-NDD 1151
    SetTime(250 - 373, 11);
    p.pao(2, 8.6);
    SetTime(405 - 373);
    p.pao(4, 7.525);

    SetTime(950 - 298);
    Card({{DOOM_SHROOM, 2, 9}, {COFFEE_BEAN, 2, 9}});
    SetPlantActiveTime(DOOM_SHROOM, 298);
    SetTime(1159 - 373);
    p.pao({{2, 8.85}, {4, 8.85}});

    SetTime(819);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(250);
    Shovel({{4, 9}, {5, 9}});

    // w12 PSD/Pd
    SetTime(225 - 373, 12);
    p.pao(1, 8.65);
    Delay(10);
    p.pao(2, 8.85);
    Delay(125);
    p.pao(1, 8.85);

    SetTime(235 - 373);
    p.pao(4, 8.85);
    Delay(264);
    p.pao(4, 3.5);

    SetTime(445);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(134);
    Shovel({{4, 9}, {5, 9}});

    SetTime(460);
    Card(PUMPKIN, 1, 9);
    Delay(130);
    Shovel(1, 9, true);
    SetTime(700 - 298);
    Card(COFFEE_BEAN, 1, 9);
    SetPlantActiveTime(ICE_SHROOM, 298);
    Delay(300);
    Card(M_ICE_SHROOM, 1, 9);

    // w13 IPP-PPDD 100 1150
    SetTime(250 - 373, 13);
    p.pao(2, 8.6);
    SetTime(405 - 373);
    p.pao(4, 7.525);

    SetTime(950 - 373);
    p.pao({{1, 8.85}, {4, 8.85}});
    Delay(210);
    p.rawPao(3, 5, 4, 8.85);
    Delay(10);
    p.pao(1, 8.65);
    Delay(210);
    Shovel(3, 5);
    Card(KERNEL_PULT, 3, 5);
    Delay(751);
    Card({{KERNEL_PULT, 3, 6}, {COB_CANNON, 3, 5}});

    SetTime(810);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(250);
    Shovel({{4, 9}, {5, 9}});

    // w14 PSD/Pd
    SetTime(225 - 373, 14);
    p.pao(2, 8.85);
    Delay(25);
    p.pao(1, 8.65);
    Delay(110);
    p.pao(1, 8.85);

    SetTime(235 - 373);
    p.pao(4, 8.85);
    Delay(264);
    p.pao(4, 3.5);

    SetTime(419);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(130);
    Shovel({{4, 9}, {5, 9}});
    SetTime(601 - 298);
    Card(COFFEE_BEAN, 1, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);

    // w15 IPP-B-PPDD 1520
    SetTime(320 - 373, 15);
    p.pao(2, 9);
    SetTime(380 - 373);
    p.pao(4, 7.65);

    SetTime(1085 - 373);
    p.rawPao(3, 5, 2, 8.15);

    SetTime(1320 - 373);
    p.pao({{1, 8.4}, {4, 9}});
    Delay(210);
    p.pao(2, 8.8);
    Delay(10);
    p.pao(4, 8.55);

    SetTime(848);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(266);
    Shovel({{4, 9}, {5, 9}});

    // w16 APd/Pd
    SetTime(235 - 373, 16);
    p.pao(2, 8.85);
    Delay(264);
    p.pao(2, 3.5);
    SetTime(126);
    Card(CHERRY_BOMB, 1, 9);

    SetTime(233 - 373);
    p.pao(4, 8.85);
    Delay(235);
    p.pao(4, 5);

    SetTime(419);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(160);
    Shovel({{4, 9}, {5, 9}});

    SetTime(601 - 298);
    Card({{ICE_SHROOM, 1, 9}, {COFFEE_BEAN, 1, 9}});
    SetPlantActiveTime(ICE_SHROOM, 298);

    // w17 IPP-PPDD 1 1250
    SetTime(180 - 373, 17);
    p.pao(2, 9);
    SetTime(560 - 373);
    p.pao(4, 7.4);

    SetTime(1050 - 373);
    p.pao({{2, 8.85}, {4, 8.85}});
    Delay(210);
    p.pao({{2, 8.85}, {4, 8.85}});

    SetTime(900);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(250);
    Shovel({{4, 9}, {5, 9}});

    // w18 Pd/PD
    SetTime(235 - 373, 18);
    p.pao(1, 8.85);
    Delay(264);
    p.pao(2, 3.5);

    SetTime(235 - 373);
    p.pao(4, 8.85);
    Delay(110);
    p.pao(4, 8.1);

    SetTime(419);
    Card(FLOWER_POT, 4, 9);
    Delay(160);
    Shovel(4, 9);

    SetTime(-20);
    Card(M_ICE_SHROOM, 5, 9);
    SetTime(360);
    Card(PUMPKIN, 5, 9);
    Delay(130);
    Shovel(5, 9, true);
    SetTime(602 - 298);
    Card(COFFEE_BEAN, 5, 9);
    SetPlantActiveTime(M_ICE_SHROOM, 298);

    // w19:IPPD-PSD/PDD 1 1250
    SetTime(589 - 373, 19);
    p.rawPao(3, 5, 2, 9);
    Delay(370);
    p.pao(2, 3);
    SetTime(400 - 373);
    p.pao(4, 7.55);

    SetTime(1050 - 373);
    p.pao({{2, 8.85}, {2, 8.85}, {4, 8.85}});
    Delay(210);
    p.pao(4, 8.85);
    Delay(2);
    p.pao(1, 8.65);
    Delay(230);
    p.pao(4, 8.6);
    SetTime(1522 - 373);
    p.pao(1, 1);
    Delay(282);
    p.pao(2, 9);
    Delay(380);
    p.pao(4, 9);

    SetTime(900);
    Card({{FLOWER_POT, 4, 9}, {SCAREDY_SHROOM, 5, 9}});
    Delay(250);
    Shovel({{4, 9}, {5, 9}});

    // w20
    SetTime(280 - 373, 20);
    p.pao({{2, 9}, {4, 9}, {2, 9}, {4, 9}});
    Delay(107);
    p.pao({{1, 8.8}, {4, 8.8}});
    Delay(220);
    p.pao({{1, 8}, {4, 8}});
    Delay(300);
    p.pao({{1, 9}, {4, 9}});
}
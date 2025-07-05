#include "avz.h"
#include "avz_spawn_utils.h"
#include "pvzstruct.h"
using namespace AvZ;

AvZ::PaoOperator p;
AvZ::IceFiller i;

void Script()
{
    MaidCheats::dancing();
    SetGameSpeed(1.25);
    averageSpawn({POGO_ZOMBIE, GIGA_GARGANTUAR, ZOMBONI, POLE_VAULTING_ZOMBIE, GARGANTUAR, ZOMBIE});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 COFFEE_BEAN,
                 CHERRY_BOMB,
                 SQUASH,
                 SPIKEWEED,
                 SNOW_PEA,
                 FLOWER_POT,
                 PUMPKIN,
                 JALAPENO});
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
    // SkipTick(5000, 20);
    p.resetPaoList({{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}});
    SetTime(0, 1);
    // InsertOperation([=]() { SetGameSpeed(2); });

    SetTime(-599, 1);
    Card(M_ICE_SHROOM, 4, 9);
    SetTime(0, 11);
    Card(ICE_SHROOM, 4, 9);

    SetTime(500, 2);
    Card(ICE_SHROOM, 3, 9);
    SetTime(400, 12);
    Card(M_ICE_SHROOM, 3, 9);

    SetTime(-200, 6);
    Card(M_ICE_SHROOM, 3, 9);
    SetTime(601 - 298, 16);
    Card(ICE_SHROOM, 3, 9);

    SetTime(300, 8);
    Card(ICE_SHROOM, 5, 9);
    SetTime(-20, 18);
    Card(M_ICE_SHROOM, 5, 9);

    SetTime(2350, 9);
    Card(M_ICE_SHROOM, 3, 9);
    SetTime(3000, 19);
    Card(ICE_SHROOM, 3, 9);

    // w10:PPSSDD
    SetTime(225 - 373, 10);
    p.pao({{2, 9}, {4, 9}});
    Delay(40);
    p.pao(2, 9);
    Delay(20);
    p.pao(4, 9);
    Delay(90);
    p.pao(1, 8.8);
    Delay(30);
    p.pao(4, 8.8);

    for (auto w : {1, 11})
    {
        // w1:IPa-PPDd 100 1150
        SetTime(250 - 373, w);
        p.pao(4, 8.6);
        SetTime(400);
        Card({{SQUASH, 1, 9}, {SPIKEWEED, 2, 9}});

        SetTime(950 - 373);
        p.pao({{2, 8.85}, {5, 8.85}});
        Delay(210);
        p.pao(4, 8.85);
        Delay(180);
        p.pao(1, 2.4625);

        SetTime(-199);
        Card(COFFEE_BEAN, 3, 9);
        SetPlantActiveTime(ICE_SHROOM, 298);
        SetPlantActiveTime(M_ICE_SHROOM, 298);

        // w2:PPSSDD
        SetTime(225 - 373, w + 1);
        p.pao(2, 9);
        Delay(30);
        p.pao(2, 9);
        Delay(110);
        p.pao(1, 8.85);

        SetTime(225 - 373);
        p.pao(4, 9);
        Delay(30);
        p.pao(4, 9);
        Delay(110);
        p.pao(4, 8.85);

        SetTime(420);
        Card(PUMPKIN, 4, 9);
        Delay(130);
        Shovel(4, 9, true);
        SetTime(695 - 298);
        Card(COFFEE_BEAN, 4, 9);
        SetPlantActiveTime(ICE_SHROOM, 298);
        SetPlantActiveTime(M_ICE_SHROOM, 298);

        // w3:IA'P-APDd 95 1155
        SetTime(60, w + 2);
        Card(JALAPENO, 5, 9);
        SetTime(300);
        Card(SPIKEWEED, 1, 9);
        SetTime(300 - 373);
        p.pao(3, 9);

        SetTime(856);
        Card(CHERRY_BOMB, 4, 9);
        SetTime(955 - 373);
        p.pao({{1, 8.85}});
        Delay(210);
        p.pao(4, 8.85);
        Delay(183);
        p.pao(1, 2.4625);

        // w4:PSD/Pd
        SetTime(225 - 373, w + 3);
        p.pao(2, 9);
        Delay(30);
        p.pao(2, 9);
        Delay(110);
        p.pao(1, 8.85);

        SetTime(235 - 373);
        p.pao(4, 8.85);
        Delay(264);
        p.pao(4, 3.5);

        SetTime(419);
        Card({{FLOWER_POT, 4, 9}, {SNOW_PEA, 5, 9}});
        Delay(160);
        Shovel({{4, 9}, {5, 9}});
        SetTime(601 - 298);
        Card(COFFEE_BEAN, 3, 9);
        SetPlantActiveTime(ICE_SHROOM, 298);
        SetPlantActiveTime(M_ICE_SHROOM, 298);

        // w5:IPa-PPDd 1 1271
        SetTime(400, w + 4);
        Card({{SQUASH, 1, 9}, {SPIKEWEED, 2, 9}});
        SetTime(440 - 373);
        p.pao(4, 7.5);

        SetTime(1071 - 373);
        p.pao({{1, 8.85}, {4, 9}});
        Delay(210);
        p.pao(4, 9.5);
        Delay(183);
        p.pao(1, 2.4625);

        SetTime(900);
        Card({{FLOWER_POT, 4, 9}, {SNOW_PEA, 5, 9}});
        Delay(250);
        Shovel({{4, 9}, {5, 9}});

        // w6:PSD/Pd
        SetTime(225 - 373, w + 5);
        p.pao(2, 9);
        Delay(30);
        p.pao(2, 9);
        Delay(110);
        p.pao(1, 8.85);

        SetTime(235 - 373);
        p.pao(4, 8.85);
        Delay(264);
        p.pao(4, 3.5);

        SetTime(419);
        Card({{FLOWER_POT, 4, 9}, {SNOW_PEA, 5, 9}});
        Delay(160);
        Shovel({{4, 9}, {5, 9}});
        SetTime(601 - 298);
        Card(COFFEE_BEAN, 3, 9);
        SetPlantActiveTime(ICE_SHROOM, 298);
        SetPlantActiveTime(M_ICE_SHROOM, 298);

        // w7:IPP-PPDD 1 1252
        SetTime(320 - 373, w + 6);
        p.pao(1, 9);
        SetTime(450 - 373);
        p.pao(4, 7.5);

        SetTime(1052 - 373);
        p.pao({{2, 8.825}, {4, 8.825}});
        Delay(210);
        p.pao({{2, 8.825}, {4, 8.825}});

        SetTime(900);
        Card({{FLOWER_POT, 4, 9}, {SNOW_PEA, 5, 9}});
        Delay(250);
        Shovel({{4, 9}, {5, 9}});

        // w8:PPdd
        SetTime(240 - 373, w + 7);
        p.pao(1, 8.8);
        Delay(264);
        p.pao(2, 3.5);
        SetTime(184);
        Card(JALAPENO, 3, 9);

        SetTime(240 - 373);
        p.pao(4, 8.8);
        Delay(264);
        p.pao(4, 3.5);

        SetTime(419);
        Card({{FLOWER_POT, 3, 9}, {SNOW_PEA, 4, 9}});
        Delay(160);
        Shovel({{3, 9}, {4, 9}});

        SetTime(314);
        Card(PUMPKIN, 5, 9);
        Delay(130);
        Shovel(5, 9, true);
        SetTime(601 - 298);
        Card(COFFEE_BEAN, 5, 9);
        SetPlantActiveTime(ICE_SHROOM, 298);
        SetPlantActiveTime(M_ICE_SHROOM, 298);

        // w9:IPAd-PPDD 1 1250
        SetTime(489, w + 8);
        Card(CHERRY_BOMB, 2, 9);
        SetTime(821 - 373);
        p.pao(1, 8.25);
        SetTime(400 - 373);
        p.pao(4, 7.625);

        SetTime(1050 - 373);
        p.pao({{2, 8.825}, {4, 8.825}});
        Delay(210);
        p.pao({{2, 8.825}, {4, 8.825}});
        Delay(212);
        p.pao({{1, 8.8}, {4, 8.8}, {1, 1}});
        Delay(300);
        p.pao(2, 8.8);
        SetTime(1600);
        p.pao(4, 9);

        SetTime(850);
        Card({{FLOWER_POT, 4, 9}, {SNOW_PEA, 5, 9}});
        Delay(250);
        Shovel({{4, 9}, {5, 9}});
    }
    SetTime(280 - 373, 20);
    p.pao({{2, 9}, {4, 9}, {2, 9}, {4, 9}});
    Delay(107);
    p.pao({{1, 8.8}, {4, 8.8}});
    Delay(220);
    p.pao({{1, 8}, {4, 8}});
    Delay(300);
    p.pao({{1, 9}, {4, 9}});
}
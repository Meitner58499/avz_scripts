#include "avz.h"

using namespace AvZ;

void Script()
{
    SetGameSpeed(10);
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    //SkipTick(6000, 20);
    MaidCheats::dancing();
    pao_operator.resetPaoList({{1, 1},
                               {1, 3},
                               {1, 5},
                               {1, 7},
                               {2, 1},
                               {2, 7},
                               {3, 7},
                               {4, 7},
                               {5, 1},
                               {5, 7},
                               {6, 1},
                               {6, 3},
                               {6, 5},
                               {6, 7}});
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 COFFEE_BEAN,
                 CHERRY_BOMB,
                 DOOM_SHROOM,
                 SCAREDY_SHROOM,
                 LILY_PAD,
                 FLOWER_POT,
                 UMBRELLA_LEAF,
                 STARFRUIT});
    SetZombies({POLE_VAULTING_ZOMBIE,
                ZOMBONI,
                POGO_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                DIGGER_ZOMBIE,
                DOLPHIN_RIDER_ZOMBIE,
                DANCING_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR});

    // 存核
    SetTime(4000, 1);
    Card(LILY_PAD, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Card(DOOM_SHROOM, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Delay(5001);
    Card(LILY_PAD, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Card(DOOM_SHROOM, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Delay(5001);
    Card(LILY_PAD, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Card(DOOM_SHROOM, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Delay(7501);
    Card(LILY_PAD, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Card(DOOM_SHROOM, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Delay(5001);
    Card(LILY_PAD, 4, 2);
    Card(DOOM_SHROOM, 4, 2);
    Delay(5001);
    Card(LILY_PAD, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Card(DOOM_SHROOM, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});
    Delay(5001);
    Card(LILY_PAD, 3, 2);
    Card(DOOM_SHROOM, 3, 2);
    SetTime(-599, 1);
    ice_filler.start({{2, 5}, {3, 5}, {4, 5}, {5, 5}, {3, 6}, {4, 6}});
    SetWavelength({{1, 601}, {2, 601}, {3, 1375}, {4, 1534}, {5, 1420}, {6, 1534}, {7, 1440}, {8, 1470}, {10, 601}, {11, 601}, {12, 1375}, {13, 1534}, {14, 1420}, {15, 1534}, {16, 1440}, {17, 1440}, {18, 1534}});
    // w1/10:PD/PAD
    for (auto i : {1, 10})
    {
        SetTime(360 - 373, i);
        pao_operator.pao(2, 9);
        Delay(107);
        pao_operator.pao(1, 7.8);
        SetTime(255 - 373, i);
        pao_operator.pao(5, 9);
        Delay(108);
        pao_operator.pao(5, 8.7);
        SetTime(155, i);
        Card(CHERRY_BOMB, 5, 9);
    }
    // w2/11:PSD/B
    for (auto i : {2, 11})
    {
        SetTime(255 - 373, i);
        pao_operator.pao({{2, 9}, {1, 9}});
        Delay(107);
        pao_operator.pao(1, 8.7);
        SetTime(305 - 373, i);
        pao_operator.pao(5, 8.225);
        SetTime(360, i);
        Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
        Delay(100);
        Shovel({{5, 9}, {6, 9}});
        SetTime(600, i);
        Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}});
    }
    // w3/12:IPP-PP
    for (auto i : {3, 12})
    {
        SetTime(303, i - 1);
        ice_filler.coffee();
        Ice3(298);
        SetTime(300 - 373, i);
        pao_operator.pao(1, 8.8);
        SetTime(450 - 373, i);
        pao_operator.pao(5, 7.4);
        SetTime(1175 - 373, i);
        pao_operator.pao({{2, 9}, {5, 9}});
        SetTime(510, i);
        Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
        Delay(91);
        Shovel({{5, 9}, {6, 9}});
        SetTime(876, i);
        Card({{SCAREDY_SHROOM, 5, 9}, {STARFRUIT, 6, 9}});
        Delay(150);
        Shovel({{5, 9}, {6, 9}});
        SetTime(1150, i);
        Shovel({{1, 9}, {2, 9}});
    }
    // w4/13:IPPn-B-PP
    for (auto i : {4, 13})
    {
        SetTime(1385 - 298, i - 1);
        ice_filler.coffee();
        Ice3(298);
        SetTime(410 - 373, i);
        pao_operator.pao({{1, 8.5}, {5, 8.5}});
        SetTime(780 - 298, i);
        Card(COFFEE_BEAN, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});

        SetTime(1175 - 373, i);
        pao_operator.pao(3, 8.1);
        SetTime(1334 - 373, i);
        pao_operator.pao({{1, 8.7}, {5, 8.7}});

        SetTime(410, i);
        Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
        Delay(750);
        Shovel({{5, 9}, {6, 9}});
        Delay(1);
        Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
        Delay(1);
        Shovel({{5, 9}, {6, 9}});
        SetTime(872, i);
        Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}});
        Delay(268);
        Shovel({{1, 9}, {2, 9}});
    }
    // w5/14:IPd/PD-PP
    for (auto i : {5, 14})
    {
        SetTime(1544 - 298, i - 1);
        ice_filler.coffee();
        Ice3(298);
        SetTime(410 - 373, i);
        pao_operator.pao(5, 8.5);
        Delay(220);
        pao_operator.pao(5, 8.575);
        SetTime(520 - 373, i);
        pao_operator.pao(2, 9);
        Delay(350);
        pao_operator.pao(1, 3.5);
        SetTime(1220 - 373, i);
        pao_operator.pao({{2, 8.7}, {5, 8.7}});

        SetTime(824, i);
        Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
        Delay(268);
        Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});
    }
    //  w6/15:IPPn-B-PP
    for (auto i : {6, 15})
    {
        SetTime(1430 - 298, i - 1);
        ice_filler.coffee();
        Ice3(298);
        SetTime(410 - 373, i);
        pao_operator.pao({{1, 8.5}, {5, 8.5}});
        SetTime(780 - 298, i);
        Card(COFFEE_BEAN, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});

        SetTime(1075 - 373, i);
        pao_operator.pao(3, 8.25);
        SetTime(1334 - 373, i);
        pao_operator.pao({{1, 8.7}, {5, 8.7}});

        SetTime(872, i);
        Card({{SCAREDY_SHROOM, 1, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
        Delay(268);
        Shovel({{1, 9}, {5, 9}, {6, 9}});
        SetTime(550, i);
        Card(STARFRUIT, 2, 9);
        Delay(268);
        Shovel(2, 9);
        SetTime(1335, i);
        Card(STARFRUIT, 1, 9);
        Delay(1);
        Shovel(1, 9);
    }
    // w7:IPd/PD-PP
    SetTime(1544 - 298, 6);
    ice_filler.coffee();
    Ice3(298);
    SetTime(410 - 373, 7);
    pao_operator.pao(5, 8.5);
    Delay(220);
    pao_operator.pao(5, 8.575);
    SetTime(578 - 373, 7);
    pao_operator.pao(2, 9);
    Delay(370);
    pao_operator.pao(1, 3.5);

    SetTime(1240 - 373, 7);
    pao_operator.pao({{2, 8.7}, {5, 8.7}});

    SetTime(824, 7);
    Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(268);
    Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});

    // w8:IPPda-PP
    SetTime(1450 - 298, 7);
    ice_filler.coffee();
    Ice3(298);
    SetTime(578 - 373, 8);
    pao_operator.pao({{2, 9}, {5, 9}});
    Delay(360);
    pao_operator.pao(1, 3.5);
    SetTime(838, 8);
    Card(CHERRY_BOMB, 5, 3);

    SetTime(1270 - 373, 8);
    pao_operator.pao({{2, 8.7}, {5, 8.7}});

    SetTime(824, 8);
    Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(268);
    Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});

    // w9:IPPn-PPDDDd
    SetTime(1480 - 298, 8);
    ice_filler.coffee();
    Ice3(298);
    SetTime(578 - 373, 9);
    pao_operator.pao({{2, 9}, {5, 9}});
    SetTime(948 - 298, 9);
    Card(COFFEE_BEAN, 3, 2);
    SetTime(1270 - 373, 9);
    pao_operator.pao({{2, 8.7}, {5, 8.7}});
    Delay(220);
    pao_operator.pao({{1, 8.7}, {5, 8.7}});
    Delay(220);
    pao_operator.pao(1, 8.7);
    Delay(150);
    pao_operator.pao(5, 3.5);
    pao_operator.recoverPao({{1, 9}, {5, 9}, {5, 9}});
    SetTime(896, 9);
    Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(268);
    Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});
    SetTime(1700, 9);
    Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(375);
    Shovel({{5, 9}, {6, 9}});
    Card({{SCAREDY_SHROOM, 5, 9}, {STARFRUIT, 6, 9}});
    Delay(380);
    Shovel({{5, 9}, {6, 9}});
    Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(300);
    Shovel({{5, 9}, {6, 9}});

    // w16:IPa/PD-PP
    SetTime(1544 - 298, 15);
    ice_filler.coffee();
    Ice3(298);
    SetTime(410 - 373, 16);
    pao_operator.pao(5, 8.5);
    Delay(220);
    pao_operator.pao(5, 8.575);
    SetTime(578 - 373, 16);
    pao_operator.pao(2, 9);
    SetTime(848, 16);
    Card(CHERRY_BOMB, 2, 3);

    SetTime(1240 - 373, 16);
    pao_operator.pao({{2, 8.7}, {5, 8.7}});

    SetTime(824, 16);
    Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(268);
    Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});

    // w17:IPd/PD-PP
    SetTime(1450 - 298, 16);
    ice_filler.coffee();
    Ice3(298);
    SetTime(410 - 373, 17);
    pao_operator.pao(5, 8.5);
    Delay(220);
    pao_operator.pao(5, 8.575);
    SetTime(578 - 373, 17);
    pao_operator.pao(2, 9);
    Delay(360);
    pao_operator.pao(1, 3.5);

    SetTime(1240 - 373, 17);
    pao_operator.pao({{2, 8.7}, {5, 8.7}});

    SetTime(824, 17);
    Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(268);
    Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});

    // w18:IPPn-B-PP
    SetTime(1450 - 298, 17);
    ice_filler.coffee();
    Ice3(298);
    SetTime(410 - 373, 18);
    pao_operator.pao({{1, 8.5}, {5, 8.5}});
    SetTime(780 - 298, 18);
    Card(COFFEE_BEAN, {{3, 3}, {3, 4}, {4, 3}, {4, 4}});

    SetTime(1075 - 373, 18);
    pao_operator.pao(3, 8.25);
    SetTime(1334 - 373, 18);
    pao_operator.pao({{1, 8.7}, {5, 8.7}});

    SetTime(872, 18);
    Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(268);
    Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});

    // w19:IPPn-PPDDAd
    SetTime(1544 - 298, 18);
    ice_filler.coffee();
    Ice3(298);
    SetTime(410 - 373, 19);
    pao_operator.pao({{2, 8.5}, {5, 8.5}});
    SetTime(780 - 298, 19);
    Card(COFFEE_BEAN, 4, 2);
    SetTime(1175 - 373, 19);
    pao_operator.pao({{2, 8.7}, {5, 8.7}});
    Delay(220);
    pao_operator.pao({{1, 8.5}, {5, 8.5}});
    SetTime(1509, 19);
    Card(CHERRY_BOMB, 1, 9);
    SetTime(1175 + 220 + 360 - 373, 19);
    pao_operator.pao(5, 3.5);
    pao_operator.recoverPao({{1, 9}, {5, 9}, {5, 9}});
    SetTime(880, 19);
    Card({{SCAREDY_SHROOM, 1, 9}, {STARFRUIT, 2, 9}, {FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(268);
    Shovel({{1, 9}, {2, 9}, {5, 9}, {6, 9}});
    SetTime(1700, 19);
    Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(375);
    Shovel({{5, 9}, {6, 9}});
    Card({{SCAREDY_SHROOM, 5, 9}, {STARFRUIT, 6, 9}});
    Delay(380);
    Shovel({{5, 9}, {6, 9}});
    Card({{FLOWER_POT, 5, 9}, {UMBRELLA_LEAF, 6, 9}});
    Delay(300);
    Shovel({{5, 9}, {6, 9}});

    // w20
    SetTime(-150, 20);
    pao_operator.pao(4, 7.5875);
    SetTime(310 - 373, 20);
    pao_operator.pao({{2, 9}, {5, 9}, {2, 9}, {5, 9}});
    Delay(107);
    pao_operator.pao({{1, 8.6}, {5, 8.6}});
    Delay(220);
    pao_operator.pao({{2, 8.6}, {5, 8.6}});
}
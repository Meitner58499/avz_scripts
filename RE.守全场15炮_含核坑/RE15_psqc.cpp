#include "avz.h"
#include "avz_spawn_utils.h"
using namespace AvZ;

AvZ::PaoOperator pao1;
AvZ::PaoOperator pao3;
AvZ::PaoOperator pao7;
inline void P3P7(float col_3, float col_7)
{
    pao3.roofPao(2, col_3);
    pao7.roofPao(4, col_7);
}
inline void P1P7(float col_1, float col_7)
{
    pao1.roofPao(2, col_1);
    pao7.roofPao(4, col_7);
}
inline void plant(int wave, int Ash, const std::vector<Position> &lst)
{
    SetTime(11, wave);
    Card({{FLOWER_POT, 1, 9}, {SQUASH, 1, 9}});
    Delay(340);
    Card(Ash, 1, 9);
    Delay(100);
    Card(UMBRELLA_LEAF, 1, 9);
    SetTime(776 - 289, wave);
    Card(COFFEE_BEAN, lst);
    SetTime(896, wave);
    Card({{FLOWER_POT, 2, 9}, {SNOW_PEA, 2, 9}});
    Delay(266);
    Shovel({{1, 9}, {2, 9}, {1, 9}, {2, 9}});
}
void Script()
{
    SetGameSpeed(10);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(10); });
                    
    KeyConnect('z', [=]()
               {Card({{FLOWER_POT, 1, 9}, {SNOW_PEA, 1, 9}});});
    SetErrorMode(AvZ::CONSOLE);

    averageSpawn({GIGA_GARGANTUAR, ZOMBONI, POLE_VAULTING_ZOMBIE, ZOMBIE});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 COFFEE_BEAN,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 JALAPENO,
                 SQUASH,
                 FLOWER_POT,
                 UMBRELLA_LEAF,
                 SNOW_PEA});
    SetZombies({ZOMBIE,
                POLE_VAULTING_ZOMBIE,
                CATAPULT_ZOMBIE,
                ZOMBONI,
                POGO_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                FOOTBALL_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR});
    SetTime(-599, 1);
    pao1.resetPaoList({{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}});
    pao3.resetPaoList({{1, 3}, {4, 3}, {5, 3}});
    pao7.resetPaoList({{1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}});
    ice_filler.start({{3, 6}, {3, 3}, {2, 3}});
    ice_filler.resetFillList({{3, 6}, {3, 3}, {2, 3}});

    SetTime(100, 6);
    Card(DOOM_SHROOM, {{3, 4}, {2, 5}, {3, 5}});
    Delay(5001);
    Card(DOOM_SHROOM, 2, 4);
    Delay(5001);
    Card(DOOM_SHROOM, 4, 5);
    Delay(5001);
    Card(DOOM_SHROOM, {{2, 5}, {3, 5}, {3, 4}});
    Delay(5001);
    Card(DOOM_SHROOM, {{3, 5}, {3, 4}, {2, 5}});
    Delay(5001);
    Card(DOOM_SHROOM, {{3, 4}, {2, 5}, {3, 5}});

    plant(2, 6, {{2, 5}, {3, 5}, {3, 4}});
    plant(5, 5, {{3, 5}, {3, 4}, {2, 5}});
    plant(8, 6, {{3, 4}, {2, 5}, {3, 5}});
    plant(12, 6, {{2, 4}});
    plant(15, 5, {{4, 5}});
    plant(18, 6, {{2, 5}, {3, 5}, {3, 4}});

    // PPDDDD|I-PP|I3aA/A'PPn-B-PPDD
    for (auto i : {3, 6, 9, 10, 13, 16, 19})
    {
        SetTime(355 - 387, i);
        P1P7(9, 8.8);
        Delay(147);
        P1P7(8.4, 8.4);
        Delay(133);
        pao1.roofPao(2, 8.8);
        pao3.roofPao(4, 8.9875);
        SetTime(608 - 298, i);
        ice_filler.coffee();
        Ice3(298);
    }
    for (auto i : {1, 4, 7, 11, 14, 17})
    {
        SetTime(1100 - 387, i);
        P3P7(8.75, 8.7);
        SetTime(1310 - 298, i);
        ice_filler.coffee();
        Ice3(298);
        SetTime(440 - 387, i + 1);
        P3P7(9, 9);
        SetTime(1075 - 387, i + 1);
        pao7.rawRoofPao(1, 5, 4, 8.15);
        SetTime(1375 - 387, i + 1);
        P1P7(8.8, 8.8);
        Delay(220);
        pao1.roofPao(2, 7.4125);
        pao3.rawRoofPao(5, 5, 4, 7.4125);
    }

    for (auto i : {9, 19})
    {
        SetTime(1701 - 387, i);
        pao3.roofPao(3, 9);
        pao7.roofPao(4, 9);

        SetTime(510, i);
        Card({{FLOWER_POT, 1, 9}, {SNOW_PEA, 1, 9}});

        SetTime(2930, i);
        Shovel({{1, 9}, {1, 9}});
        Card({{FLOWER_POT, 1, 9}, {SQUASH, 1, 9}, {UMBRELLA_LEAF, 2, 3}});
        Delay(751);
        Card(UMBRELLA_LEAF, 1, 9);
    }
    SetTime(-297, 1);
    Card(COFFEE_BEAN, 3, 9);
    Ice3(298);
    Delay(300);
    Shovel(3, 9);
    SetTime(34 - 387, 1);
    pao1.roofPao(2, 8.8);
    pao3.roofPao(4, 8.9875);

    SetTime(354, 10);
    Card({{FLOWER_POT, 2, 9}, {CHERRY_BOMB, 2, 9}});
    Delay(50);
    Shovel({{2, 3}, {1, 9}, {1, 9}});

    SetTime(160, 1);
    Card(FLOWER_POT, {{2, 5}, {3, 5}, {3, 4}, {2, 4}, {4, 5}});
    SetTime(90, 3);
    Card(FLOWER_POT, {{2, 5}, {3, 5}, {3, 4}, {2, 4}, {4, 5}});
    SetTime(90, 6);
    Card(FLOWER_POT, {{2, 5}, {3, 5}, {3, 4}, {2, 4}, {4, 5}});
    SetTime(90, 16);
    Card(FLOWER_POT, {{2, 5}, {3, 5}, {3, 4}, {2, 4}, {4, 5}});
    SetTime(90, 19);
    Card(FLOWER_POT, {{2, 5}, {3, 5}, {3, 4}, {2, 4}, {4, 5}});

    SetTime(280 - 387, 20);
    P1P7(9.5, 9.5);
    P1P7(9.5, 9.5);
    Delay(107);
    P1P7(9, 9);
    Delay(380);
    P1P7(8.3, 9);
    Card({{FLOWER_POT, 4, 9}, {UMBRELLA_LEAF, 4, 9}});
    SetTime(400, 20);
    Shovel(2, 3);
    Delay(250);
    Shovel({{1, 9}, {1, 9}, {4, 9}, {4, 9}});
    ice_filler.resetFillList({{3, 6}, {3, 3}, {2, 3}, {3, 9}});
    SetTime(1500, 20);
    Card(FLOWER_POT, {{2, 5}, {3, 5}, {3, 4}, {2, 4}, {4, 5}});
    Delay(751);
    Card(FLOWER_POT, 3, 9);
    SetTime(5500, 20);
    P1P7(9, 9);
}
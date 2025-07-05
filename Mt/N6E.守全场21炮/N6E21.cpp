/*
 */

#include "avz.h"

using namespace AvZ;
AvZ::PaoOperator p;
AvZ::TickRunner tick;

void Script()
{
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 JALAPENO,
                 SCAREDY_SHROOM,
                 FUME_SHROOM,
                 SUNFLOWER,
                 BLOVER,
                 FLOWER_POT});
    SetZombies({POLE_VAULTING_ZOMBIE,
                POGO_ZOMBIE,
                POLE_VAULTING_ZOMBIE,
                POGO_ZOMBIE,
                DIGGER_ZOMBIE,
                DIGGER_ZOMBIE,

                LADDER_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                FOOTBALL_ZOMBIE,

                DANCING_ZOMBIE,
                DANCING_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR,
                GARGANTUAR,
                GIGA_GARGANTUAR});

    // SetZombies({GIGA_GARGANTUAR});

    SetWavelength({{1, 601}, {2, 601}, {3, 1511}, {4, 1687}, {5, 601}, {6, 601}, {7, 601}, {8, 1535}, {10, 601}, {11, 601}, {12, 1511}, {13, 1687}, {14, 601}, {15, 601}, {16, 601}, {17, 1535}, {18, 1623}});
    SetTime(-599, 1);
    auto condition = [=]()
    {
        std::vector<int> results;
        GetPlantIndices({{1, 7}, {2, 7}, {3, 7}, {4, 7}, {6, 7}, {5, 7}}, YMJNP_47, results);

        for (auto result : results)
        {
            if (result < 0)
            {
                return false;
            }
        }
        return true;
    };

    auto callback = [=]()
    {
        ShowErrorNotInQueue("寄了");
        InsertOperation([=]()
                        { SetGameSpeed(0.1); });
    };
    // SkipTick(condition, callback);
    MaidCheats::dancing();
    p.autoGetPaoList();
    SetGameSpeed(10);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(0.5); });
    SkipTick(700, 4);

    SetTime(199, 1);
    Card(SUNFLOWER, 5, 9);
    Delay(10);
    Shovel(5, 9);

    SetTime(245, 10);
    Card(SUNFLOWER, 5, 9);
    Delay(10);
    Shovel(5, 9);

    for (auto w : {1, 10})
    {
        // w1
        SetTime(260 - 373, w);
        p.pao(3, 9);
        SetTime(360 - 373);
        p.pao({{2, 9}, {5, 9}});
        Delay(260);
        p.pao({{2, 3}, {5, 3}});

        // w2
        SetTime(260 - 373, w + 1);
        p.pao({{2, 9}, {5, 9}});
        Delay(100);
        p.pao({{2, 9}, {5, 9}});
        Delay(260);
        p.pao({{2, 3}, {5, 3}});
        SetTime(502);
        Card(ICE_SHROOM, 3, 3);

        SetTime(160);
        Card({{FUME_SHROOM, 1, 9}, {SCAREDY_SHROOM, 5, 9}});
        Card(BLOVER, 6, 9);
        Delay(10);
        Shovel({{1, 9}, {5, 9}, {6, 9}});

        // w3
        SetTime(310 - 373, w + 2);
        p.pao({{2, 9.4875}, {5, 9.4875}});
        SetTime(1075 - 373);
        p.pao(3, 8.175);

        SetTime(847);
        Card({{FUME_SHROOM, 1, 9}, {BLOVER, 5, 9}, {SUNFLOWER, 6, 9}});
        Delay(265);
        Shovel({{1, 9}, {5, 9}, {6, 9}});

        SetTime(1311 - 373);
        p.pao({{2, 9}, {5, 9}, {5, 9}, {5, 9}});

        SetTime(1521 - 419);
        Card(M_ICE_SHROOM, 3, 3);
        Ice3(419);

        // w4
        SetTime(310 - 373, w + 3);
        p.pao(5, 9.4875);
        SetTime(578 - 373);
        p.pao(2, 9.2);
        Delay(376);
        p.pao(2, 3);

        SetTime(-120);
        Card({{FLOWER_POT, 6, 9}, {SCAREDY_SHROOM, 6, 9}});
        SetTime(640);
        Card({{FLOWER_POT, 1, 9}, {BLOVER, 2, 9}, {SCAREDY_SHROOM, 1, 9}});
        SetTime(792);
        Shovel(2, 9);
        Card(SUNFLOWER, 2, 9);

        SetTime(1050);
        InsertOperation([=]()
                        { 
        SetNowTime();
        tick.pushFunc(RetardShovel);
        Delay(400);
        tick.stop(); });

        // Shovel({{1, 9}, {1, 9}, {2, 9}, {6, 9}, {6, 9}});

        SetTime(1100 - 373);
        p.pao(4, 8.15);

        SetTime(1487 - 373);
        p.pao({{2, 8.6}, {5, 8.6}});
        Delay(210);
        p.pao(2, 9);
        Delay(150);
        p.pao(5, 3);

        // w5
        SetTime(230 - 373, w + 4);
        p.pao(2, 8.8);
        SetTime(248 - 373);
        p.pao({{2, 8.8}, {5, 8.8}});
        SetTime(130);
        Card(CHERRY_BOMB, 5, 9);
        SetTime(260);
        Card(DOOM_SHROOM, {{4, 9}, {3, 9}});
        SetTime(256);
        Card(JALAPENO, 1, 9);

        // w6
        SetTime(260 - 373, w + 5);
        p.pao(4, 8.7);
        SetTime(360 - 373);
        p.pao({{2, 9}, {5, 9}});
        Delay(260);
        p.pao({{2, 3}, {5, 3}});

        SetTime(199);
        Card(BLOVER, 2, 9);
        Delay(10);
        Shovel(2, 9);

        SetTime(360);
        Card({{FUME_SHROOM, 6, 9}, {FLOWER_POT, 1, 9}});
        Delay(220);
        Shovel({{6, 9}, {1, 9}});

        // w7
        SetTime(195, w + 6);
        Card({{SCAREDY_SHROOM, 1, 9}, {SUNFLOWER, 5, 9}});
        Delay(10);
        Shovel({{1, 9}, {5, 9}});

        SetTime(281 - 373);
        p.pao(3, 8.7);
        SetTime(388 - 373);
        p.pao(2, 8.7);
        Delay(255);
        p.pao(2, 3);

        SetTime(386 - 373);
        p.pao(5, 8.7);
        Delay(255);
        p.pao(5, 3);

        SetTime(419);
        Card(BLOVER, 2, 9);
        Delay(130);
        Shovel(2, 9);

        SetTime(510);
        Card({{FUME_SHROOM, 1, 9}, {FLOWER_POT, 6, 9}});
        Delay(40);
        Shovel({{1, 9}, {6, 9}});

        SetTime(502);
        Card(ICE_SHROOM, 3, 3);

        // w8
        SetTime(350 - 373, w + 7);
        p.pao(5, 7.4125);

        SetTime(1075 - 373);
        p.pao(3, 8.175);

        SetTime(399);
        Card(SUNFLOWER, 2, 9);
        Delay(265);
        Shovel(2, 9);

        SetTime(819);
        Card({{FUME_SHROOM, 1, 9}, {FLOWER_POT, 5, 9}, {SCAREDY_SHROOM, 6, 9}});
        Delay(265);
        Shovel({{1, 9}, {5, 9}, {6, 9}});

        SetTime(1335 - 373);
        p.pao({{2, 9}, {5, 9}});
        SetTime(1545 - 419);
        Card(M_ICE_SHROOM, 3, 3);
        Ice3(419);

        // w9
        SetTime(410 - 373, w + 8);
        p.pao({{2, 9.2}, {5, 9.2}, {2, 1}});
        Delay(365);
        p.pao({{2, 3.5}, {5, 3.5}});

        SetTime(578 - 373);
        p.pao({{2, 9.2}, {5, 9.2}});

        SetTime(1100 - 373);
        p.pao(3, 8.15);

        SetTime(819);
        Card({{FUME_SHROOM, 1, 9}, {SUNFLOWER, 5, 9}, {FLOWER_POT, 6, 9}});
        Delay(265);
        Shovel({{1, 9}, {5, 9}, {6, 9}});
    }
    // w9
    SetTime(1311 - 373, 9);
    p.pao({{2, 9}, {5, 9}});
    Delay(210);
    p.pao({{2, 9}, {5, 9}});
    Delay(220);
    p.pao({{1, 9}, {3, 9}, {5, 9}});
    Delay(300);
    p.pao({{2, 9}, {5, 9}});
    SetTime(5257, 5);
    Card(JALAPENO, 1, 9);

    // w19
    SetTime(1423 - 373, 18);
    p.pao({{2, 9}, {5, 9}});
    Delay(210);
    p.pao(5, 9);
    Delay(150);
    p.pao(2, 3);

    SetTime(234 - 373, 19);
    p.pao(5, 8.8);
    Delay(126);
    p.pao(5, 8.1);

    SetTime(245 - 373);
    p.pao(3, 8.8);
    Delay(25);
    p.pao(2, 8.8);
    Delay(105);
    p.pao(3, 8.8);

    SetTime(171);
    Card(CHERRY_BOMB, 2, 9);
    SetTime(296);
    Card(JALAPENO, 1, 9);

    SetTime(980 - 373);
    p.pao(5, 8.8);

    SetTime(600);
    Card({{FLOWER_POT, 5, 9}, {BLOVER, 6, 9}});
    Delay(10);
    Shovel({{5, 9}, {6, 9}});
    SetTime(1020);
    Card({{SCAREDY_SHROOM, 5, 9}, {FUME_SHROOM, 6, 9}});
    Delay(10);
    Shovel({{5, 9}, {6, 9}});

    SetTime(770);
    Card(DOOM_SHROOM, {{4, 9}, {3, 9}});

    SetTime(1400 - 373);
    p.pao(4, 9);

    for (int x = 0; x < 4; x++)
    {
        SetTime(1220 + 828 * x, 19);
        Card(SUNFLOWER, 6, 9);
        Delay(100);
        Shovel(6, 9);
        Delay(107);
        Card(BLOVER, 6, 9);
        Delay(100);
        Shovel(6, 9);
        Delay(107);
        Card(FLOWER_POT, 6, 9);
        Delay(100);
        Shovel(6, 9);
        Delay(107);
        Card(FUME_SHROOM, 6, 9);
        Delay(100);
        Shovel(6, 9);
    }
    SetTime(4000);
    p.pao(5, 9);

    // w20
    SetTime(-50, 20);
    p.pao({{2, 7}, {5, 7}});
    SetTime(280 - 373, 20);
    p.pao({{2, 9}, {5, 9}, {2, 9}, {5, 9}});
    Delay(107);
    p.pao({{1, 9}, {3, 9}, {5, 9}});
    Delay(300);
    p.pao({{2, 9}, {5, 9}});
}
#include "avz.h"
#include "avz_spawn_utils.h"
using namespace AvZ;
AvZ::PaoOperator p;
void Script()
{
    averageSpawn({GIGA_GARGANTUAR, GARGANTUAR, ZOMBONI, POLE_VAULTING_ZOMBIE, POGO_ZOMBIE, DANCING_ZOMBIE});
    //DolphinAverageSpawn();
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 JALAPENO,
                 LILY_PAD,
                 FLOWER_POT,
                 UMBRELLA_LEAF,
                 SPIKEWEED,
                 BLOVER});
    SetZombies({POLE_VAULTING_ZOMBIE,
                ZOMBONI,
                POGO_ZOMBIE,
                POLE_VAULTING_ZOMBIE,
                ZOMBONI,
                POGO_ZOMBIE,

                LADDER_ZOMBIE,
                FOOTBALL_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                DIGGER_ZOMBIE,
                DANCING_ZOMBIE,
                CATAPULT_ZOMBIE,

                DOLPHIN_RIDER_ZOMBIE,
                SNORKEL_ZOMBIE,

                GARGANTUAR,
                GIGA_GARGANTUAR,
                GARGANTUAR,
                GIGA_GARGANTUAR});

    // SetZombies({DOLPHIN_RIDER_ZOMBIE});
    // SetWaveZombies(9, {DOLPHIN_RIDER_ZOMBIE, DANCING_ZOMBIE});
    SetWavelength({{1, 1990}, {2, 601}, {3, 601}, {4, 1909}, {5, 2050}, {6, 601}, {7, 601}, {8, 1844}, {10, 601}, {11, 1909}, {12, 2071}, {13, 601}, {14, 601}, {15, 1909}, {16, 2050}, {17, 601}, {18, 601}});
    SetTime(-599, 1);
    MaidCheats::dancing();
    p.autoGetPaoList();
    // SkipTick(0, 18);
    SetGameSpeed(1);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });
    SetTime(-599, 1);
    Card({{LILY_PAD, 3, 7}});
    Delay(751);
    Card({{LILY_PAD, 4, 2}, {UMBRELLA_LEAF, 4, 2}});

    // w1
    SetTime(-419, 1);
    Card(M_ICE_SHROOM, 2, 9);
    Ice3(419);
    SetTime(310 - 373, 1);
    p.pao(1, 9.45);
    SetTime(110 - 373);
    p.pao(5, 9.45);

    SetTime(1100 - 373);
    p.pao(2, 8.225);
    SetTime(1234 - 373);
    p.pao(1, 8.025);

    SetTime(1790 - 373);
    p.pao(5, 8.3);
    Delay(340);
    p.pao(5, 4);
    SetTime(1790 + 220 - 373);
    p.pao(1, 7.4);
    SetTime(1691);
    Card(CHERRY_BOMB, 2, 9);

    SetTime(1370);
    Card(SPIKEWEED, 6, 9);
    Delay(45);
    Shovel(6, 9);

    // w2
    SetTime(260, 2);
    Card(LILY_PAD, {{3, 8}, {3, 9}});
    Card(DOOM_SHROOM, {{3, 8}, {3, 9}});
    SetTime(150);
    Card(JALAPENO, 2, 9);

    SetTime(467 - 373);
    p.pao(5, 7.8);
    Delay(10);
    p.pao(1, 7.75);

    SetTime(-200);
    Card(FLOWER_POT, 1, 9);
    Delay(1);
    Shovel(1, 9);
    SetTime(140);
    Card(SPIKEWEED, 1, 9);
    Delay(10);
    Shovel(1, 9);
    SetTime(500);
    Card(BLOVER, 1, 9);
    Delay(133);
    Shovel(1, 9);

    // w3/7/14/18
    for (auto w : {3, 7, 14, 18})
    {
        SetTime(198, w);
        Card({{FLOWER_POT, 1, 9}, {UMBRELLA_LEAF, 2, 9}});
        Delay(8);
        Shovel({{1, 9}, {2, 9}});

        SetTime(388 - 373);
        p.pao(2, 8.8);
        Delay(265);
        p.pao(2, 4);

        SetTime(401 - 373);
        p.pao(5, 8.5);
        Delay(230);
        p.pao(5, 4);

        SetTime(502);
        Card(ICE_SHROOM, 2, 9);
    }
    for (auto w : {7, 18})
    {
        SetTime(445, w);
        Card(BLOVER, 1, 9);
        Delay(133);
        Shovel(1, 9);
    }
    for (auto w : {3, 14})
    {
        SetTime(445, w);
        Card(SPIKEWEED, 1, 9);
        Delay(133);
        Shovel(1, 9);
    }

    // w4/15
    for (auto w : {4, 15})
    {
        SetTime(410 - 373, w);
        p.pao(1, 7.65);
        SetTime(639 - 373);
        p.pao(5, 6.8);

        SetTime(1100 - 373);
        p.pao(1, 8.15);

        SetTime(1708 - 373);
        p.pao(5, 8.2875);
        Delay(1);
        p.pao(1, 8.3);
        Delay(375);
        p.pao(5, 3.9875);

        SetTime(1069);
        Card(SPIKEWEED, 1, 9);
        Delay(1);
        Shovel(1, 9);
        SetTime(1058);
        Card(BLOVER, 2, 9);
        Delay(1);

        Shovel(2, 9);
        SetTime(660);
        Card({{UMBRELLA_LEAF, 5, 9}, {FLOWER_POT, 6, 9}});
        Delay(265);
        Shovel({{5, 9}, {6, 9}});
        SetTime(1820);
        Card({{SPIKEWEED, 5, 9}, {BLOVER, 6, 9}});
        Delay(100);
        Shovel({{5, 9}, {6, 9}});
        SetTime(1709);
        Card({{UMBRELLA_LEAF, 1, 9}, {FLOWER_POT, 2, 9}});
        Delay(1);
        Shovel(1, 9);
        Delay(49);
        Shovel(2, 9);

        SetTime(1500);
        Card(LILY_PAD, 4, 7);
        Delay(200);
        Shovel(4, 7);

        SetTime(1920 - 420);
        Card(M_ICE_SHROOM, 3, 7);
        Ice3(419);
    }

    // w5/16
    for (auto w : {5, 16})
    {
        SetTime(594 - 373, w);
        p.pao(2, 8.625);
        Delay(377);
        p.pao(1, 3.5);
        SetTime(1249 - 373);
        p.pao(1, 8);

        SetTime(1850 - 373);
        p.pao(5, 8.4);
        Delay(302);
        p.pao(5, 4);
        Delay(28);
        p.pao(2, 4);
        SetTime(1751);
        Card(CHERRY_BOMB, 2, 9);

        SetTime(600);
        Card({{FLOWER_POT, 1, 9}, {UMBRELLA_LEAF, 2, 9}});
        SetTime(1040);
        Shovel({{1, 9}, {2, 9}});
        SetTime(1390);
        Card(SPIKEWEED, 6, 9);
        Delay(45);
        Shovel(6, 9);
        SetTime(1455);
        Card(UMBRELLA_LEAF, 1, 9);
        Delay(1);
        Shovel(1, 9);
        SetTime(1455);
        Card(BLOVER, 2, 9);
        Delay(1);
        Shovel(2, 9);
    }
    SetTime(437 - 373, 5);
    p.pao(5, 7.4);
    SetTime(510 - 373, 16);
    p.pao(5, 7.2);

    // w6/17
    for (auto w : {6, 17})
    {
        SetTime(150, w);
        Card(JALAPENO, 2, 9);

        SetTime(467 - 373);
        p.pao(5, 7.8);
        Delay(19);
        p.pao(1, 7.725);

        SetTime(-60);
        Card(FLOWER_POT, 1, 9);
        Delay(1);
        Shovel(1, 9);
        SetTime(170);
        Card(BLOVER, 1, 9);
        Delay(40);
        Shovel(1, 9);
        SetTime(500);
        Card(SPIKEWEED, 1, 9);
        Delay(133);
        Shovel(1, 9);
    }

    SetTime(260, 17);
    Card(LILY_PAD, {{3, 8}, {3, 9}});
    Card(DOOM_SHROOM, {{3, 8}, {3, 9}});

    SetTime(260, 6);
    Card({{LILY_PAD, 4, 9}, {DOOM_SHROOM, 4, 9}});

    // w8/19
    for (auto w : {8, 19})
    {
        SetTime(440 - 373, w);
        p.pao(1, 7.4);

        SetTime(1100 - 373);
        p.pao(1, 8.15);

        SetTime(1644 - 373);
        p.pao({{1, 8.35}, {5, 8.35}});

        SetTime(292);
        Card(SPIKEWEED, 5, 9);
        Delay(50);
        Shovel(5, 9);
        Delay(701);
        Card(SPIKEWEED, 6, 8);
        Delay(50);
        Shovel(6, 8);

        SetTime(1014);
        Card(UMBRELLA_LEAF, 1, 9);
        Delay(1);
        Shovel(1, 9);
        SetTime(1014);
        Card(BLOVER, 2, 9);
        Delay(1);
        Shovel(2, 9);

        SetTime(1770);
        Card(UMBRELLA_LEAF, 5, 7);
        Delay(100);
        Shovel(5, 7);

        SetTime(1855 - 420);
        Card(M_ICE_SHROOM, 3, 7);
        Ice3(419);
    }
    SetTime(660 - 373, 8);
    p.pao(5, 6);
    SetTime(960 - 373, 19);
    p.pao(5, 3.5);

    // w9
    SetTime(578 - 373, 9);
    p.pao(5, 9);
    Delay(7);
    p.pao(5, 8.6);
    Delay(361);
    p.pao(5, 2.5);
    SetTime(520 - 373);
    p.pao(2, 9);
    Delay(377);
    p.pao(1, 3.5);

    SetTime(1439 - 373);
    p.pao({{2, 9}, {1, 8.6}});
    Delay(222);
    p.pao(1, 8.6);

    SetTime(1700 - 373);
    p.pao(5, 8.3);
    Delay(375);
    p.pao(5, 8.3);
    SetTime(1820);
    Card(CHERRY_BOMB, 5, 9);

    SetTime(2205);
    Card(JALAPENO, 5, 9);
    Delay(50);
    Card({{LILY_PAD, 4, 8}, {DOOM_SHROOM, 4, 8}});
    SetTime(2000);
    p.pao(3, 2);
    Delay(360);
    p.pao(3, 3);

    SetTime(849);
    Card({{FLOWER_POT, 1, 9}, {UMBRELLA_LEAF, 2, 9}});
    Delay(290);
    Shovel({{1, 9}, {2, 9}});

    SetTime(1900);
    Card({{FLOWER_POT, 1, 9}, {UMBRELLA_LEAF, 2, 9}});
    Delay(250);
    Shovel({{1, 9}, {2, 9}});
    Delay(751);
    Card(UMBRELLA_LEAF, 3, 7);

    // w10
    SetTime(225 - 373, 10);
    p.pao(5, 9);
    Delay(100);
    p.pao(5, 9);
    Delay(110);
    p.pao(5, 8.8);

    SetTime(360 - 373);
    p.pao(2, 9);
    Delay(107);
    p.pao(1, 7.8);

    SetTime(445);
    Card({{FLOWER_POT, 1, 9}, {UMBRELLA_LEAF, 2, 9}});
    Shovel(3, 7);
    Delay(133);
    Shovel({{1, 9}, {2, 9}});
    SetTime(502);
    Card(ICE_SHROOM, 3, 7);

    // w11
    SetTime(410 - 373, 11);
    p.pao(1, 7.65);
    SetTime(310 - 373);
    p.pao(5, 9.45);

    SetTime(1100 - 373);
    p.pao(1, 8.15);

    SetTime(1708 - 373);
    p.pao(5, 8.3);
    Delay(1);
    p.pao(1, 8.3);
    Delay(360);
    p.pao(5, 4); 
    SetTime(1069);
    Card({{SPIKEWEED, 1, 9}, {BLOVER, 2, 9}});
    Delay(1);
    Shovel({{1, 9}, {2, 9}});
    SetTime(1709);
    Card({{UMBRELLA_LEAF, 1, 9}, {FLOWER_POT, 2, 9}});
    Delay(1);
    Shovel({{1, 9}, {2, 9}});
    SetTime(1820);
    Card({{SPIKEWEED, 5, 9}, {BLOVER, 6, 9}});
    Delay(100);
    Shovel({{5, 9}, {6, 9}});

    SetTime(1500);
    Card(LILY_PAD, 4, 7);
    Delay(200);
    Shovel(4, 7);

    SetTime(1920 - 420);
    Card(M_ICE_SHROOM, 3, 7);
    Ice3(419);

    // w12
    SetTime(437 - 373, 12);
    p.pao(5, 7.4);
    SetTime(578 - 373);
    p.pao(2, 9);
    Delay(377);
    p.pao(1, 3.5);
    SetTime(1249 - 373);
    p.pao(1, 8);

    SetTime(1871 - 373);
    p.pao(5, 8.4);
    Delay(295);
    p.pao(5, 4);
    Delay(30);
    p.pao(2, 4);
    SetTime(1772);
    Card(CHERRY_BOMB, 2, 9);

    SetTime(600);
    Card({{FLOWER_POT, 1, 9}, {UMBRELLA_LEAF, 2, 9}});
    SetTime(1040);
    Shovel({{1, 9}, {2, 9}});
    SetTime(1390);
    Card(SPIKEWEED, 6, 9);
    Delay(45);
    Shovel(6, 9);
    SetTime(1468);
    Card(UMBRELLA_LEAF, 1, 9);
    Delay(1);
    Shovel(1, 9);
    SetTime(1470);
    Card(BLOVER, 2, 9);
    Delay(1);
    Shovel(2, 9);

    // w13
    SetTime(276, 13);
    Card(LILY_PAD, {{3, 8}, {3, 9}});
    Card(DOOM_SHROOM, {{3, 8}, {3, 9}});
    SetTime(136);
    Card(JALAPENO, 2, 9);

    SetTime(483 - 373);
    p.pao(5, 7.75);
    p.pao(1, 7.75);

    SetTime(-40);
    Card(FLOWER_POT, 1, 9);
    Delay(1);
    Shovel(1, 9);
    SetTime(160);
    Card(SPIKEWEED, 1, 9);
    Delay(40);
    Shovel(1, 9);
    SetTime(500);
    Card(BLOVER, 1, 9);
    Delay(133);
    Shovel(1, 9);

    // w19
    SetTime(1844 + 578 - 373, 19);
    p.pao({{5, 9}, {5, 9}});
    Delay(368);
    p.pao(5, 2.5);
    SetTime(1844 + 520 - 373);
    p.pao(2, 9);
    Delay(377);
    p.pao(1, 3.5);

    SetTime(1844 + 849);
    Card({{FLOWER_POT, 1, 9}, {UMBRELLA_LEAF, 2, 9}});
    Delay(290);
    Shovel({{1, 9}, {2, 9}});

    SetTime(1844 + 1460 - 373);
    p.pao({{1, 9}, {1, 9}});
    Delay(300);
    p.pao(5, 8.5);

    SetTime(1844 + 2100);
    p.pao(3, 3);

    // w20
    SetTime(600 - 373, 20);
    p.pao(4, 6.5);
    SetTime(360 - 373);
    p.pao({{2, 9}, {5, 9}, {2, 9}, {5, 9}});
    Delay(107);
    p.pao({{1, 8.4}});
    Delay(400);
    p.pao({{2, 9}, {5, 9}});
    Shovel({{4, 2}, {4, 2}, {3, 7}, {3, 7}});
    SetTime(368);
    Card(CHERRY_BOMB, 5, 9);
}
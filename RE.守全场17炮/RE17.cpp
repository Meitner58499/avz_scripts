#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;
CobOperator c1(1), c3(3), c5(5), c7(7);

void Script()
{
    //    SetErrorMode(AvZ::POP_WINDOW);
    SetErrorMode(AvZ::NONE);
    SetGameSpeed(1);

    averageSpawn({GARG, GIGA, ZOMB, POLE, POGO});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE, M_ICE, DOOM, CHERRY, JALA, SQUASH, POT, COFFEE, SUNFLOWER, PUMP});
    SetZombies({POLE, GIGA, GARG, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA});
    SetWaveZombies(20, {POLE, GARG, GIGA, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA, ZOMBIE, ZOMBIE, ZOMBIE});

    SetTime(-599, 1);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });
    // SkipTick(0, 19);
    SetIce({{3, 4}, {4, 4}, {5, 4}});
    SetTime(10, 7);
    Card(SUNFLOWER, 5, 4);
    SetTime(5000, 20);
    Shovel(5, 4);

    // ，pd/psd,psd/pdd,i-2,i4-1-4,6,i,i,6n 6,ia,i
    // 537 1515 173517 i-17 i5753-7-1515
    for (auto w : waves(1))
    {
        c5.P(225, 2, 8.8);
        c7.P(360, 4, 8.8);
        c3.P(335, 2, 8);
        c7.P(570, 4, 5);
        C(-599, POT, 3, 9);
        C(490, PUMP, 3, 9);
        RM(after(130), PUMP, 3, 9);
    }
    for (auto w : waves(2))
    {
        c1.P(250, 2, 8.8);
        c5.P(250, 4, 8.8);
        c5.P(360, 4, 8.8);
        c1.P(360, 2, 8.8);
        C(250, {DOOM, COFFEE}, 3, 9);
    }
    for (auto w : waves(3, 6, 9, 11, 14, 17))
    {
        c1.P(352, 2, 8.8);
        c7.P(now, 4, 8.8);
        c3.P(after(145), 2, 8.35);
        c7.P(now, 4, 8.45);
        c1.P(after(139), 2, 8.7);
        c5.P(now, 4, 8.7125);
        I(603);
        if (w == 9) // 3000
        {
            C(500, until(1400), POT, 1, 9);
            C(1400, keep(400), POT, 1, 9);
            C(2500, POT, 1, 9);
            C(after(300), SQUASH, 1, 9);
            c1.P(1800, 3, 8.7);
            c7.P(now, 4, 8.7);
        }
    }

    for (auto w : waves(4, 7, 12, 15, 18))
    {

        if (w == 4)
        {
            c1.P(1105, 2, 8.7);
            c7.P(1105, 4, 8.7);
            I(after(210));
        }
        else
        {
            c1.P(1092, 2, 8.7);
            c7.P(now, 4, 8.7);
            I(after(210));
        }
    }

    for (auto w : waves(5, 8, 13, 16, 19))
    {
        if (w == 5 || w == 8)
        {
            c5.P(520, 2, 9);
            c7.P(740, 2, 8.4);
            c5.P(594, 4, 8.6375);
            c3.P(after(250), 4, 7.8);

            c7.P(1100, 4, 8.15);

            C(20, until(1200), POT, 1, 9);
            C(300, SQUASH, 1, 9);
            C(920, keep(266), POT, 2, 9);
        }
        if (w == 13 || w == 16 || w == 19)
        {
            c5.P(520, 2, 9);
            c5.P(520, 4, 9);
            c7.P(740, 4, 8.4);
            c3.P(740, 2, 8.4);

            c7.P(1100, 3, 8.15);

            C(20, until(1200), POT, 1, 9);
            C(300, SQUASH, 1, 9);
            C(920, keep(266), POT, 5, 9);
        }

        c1.P(1383, 2, 8.7);
        c5.P(now, 4, 8.7);
        c1.P(after(220), 2, 7.4);
        c5.P(now, 4, 7.4);

        if (w == 5 || w == 16)
            C(520, JALA, 1, 9);
        if (w == 8 || w == 13 || w == 19)
            C(520, CHERRY, 1, 9);
        if (w == 19)
        {
            c1.P(352 + 1583, 2, 8.8);
            c7.P(now, 4, 8.8);
            c3.P(after(145), 2, 8.35);
            c7.P(now, 4, 8.45);
            c1.P(770 + 1583, 2, 8.7);
            c5.P(now, 4, 8.7125);
        }
    }
    for (auto w : waves(10))
    {
        C(-200, POT, 2, 9);
        N(250, 2, 9);
        c1.P(360, 2, 8.8);
        c5.P(now, 4, 8.8);
        c5.P(after(110), 2, 8.8);
        c1.P(after(100), 4, 4.25);
    }
    for (auto w : waves(20))
    {
        I(1);
        c1.P(570, 2, 9);
        c7.P(now, 4, 9);

        c5.P(710, 4, 4);

        c5.P(1120, 2, 8.7);
        c7.P(now, 4, 8.7);
        c3.P(after(220), 2, 8.7);
        c7.P(now, 4, 8.7);
        c1.P(after(220), 2, 8.425);
        c5.P(now, 4, 8.425);
        c5.P(5500, 4, 9);
    }
}

#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;
CobOperator c1(1), c2(2), c3(3), c4(4), c5(5), c6(6), c7(7);

// nasd,ppd,iapd-cb-ppdc,ipd-ppd
//   63 125   35  6 462   73 152
void Script()
{
    SetGameSpeed(1);
    // SkipTick(2000, 19);

    averageSpawn({GIGA, GARG, POLE, POGO});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE, M_ICE, DOOM, CHERRY, JALA, SQUASH, POT, LEAF, COFFEE, PUMP});
    SetZombies({POLE, GARG, GIGA, GIGA, POGO, ZOMB, LADD, JACK, FOOT, BALL, CATA});
    SetTime(-599, 1);
    SetIce({{3, 4}, {3, 5}, {4, 4}, {4, 5}});
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });

    // w1 NSDA
    for (auto w : waves(1))
    {
        C(-599, POT, 2, 8);
        N(250, 2, 8);
        c6.P(360, 1, 8);
        c3.P(360, 4, 8);
        RM(501, 1, 7);
    }
    // w2 pd/pdd
    for (auto w : waves(2, 10))
    {
        c1.P(360, 2, 9.2);
        c2.P(after(110), 2, 7.4);
        c5.P(379, 4, 9);
        c3.P(after(120), 4, 8.5);
        c5.P(after(135), 4, 8.75);
        I(610);
        if (w == 2)
        {
            C(274, {POT, JALA}, 5, 9);
            C(335 + 601, POT, 4, 8);
            A(1160 + 601, 4, 8);
            RM(after(1), 4, 8);
        }
        if (w == 10)
        {
            A(360, 2, 9);
            C(578 + 601, until(1050 + 601), POT, 5, 9);
            c6.P(1200 + 601, 4, 8.025);
            C(-700, until(400), LEAF, 4, 5);
            RM(now, {{2, 7}, {1, 6}});
        }
    }
    for (auto w : waves(20))
    {
        c1.P(360, 2, 9.2);
        c2.P(after(110), 2, 8.7);
        c5.P(360, 4, 9);
        c3.P(360, 4, 9.2);
        c5.P(after(110), 4, 8.7);
        A(360, 2, 9);
        c6.P(680, 4, 7);
        c6.P(680, 2, 6);
        c4.P(now, 4, 8.5);
        c2.P(1000, 3, 8.5);
        C(-700, until(1000), LEAF, 4, 5);
        RM(now, {{2, 7}, {1, 6}});
        I(500);
        C(1100, {POT, PUMP}, 1, 6);
        c7.P(3900, 1, 7);
    }
    // w3 ipd-b-ppd
    for (auto w : waves(3, 5, 7, 9, 11, 13, 15, 17, 19))
    {
        if (w != 3 && w != 9 && w != 11 && w != 19)
        {
            c3.P(578, 4, 9.2);
            c5.P(after(218), 4, 8.3);
            C(578, until(1050), POT, 5, 9);
            c6.P(1200, 4, 8.025);
        }

        if (w == 9 || w == 19)
        {
            c3.P(578, 4, 9.2);
            c5.P(after(218), 4, 8.3);
            c6.P(1200, 4, 8.8);
            N(1510, 3, 8);
            c6.P(1727, 1, 7.4);
            c4.P(1737, 4, 8.45);
            c2.P(1952, 4, 8.6);

            J(2470, 2, 7);
            C(3600, {POT, SQUASH}, 1, 6);
            c7.P(2577, 1, 8.2);
            c3.P(after(107), 1, 8);
        }
        else
        {
            C(1513, {POT, SQUASH}, 2, 7);
            RM(now, 2, 7);
            c6.P(1725, 2, 8.325);
            c2.P(after(225), 2, 7.0875);
            c4.P(1726, 5, 8.325);
            I(after(210));
        }
    }
    for (auto w : waves(4, 6, 8, 12, 14, 16, 18))
    {
        c7.P(547, 4, 8.8);
        c3.P(after(212), 4, 8.3625);
        C(575, keep(600), POT, 5, 9);
        c5.P(1350, 2, 8.6);
        c2.P(after(220), 2, 7.4);
        c1.P(1351, 5, 8.6);
        I(after(210));
        C(1351, POT, 2, 7);
        RM(after(900), 2, 7);
    }
}
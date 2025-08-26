/*
一个显而易见的事实是冰波全垫巨人只要2056，然而有个笨比直到几天前才意识到。。。
若使用2040+冰波即可实现炸实拦截后全垫巨人，接加速波360核拦截，最大化实现红眼压制。据npc所说在他22年的水无十四里已经用过这个操作了（不过原视频已经无了
有炸实拦截后，垫材排布变得优雅多了，经seml测试可以实现零砸率，同时去掉辣椒换高坚果，樱桃改到后场，核波垫上半场靠前巨人使其晚投掷无伤尾炸。长冰波都取的2070，有撑杆炮损，其实可以放撑杆跳炮接3-8核，巨人即使不垫也不会砸，而且冰波再短的话上半场可能会漏跳跳，懒得细化了（
ps:这个造型还是我刚入坑时候摆的，当时根本不会解，后来发现抄现有的水无十四没法解决海豚问题，再后来尝试PcD，然后发现欸怎么可以垫全，然后发现欸是我造轮子了，，，于是就水了个视频

*/

#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;

void Script()
{
    averageSpawn({GIGA, GARG, ZOMB, POLE, POGO});
    DolphinAverageSpawn();
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE, M_ICE, DOOM, CHERRY, SCAREDY, LEAF, LILY, TALL, POT, BLOVER});
    SetZombies({POLE, ZOMB, POGO, POLE, ZOMB, POGO, LADD, FOOT, JACK, DIGG, DANCING_ZOMBIE, CATA, DOLPHIN_RIDER_ZOMBIE, SNORKEL_ZOMBIE, GARG, GIGA, GARG, GIGA});
    // SetZombies({POGO});
    SetTime(-599, 1);
    MaidCheats::dancing();
    // SkipTick(0, 10);
    SetGameSpeed(1);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });

    // w1

    for (auto w : waves(1))
    {
        M_I(10, 6, 9);
        P(319, 5, 9.45);
        P(110, 1, 9.45);
        P(1100, 5, 8.15);
        P(1240, 5, 8);
        P(1870, 2, 8.35);
        P(after(300), 1, 4);
        P(1870, 5, 8.3);
        P(after(200), 5, 7.925);
        C(960, keep(200), {SCAREDY, BLOVER}, {1, 2}, 9);
        C(1468, keep(1), {POT, LEAF}, {5, 6}, 9);
        C(2069, keep(1), {SCAREDY, BLOVER}, {5, 6}, 9);
        C(0, {LILY, TALL}, 3, 6);
        C(3500, {LILY, TALL}, 4, 7);
        C(0, LEAF, 2, 1);
        // C(1000, keep(600), LILY, 3, 7);
    }
    for (auto w : waves(2, 6, 13, 17))
    {
        SetTime(260, w);
        Card(LILY_PAD, {{3, 9}, {3, 8}});
        Card(DOOM_SHROOM, {{3, 9}, {3, 8}});
        P(467, 5, 7.825);
        A(360 + 237, 1, 3);
        C(170, keep(1), {POT, LEAF}, {1, 2}, 8);
    }
    for (auto w : waves(3, 7, 14, 18))
    {
        P(370, 5, 8.8);
        P(401, 2, 8.475);
        DD(after(230), 4);

        C(180, keep(30), {SCAREDY, BLOVER}, {5, 6}, 9);
        C(445, keep(133), {POT, LEAF}, {5, 6}, 9);
        I(601, 2, 9);
    }
    for (auto w : waves(4, 8, 15, 19))
    {
        P(410, 5, 7.65);
        C(1068, keep(1), {POT, LEAF}, {5, 6}, 9);
        P(1100, 5, 8.15);

        if (w == 4 || w == 15)
        {
            P(639, 1, 6.8);
            P(1708, 1, 8.3);
            P(1709, 5, 8.3);
            M_I(after(210), 6, 3);
            P(after(165), 1, 3.5);
            C(400, keep(265), BLOVER, 1, 9);
            C(1709, keep(1), {SCAREDY, BLOVER}, {5, 6}, 9);
            C(1820, keep(1), {POT, LEAF}, {1, 2}, 9);
        }
        if (w == 8 || w == 19)
        {
            P(800, 1, 5.4);
            DD(1709, 8.3);
            M_I(after(210), 6, 3);
            C(400, keep(265), BLOVER, 1, 9);
            C(1820, keep(1), {POT, LEAF}, {1, 2}, 7);
        }
        if (w == 19)
        {
            P(570 + 1909, 5, 9);
            P(after(377), 5, 3.5);
            P(578 + 1909, 2, 8.6);
            P(now, 1, 8.8);
            P(after(361), 1, 3.5);
            C(670 + 1909, keep(380), {LEAF, POT}, {5, 6}, 9);
            PP(1370 + 1909, {5, 5}, 8.6);
            P(after(250), 2, 8.6);
            P(now, 3, 7);
        }
    }

    for (auto w : waves(5, 12, 16))
    {
        P(570, 5, 9);
        P(after(377), 5, 3.5);

        C(670, keep(380), {LEAF, POT}, {5, 6}, 9);
        P(1249, 5, 8);
        P(1871, 2, 8.3);
        P(after(300), 1, 4.125);
        P(1871, 5, 8.3);
        P(after(200), 5, 7.925);
        C(960, keep(200), {SCAREDY, BLOVER}, {1, 2}, 9);
        C(1468, keep(1), {POT, LEAF}, {5, 6}, 9);
        C(2069, keep(1), {SCAREDY, BLOVER}, {5, 6}, 9);
        if (w == 12)
        {
            P(437, 1, 7.4);
        }
        if (w == 5 || w == 16)
        {
            P(610, 2, 6.95);
        }
    }
    for (auto w : waves(9))
    {
        P(570, 5, 9);
        P(after(377), 5, 3.5);
        P(578, 2, 8.6);
        P(578, 1, 8.8);
        P(after(361), 1, 3.5);
        C(670, keep(380), {LEAF, POT}, {5, 6}, 9);
        C(2000, keep(133), {SCAREDY, BLOVER}, {5, 6}, 9);

        PP(1370, {5, 5}, 8.6);
        P(after(226), 5, 8.6);
        P(1800, 2, 8.4);
        P(after(330), 1, 4);
        N(2260, 4, 8);
        P(after(110), 1, 7.8);
        P(after(300), 1, 7.8);
        C(now, TALL, 3, 6);
    }
    for (auto w : waves(10))
    {
        P(225, 5, 9);
        P(250, 5, 9);
        P(360, 5, 8.8);
        P(360, 2, 8.8);
        P(467, 1, 7.8);
        I(601, 6, 3);
        C(-700, until(500), {LILY, LEAF}, 4, 6);
        C(445, keep(133), {POT, LEAF}, {1, 2}, 9);
    }
    for (auto w : waves(11))
    {
        P(310, 5, 9);
        P(433, 1, 7.4125);
        C(770, keep(265), {POT, LEAF}, {5, 6}, 9);
        P(1100, 5, 8.15);
        P(1708, 1, 8.3);
        P(1709, 5, 8.3);
        M_I(after(210), 6, 3);
        P(after(165), 1, 3.5);
        C(400, keep(265), BLOVER, 1, 9);
        C(1709, keep(1), {SCAREDY, BLOVER}, {5, 6}, 9);
        C(1820, keep(1), {POT, LEAF}, {1, 2}, 9);
    }
    for (auto w : waves(20))
    {
        P(225, 4, 7.5875);
        N(310, 4, 9);
        PP(360);
        P(after(110), 5, 8.8);
        A(now, 1, 9);
        PP(after(400));
        RM(-10, {{4, 7}, {4, 7}, {3, 6}, {3, 6}, {2, 1}});
    }
}
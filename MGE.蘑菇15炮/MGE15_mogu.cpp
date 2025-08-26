// ipp-b-pp,ippdd-b-ppdd,ppan,ppdd
/*
IPB-B-P/Pd|I3Pd/P-B-PPdd|NADA'/ND(PAN/NA'D)|PPdd 1900|2032|601|601

上半场的超前置炮处理起来很简单，类似的C6u解已经被玩烂了()对于二路的超前置炮，垫材复用模板直接抄水无十四，中路虽有重叠火力，也压不住红眼，无奈选择第一冰波用高坚果临时垫一下消除砸率。

核波通过4-9地刺极限垫红眼避免砸4-8核。由于4-8核与1-8核生效时间差了一秒多，正常的2f2坑复用不上，选择将w10拖长至717以达成核坑复用。至于核序这样排布是为了让辣椒能清冰道开5-9垫材位。

整个阵解最重量级的地方在于1900冰波无法全收下半场跳跳，即使加上尾炸也不行，一度因为这个问题而放弃(咕咕了半年，然后今天闲的没事开了下游戏才发现这个阵还有救)这里的热过渡炮要820生效，正常情况下是蹭不到跳跳的，然而，通过加速波垫5-9和冰波地刺4-9车底垫，可以把不伤巨人落点移至7.4列，收掉部分快速跳跳，配合激活炮即可全收，尾炸炮也可顺理成章地左移去收矿工。

然后还有一些难以描述的垫材逻辑，复用比较极限，7列9列轮轴垫，中间还抽空补个后场蒜，总之最后应该是零砸率的。

炮伤方面应该还算合格，两个冰波都垫了4-9消炸率，尾炸有伤也是难以避免的，这类C6u的通病就是第一冰波复用困难，第二冰波激活炮恢复晚导致尾炸有伤，同时热过渡炮不能全收车矿需特化处理。
*/
#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;

void Script()
{
    averageSpawn({GIGA, GARG, POGO, POLE, DIGG, ZOMB});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE, M_ICE, DOOM, CHERRY, SPIKE, JALA, TALL, GARLIC, LEAF, FUME});
    SetZombies({POLE, POGO, LADD, CATA, ZOMB, JACK, DIGG, DANCING_ZOMBIE, GARG, GIGA});

    // SetGameSpeed(10);
    SetTime(-599, 1);
    SetErrorMode(AvZ::NONE);
    // SkipTick(0, 1);
    MaidCheats::dancing();
    InsertOperation([=]()
                    { SetGameSpeed(1); });

    // NADDA'
    for (auto w : waves(2, 13))
    {
        P(360, 2, 8.8);
        C(250, CHERRY, 2, 9);
        C(470, JALA, 1, 9);
        C(228, DOOM, 4, 8);
        P(338, 4, 8);
        C(22, keep(1), SPIKE, 4, 9);
    }
    // PAN/ND
    for (auto w : waves(6, 17))
    {
        P(250, 2, 8.8);
        C(250, CHERRY, 2, 9);
        C(360, JALA, 5, 7);
        C(360, DOOM, 1, 8);
        P(467, 4, 7.8);
        C(151, keep(60), GARLIC, 4, 9);
        C(24, keep(1), SPIKE, 5, 7);
    }
    // w3 PPdd
    for (auto w : waves(3, 7, 14, 18))
    {
        PP(388, 8.6);
        P(after(265), 4, 3);
        P(now, 1, 2.5);
        C(199, keep(10), {FUME, LEAF}, {2, 3}, 9);
        I(601, 3, 9);
        C(445, keep(133), GARLIC, 5, 9);
        C(445, keep(133), SPIKE, 2, 9);
    }
    for (auto w : waves(10))
    {
        P(325, 2, 8.1875);
        P(517, 2, 8.5);
        PP(517, 8.5);
        DD(after(265), 3);
        C(now, TALL, 1, 1);

        I(717, 2, 9);
        C(250, keep(10), FUME, 4, 9);
        C(713, keep(1), GARLIC, 5, 9);
        C(713, keep(1), LEAF, 4, 9);
    }
    // w4 IPP-B-PPd
    for (auto w : waves(4, 8, 15, 19))
    {
        // I(0, 2, 9);
        P(465, 2, 7.4125);
        P(820, 4, 7.375);
        P(1100, 2, 8.15);
        C(1070, keep(1), GARLIC, 1, 9);
        C(1050, keep(1), LEAF, 2, 9);
        C(949, keep(250), FUME, 4, 9);
        C(870, until(950), TALL, 3, 9);
        P(1700, 1, 8.3);
        P(1699, 4, 8.475);
        P(after(378), 4, 2.5);
        M_I(1910, 4, 2);
        C(600, keep(30), SPIKE, 4, 9);
        C(1700, keep(1), SPIKE, 3, 9);
        C(1700, keep(1), FUME, 2, 9);
        RM(1600, 5, 1);
        C(1821, GARLIC, 5, 1);

        if (w == 19)
        {
            P(578 + 1900, 2, 9);
            P(after(368), 2, 4);
            P(683 + 1900, 4, 6.6875);
            C(552 + 1900, keep(20), SPIKE, 5, 8);
            C(after(751), keep(250), SPIKE, 4, 7);

            P(1200 + 1900, 2, 8);
            C(940 + 1900, keep(250), FUME, 4, 9);
            C(673 + 1900, until(1020), {GARLIC, LEAF}, {2, 3}, 9);
            C(1432 + 1900, keep(1), {GARLIC, LEAF}, {2, 3}, 9);

            PP(1832 + 1900, {1, 5}, 8.4);
            PP(1832 + 1900, {5, 5}, 8);
        }
    }
    for (auto w : waves(11))
    {
        P(400, 2, 8.6);
        P(688, 4, 7.4);
        P(1100, 2, 8.15);
        P(1700, 1, 8.3);
        P(1699, 4, 8.475);
        P(after(378), 4, 2.5);
        M_I(1910, 4, 2);

        C(1700, keep(1), SPIKE, 3, 9);
        C(1700, keep(1), FUME, 2, 9);
    }
    for (auto w : waves(20))
    {
        PP(250, 8.8);
        PP(250, 8.8);
        DD(360, 8.8);
        PP(360, {2, 3}, 8.8);
    }
    // w5 IPPd-B-PPdd
    for (auto w : waves(1, 5, 9, 12, 16))
    {
        P(578, 2, 9);
        P(after(368), 2, 4);
        P(683, 4, 6.6875);
        C(552, keep(20), SPIKE, 5, 8);
        C(after(751), keep(250), SPIKE, 4, 7);

        P(1200, 2, 8);
        C(940, keep(250), FUME, 4, 9);
        C(673, until(1020), {GARLIC, LEAF}, {2, 3}, 9);
        C(1432, keep(1), {GARLIC, LEAF}, {2, 3}, 9);

        PP(1832, 8.4);

        if (w != 9)
        {
            C(1832, keep(1), FUME, 2, 9);
            PP(after(339), 4);
        }
        else
        {
            PP(1832, 8.4);
            D(after(212), 1, 8.25);
            D(after(127), 4, 4);
            C(after(202), keep(130), GARLIC, 2, 9);
            P(after(30), 4, 8.5);
            C(after(200), keep(130), {FUME, LEAF}, {4, 5}, 7);
            P(after(75), 2, 9);
            P(after(600), 4, 8.5);
            P(now, 1, 1);
            RM(now, 1, 1);
            P(after(400), 4, 2);
        }
        if (w == 1)
        {
            M_I(0, 4, 2);

            C(-599, TALL, 1, 1);
            C(-599, LEAF, 5, 2);
            C(-599, GARLIC, 5, 1);
        }
    }
}
/*
IPP-PP|I3PSd/Pd-PP|PPSAN|PPdd  1726 1949 601 727
w1波长1910，w4波长1767
NPC说reisen测的1949是I3Pd下篮球的极限波长
渐强专栏里写的731是收三行跳跳巨人的极限波长，这里懒得改了(

天地之桥之不知道是第几条定律：守相同炮位，N6E比NE多两炮
所以这个阵基本是照着NE14守七做出来的，不过六行场地的一些绷点处理起来还挺麻烦的
首先炮没法前场拦截，N最好作为拦截运算量而不是激活，在减转加时PPSSN比起连拦要吃香地多
然后就是矿工的奇葩判定，开debug能看到矿工出土时判定箱的变化，总之就会导致尾炸不能同收三行【正在出土中】的矿工，因此限制尾炸时机要在1132前或1357后
跳跳不用多说，85行距处理起来还是挺方便的，但是，w17因复用及矿工原因，需要782分离1130尾炸，分离炮会漏4路慢速跳跳，然而这部分跳跳恰好能在跳炮前被激活炮收掉
尾炸是最难受的，贡献了绝大部分的炮伤，也没什么解决方法
*/
#include "avz.h"

using namespace AvZ;
AvZ::PaoOperator p;

void Script()
{

    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 JALAPENO,
                 BLOVER,
                 SCAREDY_SHROOM,
                 TALL_NUT,
                 PUFF_SHROOM,
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
    SetWavelength({{1, 1910}, {2, 601}, {3, 727}, {4, 1767}, {5, 1949}, {6, 601}, {7, 727}, {8, 1726}, {10, 601}, {11, 601}, {12, 601}, {13, 1726}, {14, 1949}, {15, 601}, {16, 727}, {17, 1726}, {18, 1949}});
    SetTime(-599, 1);
    auto condition = [=]()
    {
        std::vector<int> results;
        GetPlantIndices({{1, 6}, {2, 6}, {4, 6}, {6, 6}, {5, 6}, {3, 6}, {1, 4}, {2, 4}, {4, 4}, {6, 4}, {5, 4}, {3, 4}, {1, 2}, {3, 2}, {4, 2}, {6, 2}}, YMJNP_47, results);

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
    SetTime(-599, 1);
    p.autoGetPaoList();
    // SkipTick(0, 20);
    SetGameSpeed(1);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(1); });
    // w1 1910
    SetTime(-99, 1);
    Card(ICE_SHROOM, 2, 3);
    SetTime(303 - 373);
    p.pao({{2, 9.5125}, {5, 9.5125}});
    SetTime(1710 - 373);
    p.pao({{2, 8.4}, {5, 8.4}});
    Delay(355);
    p.pao({{2, 3.5}, {5, 3.5}});

    SetTime(0);
    Card({{FLOWER_POT, 2, 9}, {PUFF_SHROOM, 2, 9}, {SCAREDY_SHROOM, 1, 9}});
    SetTime(769);
    Card({{BLOVER, 6, 9}, {SCAREDY_SHROOM, 4, 9}, {PUFF_SHROOM, 5, 9}, {FLOWER_POT, 3, 9}});
    Delay(400);
    Shovel({{1, 9}, {2, 9}, {2, 9}, {3, 9}, {4, 9}, {5, 9}});
    SetTime(1520);
    Card({{FLOWER_POT, 6, 8}, {PUFF_SHROOM, 6, 8}, {SCAREDY_SHROOM, 1, 8}});
    Delay(200);
    Shovel({{1, 8}, {6, 8}, {6, 8}});

    // w2 601
    SetTime(340 - 373, 2);
    p.pao({{2, 8.6}, {2, 8.6}});
    SetTime(340 - 373);
    p.pao(5, 9);
    SetTime(220);
    Card(CHERRY_BOMB, 5, 9);

    SetTime(355);
    Card(DOOM_SHROOM, 2, 8);
    Card(JALAPENO, 6, 8);

    // w3 727
    SetTime(80, 3);
    Card({{PUFF_SHROOM, 2, 9}, {SCAREDY_SHROOM, 3, 9}, {BLOVER, 4, 9}, {FLOWER_POT, 5, 9}});
    Delay(133);
    Shovel({{2, 9}, {3, 9}, {4, 9}, {5, 9}});

    SetTime(527 - 373);
    p.pao({{2, 8.4}, {5, 8.4}});
    Delay(265);
    p.pao({{2, 3.5}, {5, 3.5}});
    SetTime(727 - 418);
    Card(M_ICE_SHROOM, 2, 3);
    SetPlantActiveTime(M_ICE_SHROOM, 419);

    // w4
    SetTime(588 - 373, 4);
    p.pao(5, 9);
    Delay(376);
    p.pao(5, 3);

    SetTime(500 - 373);
    p.pao(2, 6.5);

    SetTime(300);
    Card(TALL_NUT, 1, 9);
    Delay(360);
    Shovel(1, 9);

    SetTime(769);
    Card({{PUFF_SHROOM, 2, 9}, {FLOWER_POT, 3, 9}});
    Delay(265);
    Shovel({{2, 9}, {3, 9}});

    SetTime(1567 - 373);
    p.pao({{2, 8.475}, {5, 8.475}});

    // w5
    SetTime(578 - 373, 5);
    p.pao(2, 9);

    SetTime(580);
    Card({{SCAREDY_SHROOM, 1, 9}, {FLOWER_POT, 2, 9}, {PUFF_SHROOM, 3, 9}});
    SetTime(769);
    Card(BLOVER, 4, 9);
    SetTime(1340);
    Card({{PUFF_SHROOM, 4, 8}, {SCAREDY_SHROOM, 5, 8}, {FLOWER_POT, 6, 8}});
    Shovel({{1, 9}, {2, 9}, {3, 9}});
    Delay(265);
    Shovel({{4, 8}, {5, 8}, {6, 8}});

    // w6
    SetTime(220, 6);
    Card(CHERRY_BOMB, 5, 9);
    SetTime(355);
    Card(DOOM_SHROOM, 3, 8);
    Card(JALAPENO, 1, 8);

    // w8
    SetTime(1000 - 373, 8);
    p.pao(5, 8.2);
    Delay(360);
    p.pao(5, 2.4);

    // w10
    SetTime(280 - 373, 10);
    p.pao({{5, 9}, {5, 9}});

    SetTime(300);
    Card(DOOM_SHROOM, 4, 8);
    Card(JALAPENO, 1, 9);
    SetTime(660 - 373);
    p.pao(2, 2.5);

    SetTime(445);
    Card({{PUFF_SHROOM, 1, 9}, {SCAREDY_SHROOM, 2, 9}, {FLOWER_POT, 3, 9}});
    Delay(133);
    Shovel({{1, 9}, {2, 9}, {3, 9}});

    // w11
    SetTime(225 - 373, 11);
    p.pao(2, 9);
    Delay(261);
    p.pao({{2, 4}, {5, 4}});

    SetTime(126);
    Card(CHERRY_BOMB, 5, 9);

    // w12
    SetTime(80, 12);
    Card({{PUFF_SHROOM, 2, 9}, {SCAREDY_SHROOM, 3, 9}, {BLOVER, 4, 9}, {FLOWER_POT, 5, 9}, {TALL_NUT, 1, 8}});
    Delay(133);
    Shovel({{1, 8}, {2, 9}, {3, 9}, {4, 9}, {5, 9}});

    SetTime(401 - 373, 12);
    p.pao({{2, 8.6}, {2, 8.6}, {5, 8.6}, {5, 8.6}});
    Delay(254);
    p.pao({{2, 3.5}, {5, 3.5}});
    SetTime(601 - 418);
    Card(M_ICE_SHROOM, 2, 3);

    // w13
    SetTime(303 - 373, 13);
    p.pao({{2, 9.5125}, {5, 9.5125}});

    SetTime(1526 - 373);
    p.pao({{2, 8.475}, {5, 8.475}});

    // w14
    SetTime(1200 - 373, 14);
    p.pao(3, 8.05);

    SetTime(849);
    Card({{SCAREDY_SHROOM, 1, 9}, {FLOWER_POT, 5, 9}, {PUFF_SHROOM, 6, 9}});
    Delay(280);
    Shovel({{1, 9}, {5, 9}, {6, 9}});
    SetTime(1440);
    Card(BLOVER, 1, 8);

    // w15
    SetTime(250, 15);
    Card(CHERRY_BOMB, 5, 9);
    SetTime(360);
    Card(DOOM_SHROOM, 2, 8);
    Card(JALAPENO, 6, 8);

    // w17
    SetTime(782 - 373, 17);
    p.pao(5, 8.35);
    Delay(348);
    p.pao(5, 2.4);

    for (auto w : {3, 12})
    {
        // w5 1949
        SetTime(-89, w + 2);
        Card(ICE_SHROOM, 2, 3);
        SetTime(578 - 373);
        p.pao(2, 9);
        Delay(354);
        p.pao(2, 3.5);

        SetTime(578 - 373);
        p.pao(5, 9);
        Delay(381);
        p.pao(5, 3.75);

        SetTime(1749 - 373);
        p.pao({{2, 8.4}, {5, 8.4}});
        Delay(355);
        p.pao({{2, 3.5}, {5, 3.5}});

        SetTime(-200);
        Card({{FLOWER_POT, 5, 9}, {PUFF_SHROOM, 6, 9}});
        Delay(1);
        Shovel({{5, 9}, {6, 9}});

        // w6 601
        SetTime(340 - 373, w + 3);
        p.pao({{2, 8.6}, {2, 8.6}});
        SetTime(340 - 373);
        p.pao(5, 9);

        // w7 727
        SetTime(190, w + 4);
        Card({{PUFF_SHROOM, 2, 9}, {SCAREDY_SHROOM, 3, 9}, {BLOVER, 4, 9}, {FLOWER_POT, 5, 9}});
        Delay(133);
        Shovel({{2, 9}, {3, 9}, {4, 9}, {5, 9}});
        SetTime(527 - 373);
        p.pao({{2, 8.4}, {5, 8.4}});
        Delay(265);
        p.pao({{2, 3.5}, {5, 3.5}});

        SetTime(727 - 418);
        Card(M_ICE_SHROOM, 2, 3);
        SetPlantActiveTime(M_ICE_SHROOM, 419);

        // w8 1726
        SetTime(780 - 373, w + 5);
        p.pao(2, 4.5);

        SetTime(300);
        Card(TALL_NUT, 1, 9);
        Delay(360);
        Shovel(1, 9);

        SetTime(1526 - 373);
        p.pao({{2, 8.475}, {5, 8.475}});

        // w9 1949
        SetTime(-89, w + 6);
        Card(ICE_SHROOM, 2, 3);
        SetTime(578 - 373);
        p.pao({{2, 9}, {2, 9}});
        Delay(376);
        p.pao(2, 3);

        SetTime(578 - 373);
        p.pao(5, 9);
        Delay(381);
        p.pao(5, 3.75);

        SetTime(-200);
        Card({{FLOWER_POT, 5, 9}, {PUFF_SHROOM, 6, 9}});
        Delay(1);
        Shovel({{5, 9}, {6, 9}});
        SetTime(580);
        Card({{SCAREDY_SHROOM, 2, 9}, {FLOWER_POT, 3, 9}, {PUFF_SHROOM, 4, 9}});
        Delay(550);
        Shovel({{2, 9}, {3, 9}});
        SetTime(1340);
        Card({{PUFF_SHROOM, 5, 8}, {FLOWER_POT, 6, 8}, {SCAREDY_SHROOM, 1, 8}});
        Delay(265);
        Shovel({{1, 8}, {5, 8}, {6, 8}});
        SetTime(1060);
        Shovel(4, 9);
        SetTime(1330);
        Card(BLOVER, 4, 9);
        Delay(1);
        Shovel(4, 9);
    }

    // w9
    SetTime(1749 - 373, 9);
    p.pao({{2, 8.4}, {5, 8.4}});
    Delay(210);
    p.pao({{2, 9}, {5, 9}});
    Delay(273);
    p.pao({{2, 3.5}, {5, 3.5}});

    SetTime(1949 + 800 - 373);
    p.pao({{2, 9}, {2, 9}});
    Delay(526);
    p.pao({{5, 9}, {5, 9}});

    SetTime(2091);
    Card({{FLOWER_POT, 5, 9}, {PUFF_SHROOM, 6, 9}});
    Delay(200);
    Card({{BLOVER, 5, 9}, {TALL_NUT, 6, 9}});
    Delay(551);
    Card({{FLOWER_POT, 5, 8}, {PUFF_SHROOM, 6, 8}});
    Delay(200);
    Card(BLOVER, 4, 8);
    SetTime(2091);
    Card(SCAREDY_SHROOM, 4, 9);
    Delay(751);
    Card(SCAREDY_SHROOM, 4, 8);

    // w19
    SetTime(1749 - 373, 18);
    p.pao({{2, 8.4}, {5, 8.4}});
    Delay(355);
    p.pao({{2, 3.5}, {5, 3.5}});

    SetTime(252, 19);
    Card(CHERRY_BOMB, 5, 9);
    SetTime(359);
    Card(DOOM_SHROOM, 3, 8);
    SetTime(479);
    Card(JALAPENO, 1, 8);
    SetTime(350 - 373);
    p.pao({{5, 8.6}, {2, 8.6}});
    SetTime(580 - 373);
    p.pao(2, 8.6);
    SetTime(1100 - 373);
    p.pao({{2, 9}, {4, 9}});
    SetTime(4200, 19);
    p.pao(6, 9);

    SetTime(908);
    Card(M_ICE_SHROOM, 2, 3);
    SetTime(3100);
    Card(ICE_SHROOM, 2, 3);

    SetTime(800);
    Card(PUFF_SHROOM, 6, 9);
    Delay(133);
    Shovel(6, 9);
    Delay(75);
    Card(FLOWER_POT, 6, 9);
    Delay(133);
    Shovel(6, 9);

    for (int x = 0; x < 3; x++)
    {
        SetTime(1750 + 830 * x, 19);
        Card(PUFF_SHROOM, 6, 9);
        Delay(265);
        Shovel(6, 9);
        Delay(150);
        Card(FLOWER_POT, 6, 9);
        Delay(265);
        Shovel(6, 9);
    }

    // w20
    SetTime(-50, 20);
    p.pao({{2, 6}, {5, 6}});
    SetTime(280 - 373, 20);
    p.pao({{2, 9}, {5, 9}, {2, 9}, {5, 9}});
    Delay(107);
    p.pao({{1, 9}, {3, 9}, {5, 9}});
    Delay(100);
    p.pao(2, 2);
    Delay(300);
    p.pao({{2, 9}, {5, 9}});

    SetTime(4500);
    MaidCheats::stop();
    Delay(700);
    MaidCheats::dancing();
    p.pao({{2, 9}, {5, 9}});
}
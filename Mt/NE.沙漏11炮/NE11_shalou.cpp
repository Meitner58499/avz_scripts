/*较严谨的NE11炮守全6解
冰波为了下九列垫，要较早分离投篮，漏的晚爆丑是肯定会炸的，不过seml测到的炸率几乎为零
w10波长960，4路垫一下小丑防炸3-7，同样是seml告诉我提前炸实一炮意外率<0.1%
然后拦跳跳的倭瓜就是个坑B东西，不仅能飞到本波巨脸上，还能被早爆炸(?)
应该能用墓碑藤代个垫材，然后智能判断巨人位置下垫，这样空出7列扔倭瓜能稳点
*/
#include "avz.h"
#include "avz_spawn_utils.h"
#include "SimpleAvZ/lib.h"
using namespace AvZ;
CobOperator c;

void Script()
{
    averageSpawn({GIGA_GARGANTUAR, GARGANTUAR, POGO_ZOMBIE, POLE_VAULTING_ZOMBIE, DIGGER_ZOMBIE});
    OpenMultipleEffective('q', AvZ::MAIN_UI_OR_FIGHT_UI);
    SelectCards({ICE_SHROOM,
                 M_ICE_SHROOM,
                 DOOM_SHROOM,
                 CHERRY_BOMB,
                 JALAPENO,
                 SQUASH,
                 BLOVER,
                 SPIKEWEED,
                 SCAREDY_SHROOM,
                 FLOWER_POT});
    SetZombies({POLE_VAULTING_ZOMBIE,
                POGO_ZOMBIE,
                DIGGER_ZOMBIE,
                LADDER_ZOMBIE,
                JACK_IN_THE_BOX_ZOMBIE,
                FOOTBALL_ZOMBIE,
                DANCING_ZOMBIE,
                CATAPULT_ZOMBIE,
                GARGANTUAR,
                GIGA_GARGANTUAR});

    // SetZombies({JACK_IN_THE_BOX_ZOMBIE, FOOTBALL_ZOMBIE});

    SetWavelength({{1, 2501}, {2, 2501}, {3, 2501}, {4, 2501}, {5, 2501}, {6, 2501}, {7, 2501}, {8, 2501}, {10, 960}});
    SetTime(-599, 1);
    KeyConnect('z', [=]()
               { Card(BLOVER, 1, 8); });
    KeyConnect('x', [=]()
               { Card(SPIKE, 1, 8); });
    KeyConnect('c', [=]()
               { Card(SCAREDY, 1, 8); });
    KeyConnect('v', [=]()
               { Card(POT, 1, 8); });

    MaidCheats::dancing();
    c.autoGetPaoList();
    SetGameSpeed(2);
    SetTime(0, 1);
    InsertOperation([=]()
                    { SetGameSpeed(2); });

    // SkipTick(2000, 19);
    for (auto w : waves(1, 3, 5, 7, 9, 11, 13, 15, 17, 19))
    {
        I(155, 3, 1);
        P(1100, 4, 8);
        P(1460, 2, 7.4125);
        C(1100, until(1300), {SCAREDY_SHROOM, POT}, {4, 5}, 9);
        C(1290, until(1310), {BLOVER, SPIKE}, {1, 2}, 9);
        C(2340, keep(1), {SCAREDY_SHROOM, POT}, {4, 5}, 9);
        C(2300, keep(1), {BLOVER, SPIKE}, {1, 2}, 9);

        PP(2301, {2, 4}, 7.8);
        P(after(100), 4, 9);
        P(2656, 4, 8.4875);
        P(2618, 1, 8.5875);
        C(2405, CHERRY, 2, 9);
        M_I(2656, 3, 1);
        if (w == 1)
        {
            PP(155, {1, 4}, 8.4875);
        }
        if (w == 11)
        {
            C(800, SQUASH, 1, 8);
            RM(1100, 1, 8);
        }

        if (w == 9 || w == 19)
        {
            PP(3500, {3, 4}, 8);
            C(3100, SCAREDY_SHROOM, 1, 8);
            C(after(414), SPIKEWEED, 1, 8);
            C(after(414), BLOVER, 1, 8);
            RM(4300, 1, 8);
        }
        if (w == 19)
        {
            C(4500, SQUASH, 1, 8);
        }
        if (w == 9)
        {
            P(4300, 1, 8);
        }
    }
    for (auto w : waves(2, 4, 6, 8, 12, 14, 16, 18))
    {
        P(1100, 1, 8);
        P(1460, 4, 7.4125);
        C(1150, until(1290), {SCAREDY_SHROOM, POT}, {1, 2}, 9);
        C(1290, until(1310), {BLOVER, SPIKE}, {4, 5}, 9);
        C(2341, keep(1), {BLOVER, SPIKE, SCAREDY_SHROOM, POT}, {1, 2, 4, 5}, 9);
        PP(2301, {2, 4}, 7.8);
        PP(2656, {1, 4}, 8.4875);

        if (w == 18)
        {
            C(2500, JALA, 5, 9);
            C(1100, SQUASH, 3, 7);
            RM(after(200), 3, 7);
        }
        else
        {
            C(2500, JALA, 3, 1);
        }

        if (w == 2)
        {
            C(2405, DOOM, 3, 7);
        }
        if (w == 4 || w == 12)
        {
            C(2405, DOOM, 3, 9);
        }
        if (w == 6 || w == 14)
        {
            C(2405, DOOM, 3, 8);
        }
        if (w == 8 || w == 16)
        {
            C(2442, DOOM, 2, 8);
        }
        if (w == 18)
        {
            C(2442, DOOM, 2, 7);
        }
    }

    // w10
    for (auto w : waves(10))
    {
        P(660, 2, 8.475);
        C(760, DOOM, 3, 7);
        P(800, 4, 8.35);
        C(700, JALA, 3, 1);

        P(1115, 4, 8.4875);
        P(1078, 1, 8.5875);

        C(759, keep(1), {BLOVER, SPIKE}, {1, 2}, 9);
        C(799, keep(1), {SCAREDY_SHROOM, POT}, {4, 5}, 9);

        P(141, 4, 8.525);
        C(0, until(371), POT, 4, 9);
    }

    // w20
    for (auto w : waves(20))
    {
        I(0, 3, 1);
        PP(323, {2, 5}, 6);
        PP(360, {2, 4}, 8);
        C(400, JALAPENO, 3, 1);
        P(1300, 1, 8.4);
        P(1300, 4, 8.6);
        PP(after(210), {2, 4}, 8.6);
        P(now, 4, 8.6);
        PP(after(220), {1, 4}, 8.4);
        M_I(2500, 3, 1);
        P(3800, 3, 8);

        RM(5300, 1, 8);
        C(5500, SQUASH, 1, 8);
    }
}
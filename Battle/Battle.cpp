#include <iostream>
#include "Entity.h"
#include "Arena.h"

int main()
{
    srand((unsigned)time(0));
    Entity* player = new Entity("Player", 100);
    Entity* enemy = new Entity("Enemy", 100);
    int input = 0;
    std::cout << "Fast Pace: 0\n" << "Slow Pace: 1++\n";
    std::cin >> input;
    Arena arena = Arena(player, enemy);
    arena.Fight(input);

    if (arena.IsDone())
    {
        delete player;
        delete enemy;
    }
}
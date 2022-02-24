#include "Zombie.hpp"
#include <algorithm>
#include <iostream>

using namespace std;

Zombie::Zombie(int _stamina) : Undead::Undead(_stamina) {}

void Zombie::attack(Player &player)
{
    if (this->stamina)
    {
        this->stamina--;
        if (player.getHealth() == 0)
        {
            cout << "nom nom nom" << endl;
        }
        player.setHealth(max(player.getHealth() - 3, 0));
    }
    else
    {
        cout << "oof" << endl;
    }
}
#include "MagicWarrior.hpp"
#include <algorithm>

using namespace std;

MagicWarrior::MagicWarrior(string name) : Hero(name)
{
}
void MagicWarrior::attack(Hero *h)
{
    h->setHealth(h->getHealth() - this->getPower());
} // reduce enemy health by power
void MagicWarrior::heal(Hero *h)
{
    h->setHealth(h->getHealth() + this->getPower() / 2);
} // heal target by power/2
void MagicWarrior::magicAttack(Hero *h)
{
    h->setHealth(max(h->getHealth() - h->getHealth() / 2, 0));
} // deal damage by target_health/2
void MagicWarrior::powerUp()
{
    this->setPower(this->getPower() * 2);
}
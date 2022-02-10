#include "SpacingGuildShip.hpp"

int SpacingGuildShip::producedShips = 0;
float SpacingGuildShip::totalGuildTravel = 0;

SpacingGuildShip::SpacingGuildShip() : guildNavigatorCount(3), maxPassengerCap(50), serialNum(producedShips + 1)
{
    this->passengerCount = 0;
    this->spiceStock = 50;
    this->operatingGuildNavigator = 3;
    producedShips += 1;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock) : guildNavigatorCount(guildNavigatorCount), maxPassengerCap(maxPassengerCap), serialNum(producedShips + 1)
{
    this->passengerCount = 0;
    this->spiceStock = spiceStock;
    this->operatingGuildNavigator = guildNavigatorCount;
    producedShips += 1;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip &sps) : guildNavigatorCount(sps.guildNavigatorCount), maxPassengerCap(sps.maxPassengerCap), serialNum(sps.producedShips + 1)
{
    this->passengerCount = sps.passengerCount;
    this->spiceStock = sps.spiceStock;
    this->operatingGuildNavigator = sps.operatingGuildNavigator;
    this->producedShips += 1;
}

SpacingGuildShip::~SpacingGuildShip()
{
    // destructor
}

int SpacingGuildShip::getShipSerialNum() const
{
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const
{
    return this->passengerCount;
}

void SpacingGuildShip::travel(float distance)
{
    if (this->operatingGuildNavigator)
    {
        totalGuildTravel += distance / (E * E * this->operatingGuildNavigator);
        this->operatingGuildNavigator--;
    }
}

void SpacingGuildShip::boarding(int addedPassengers)
{
    if (this->maxPassengerCap - this->passengerCount < addedPassengers)
    {
        this->passengerCount = this->maxPassengerCap;
    }
    else
    {
        this->passengerCount += addedPassengers;
    }
}

void SpacingGuildShip::dropOff(int droppedPassengers)
{
    if (this->passengerCount < droppedPassengers)
    {
        this->passengerCount = 0;
    }
    else
    {
        this->passengerCount -= droppedPassengers;
    }
}

void SpacingGuildShip::refreshNavigator(int n)
{
    int inactive = this->guildNavigatorCount - this->operatingGuildNavigator;
    if (n * GUILD_NAVIGATOR_SPICE_DOSE < this->spiceStock)
    {
        if (n < inactive)
        {
            this->spiceStock -= GUILD_NAVIGATOR_SPICE_DOSE * n;
            this->operatingGuildNavigator += n;
        }
        else
        {
            this->spiceStock -= GUILD_NAVIGATOR_SPICE_DOSE * inactive;
            this->operatingGuildNavigator += inactive;
        }
    }
    else
    {
        this->spiceStock -= (this->spiceStock / GUILD_NAVIGATOR_SPICE_DOSE) * (GUILD_NAVIGATOR_SPICE_DOSE);
        this->operatingGuildNavigator += (this->spiceStock / GUILD_NAVIGATOR_SPICE_DOSE);
    }
}

void SpacingGuildShip::transitToArrakis(int addedSpice)
{
    this->spiceStock += addedSpice;
}
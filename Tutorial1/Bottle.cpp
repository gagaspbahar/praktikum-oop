#include "Bottle.hpp"

int Bottle::numOfBottle = 0;

Bottle::Bottle() : id(numOfBottle + 1)
{
    this->height = 10.00;
    this->radius = 10.00;
    this->waterHeight = 0;
    numOfBottle++;
}

Bottle::Bottle(float height, float radius) : id(numOfBottle + 1)
{
    this->height = height;
    this->radius = radius;
    this->waterHeight = 0;
    numOfBottle++;
}

Bottle::Bottle(const Bottle &bottle) : id(bottle.id)
{
    this->height = bottle.height;
    this->radius = bottle.radius;
    this->waterHeight = bottle.waterHeight;
}

Bottle::~Bottle()
{
    // numOfBottle--;
}

int Bottle::getId() const
{
    return this->id;
}

float Bottle::getWaterVolume() const
{
    return this->waterHeight * (this->radius * this->radius) * PI;
}

float Bottle::getBottleVolume() const
{
    return this->height * (this->radius * this->radius) * PI;
}

void Bottle::setHeight(float height)
{
    this->height = height;
    if (height < this->waterHeight)
    {
        this->waterHeight = height;
    }
}

void Bottle::addWater(float waterVolume)
{
    int vol = getBottleVolume();
    int wat = getWaterVolume();
    if (waterVolume + wat > vol)
    {
        this->waterHeight = this->height;
    }
    else
    {
        this->waterHeight += getWaterHeightIfVolume(waterVolume);
    }
}

void Bottle::substractWater(float waterVolume)
{
    int vol = getBottleVolume();
    int wat = getWaterVolume();
    if (wat < waterVolume)
    {
        this->waterHeight = 0;
    }
    else
    {
        this->waterHeight -= getWaterHeightIfVolume(waterVolume);
    }
}

float Bottle::getWaterHeightIfVolume(float waterVolume) const
{
    return waterVolume / (PI * this->radius * this->radius);
}

void Bottle::pourWaterTo(Bottle &other)
{
    float cap = other.getBottleVolume() - other.getWaterVolume();
    if (getBottleVolume() > cap)
    {
        other.addWater(cap);
        this->waterHeight -= getWaterHeightIfVolume(cap);
    }
    else
    {
        other.addWater(getWaterVolume());
        this->waterHeight = 0;
    }
}

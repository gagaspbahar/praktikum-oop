#include "AppreciatingAsset.hpp"

#include <iostream>
#include <math.h>


double AppreciatingAsset::getValue(int years)
{
    return this->x->getValue(years) * pow(1 + this->rate,years);
}
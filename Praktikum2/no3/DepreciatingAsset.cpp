#include "DepreciatingAsset.hpp"

#include <iostream>
#include <math.h>


double DepreciatingAsset::getValue(int years)
{
    return this->x->getValue(years) * pow(1 - this->rate,years);
}
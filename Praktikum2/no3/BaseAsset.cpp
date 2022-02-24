#include "BaseAsset.hpp"
#include <iostream>

BaseAsset::BaseAsset(double buyValue){
    this->buyValue = buyValue;
}

double BaseAsset::getValue(int years){
    return this->buyValue;
}
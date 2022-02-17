#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression* x,  Expression* y) : BinaryExpression(x,y) {}

int SubstractExpression::solve() {
    return (this->x)->solve() - (this->y)->solve();
}
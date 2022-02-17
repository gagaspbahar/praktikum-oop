#include "NegativeExpression.hpp"

NegativeExpression::NegativeExpression(Expression* x) : UnaryExpression(x) {}

int NegativeExpression::solve() {
    return -1 * (this->x)->solve();
}
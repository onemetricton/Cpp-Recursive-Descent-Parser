using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "minus.h"

Minus::Minus(Expression* left, Expression* right) : SubExpression(left, right) {

}

int Minus::evaluate() {
  return left->evaluate() - right->evaluate();
}

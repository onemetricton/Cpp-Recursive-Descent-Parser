#include <iostream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "condition.h"

Condition::Condition(Expression* left, Expression* right, Expression* boolExpr) : SubExpression(left, right, boolExpr) {

}

int Condition::evaluate() {
  if(boolExpr->evaluate() == 0) return right->evaluate();
  else return left->evaluate();
}

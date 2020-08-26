#include <math.h>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "lessthan.h"

LessThan::LessThan(Expression* left, Expression* right) : SubExpression(left, right) {

}

int LessThan::evaluate() {
  if(left->evaluate() < right->evaluate()) return 1;
  return 0;
}

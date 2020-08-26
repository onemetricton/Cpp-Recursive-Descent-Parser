#include <math.h>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "greaterthan.h"

GreaterThan::GreaterThan(Expression* left, Expression* right) : SubExpression(left, right) {

}

int GreaterThan::evaluate() {
  if(left->evaluate() > right->evaluate()) return 1;
  return 0;
}

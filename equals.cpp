#include <math.h>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "equals.h"

Equals::Equals(Expression* left, Expression* right) : SubExpression(left, right) {

}

int Equals::evaluate() {
  if(left->evaluate() == right->evaluate()) return 1;
  return 0;
}

#include <math.h>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "divide.h"

Divide::Divide(Expression* left, Expression* right) : SubExpression(left, right) {

}

int Divide::evaluate() {
  return trunc(left->evaluate() / right->evaluate());
}

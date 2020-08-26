#include <math.h>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "times.h"

Times::Times(Expression* left, Expression* right) : SubExpression(left, right) {

}

int Times::evaluate() {
  return left->evaluate() * right->evaluate();
}

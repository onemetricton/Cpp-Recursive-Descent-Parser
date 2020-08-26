using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "negate.h"

Negate::Negate(Expression* left) : SubExpression(left, left) {

}

int Negate::evaluate() {
  if(left->evaluate() == 0) return 1;
  return 0;
}

#include <math.h>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "bitor.h"

BitOr::BitOr(Expression* left, Expression* right) : SubExpression(left, right) {

}

int BitOr::evaluate() {
  if(left->evaluate()!=0 | right->evaluate()!=0) return 1;
  return 0;
}

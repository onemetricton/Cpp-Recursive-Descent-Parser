#include <iostream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "greaterthan.h"
#include "lessthan.h"
#include "equals.h"
#include "bitand.h"
#include "bitor.h"
#include "negate.h"
#include "condition.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

//Not sure if C++ overloaded constructor can call its own, slimmer constructor ^
SubExpression::SubExpression(Expression* left, Expression* right, Expression* boolExpr) {
  this->left = left;
  this->right = right;
  this->boolExpr = boolExpr;
}

Expression* SubExpression::parse() {
    Expression* left;
    Expression* right;
    Expression* boolExpr;
    char operation, paren, question, closer;

    left = Operand::parse();
    cin >> operation;

    if(operation == '!') {
      cin >> paren;
      return new Negate(left);
    }

    right = Operand::parse();

    if(operation == ':') {
      cin >> question;
      boolExpr = Operand::parse();
      cin >> closer;

      return new Condition(left, right, boolExpr);
    }

    cin >> paren;
    switch (operation) {
        case '+': return new Plus(left, right);
        case '-': return new Minus(left, right);
        case '*': return new Times(left, right);
        case '/': return new Divide(left, right);
        case '>': return new GreaterThan(left, right);
        case '<': return new LessThan(left, right);
        case '=': return new Equals(left, right);
        case '&': return new BitAnd(left, right);
        case '|': return new BitOr(left, right);
    }
    return 0;
}

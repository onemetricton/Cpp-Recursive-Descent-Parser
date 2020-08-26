class Condition : public SubExpression {
  public:
    Condition(Expression* left, Expression* right, Expression* boolExpr);
    int evaluate();
};

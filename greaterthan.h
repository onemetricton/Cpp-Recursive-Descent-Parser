class GreaterThan : public SubExpression {
  public:
    GreaterThan(Expression* left, Expression* right);
    int evaluate();
};

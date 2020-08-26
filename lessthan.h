class LessThan : public SubExpression {
  public:
    LessThan(Expression* left, Expression* right);
    int evaluate();
};

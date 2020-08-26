class Times : public SubExpression {
  public:
    Times(Expression* left, Expression* right);
    int evaluate();
};

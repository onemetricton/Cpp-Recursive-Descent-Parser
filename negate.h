class Negate : public SubExpression {
  public:
    Negate(Expression* left);
    int evaluate();
};

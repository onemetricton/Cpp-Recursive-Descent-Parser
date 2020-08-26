class Minus : public SubExpression {
  public:
    Minus(Expression* left, Expression* right);
    int evaluate();
};

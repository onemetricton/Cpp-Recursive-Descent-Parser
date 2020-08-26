class BitOr : public SubExpression {
  public:
    BitOr(Expression* left, Expression* right);
    int evaluate();
};

class BitAnd : public SubExpression {
  public:
    BitAnd(Expression* left, Expression* right);
    int evaluate();
};

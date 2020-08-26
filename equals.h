class Equals : public SubExpression {
  public:
    Equals(Expression* left, Expression* right);
    int evaluate();
};

class Divide : public SubExpression {
  public:
    Divide(Expression* left, Expression* right);
    int evaluate();
};

class SubExpression: public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* boolExpr);
    static Expression* parse();
protected:
    Expression* left;
    Expression* right;
    Expression* boolExpr; //need a third attribute because parse() should be working on it, not evaluate(), which is invoked later in the application, after reading from stdin
};

/*
class SubExpression : public Expression {
  public:
    SubExpression(Expression* left);
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* condition);
    static Expression* parse(istringstream& token);
  protected:
    Expression* left;
    Expression* right;
    Expression* condition;
};
*/

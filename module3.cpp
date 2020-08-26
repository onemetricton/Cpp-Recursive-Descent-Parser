#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseLine();
void parseAssignments();

int main(int argc, char** argv)
{
  char* fileName;
  string line;

  if(argc > 1) {
    fileName = argv[1];

    std::ifstream testFile(fileName);
    std::istringstream lineStream;

    while(std::getline(testFile, line)) {
      if(!testFile.is_open() || !testFile.good()) return 1;
      lineStream.str(line);
      std::cin.rdbuf(lineStream.rdbuf());
      //cout << line << endl;
      parseLine();
    }
    testFile.close();

  } else {
    parseLine();
  }

  return 0;
}

void parseLine() {
    Expression* expression;
    char paren, comma;
    cout << "Enter expression: ";
    cin >> paren;
    expression = SubExpression::parse();
    cin >> comma;
    parseAssignments();
    cout << "Value = " << expression->evaluate() << endl;
}

void parseAssignments()
{
    char assignop, delimiter;
    string variable;
    int value;
    do
    {
        variable = parseName();
        cin >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}

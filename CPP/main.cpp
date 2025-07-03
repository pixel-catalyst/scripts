#include <iostream>

#include "Expression.h"

int main () {
    // START UP PROMPT
    std::cout << "\nTHIS PROGRAM IMPLEMENTS POSTFIX CONVERTER AND CALCULATOR..\nIt shows how a mechanical calculator converts the expressions given and solves them.\n\n>> By Ashwin Sharma" << endl << "Enter the infix (normal : a+b-c) expression : ";

    // TAKING INPUT OF THE EXPRESSION
    std::string expression;
    getline(std::cin, expression);

    Expression expressionHolder;
    expressionHolder.setExpressionFromString(expression);
    expressionHolder.displayThePostfixMade();
    expressionHolder.solveTheMadePostfix();

    cout << "\nHit Enter to Exit...";
    string useless;
    getline(cin, useless);
    return 0;   // --> executed with no errors
}

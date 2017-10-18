/* CHRISTINE SHUE
   DUE: FEBRUARY 24, 2017
   PURPOSE: Prefix.h is an interface that creates a class Prefix.
   This class holds a prefix expression in the form of a string and
   two stacks separating the operands and the operators.
*/

#ifndef PREFIX_H
#define PREFIX_H

class Prefix
{
public:
    Prefix();
    void getPrefixExp(string);
    void populateStacks();
    double evaluate (int,int,char);
    double calculate();
    int charToNum(char);
private:
    string prefixExp;
    stack <int> operands;
    stack <char> operators;
};

#endif

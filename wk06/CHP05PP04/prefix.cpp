/* CHRISTINE SHUE
   DUE: FEBRUARY 24, 2017
   PURPOSE: Prefix.cpp is an implementation of the class Prefix that
   defines all of the member functions needed to evaluate a prefix expression.
*/
Prefix::Prefix()
{
}

void Prefix::getPrefixExp(string i)
{
    prefixExp = i;
}

void Prefix::populateStacks()
{
    for (int i = prefixExp.length()-1; i >= 0; i--)
    {
	if (isdigit(prefixExp.at(i)))
	    operands.push(charToNum(prefixExp.at(i)));
	else
	    operators.push(prefixExp.at(i));
    }
}

double Prefix::evaluate(int num1, int num2, char sign)
{
    switch (sign)
    {
    case '+':
	return num1 + num2;
    case '-':
	return num1 - num2;
    case '*':
	return num1 * num2;
    case '/':
	return num1 / num2;
    }
}

double Prefix::calculate()
{
    int num1, num2, size = operators.size();
    double value;
    char sign;

    for (int i = 0; i < size; i++)
    {
	num1 = operands.top();
	operands.pop();
	num2 = operands.top();
	operands.pop();
	sign = operators.top();
	operators.pop();
	value = evaluate(num1,num2,sign);
	operands.push(value);
    }
    return value;
}

int Prefix::charToNum(char n)
{
    switch(n)
    {
    case '0':
	return 0;
    case '1':
	return 1;
    case '2':
	return 2;
    case '3':
	return 3;
    case '4':
	return 4;
    case '5':
	return 5;
    case '6':
	return 6;
    case '7':
	return 7;
    case '8':
	return 8;
    case '9':
	return 9;
    }
}

//Write a program that receives two integer numbers and one of the following four instructions(as a single symbol) :
//    +, -, *, / on the next line.The operations are as follows : +is addition, -is subtraction, 
//    * is multiplication, and / is
//    division.Create four functions(for each operation) and call the right one depending on the command.

#include <iostream>

void Operator(int num1, int num2, char op)
{
    if (op == '+')
        std::cout << num1 + num2;
    else if (op == '-')
        std::cout << num1 - num2;
    else if (op == '*')
        std::cout << num1 * num2;
    else if (op == '/' && num2 != 0)
        std::cout << num1 / num2;
    else if (op == '/' && num2 == 0)
        std::cout << "Can't divide by zero.";
}

int main()
{
    int num1 = 0, num2 = 0;
    char op = ' ';

    std::cin >> num1 >> num2;
    std::cin >> op;

    Operator(num1, num2, op);
}
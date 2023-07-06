// Read two integer numbers. Calculate the factorial of each number. Divide the first result by the second and print the
//division formatted to the second decimal point.

#include <iostream>
#include <iomanip>

double factoriel(int x) {
    double result = 1;

    for (; x >= 2; x--)
        result *= x;
    
    return result;
}

int main()
{
    double num1, num2;

    std::cin >> num1;
    std::cin >> num2;

    num1 = factoriel(num1);
    num2 = factoriel(num2);

    std::cout << std::fixed << std::setprecision(2) << num1 / num2 << std::endl;
}
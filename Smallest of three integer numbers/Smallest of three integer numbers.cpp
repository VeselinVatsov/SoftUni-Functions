// Write a function to print the smallest of three integer numbers. Use an appropriate name for the function.

#include <iostream>

void GetMin(int a, int b, int c) 
{
    int smallest = a;

    if (b < smallest)
    {
        smallest = b;
    }
    if (c < smallest)
    {
        smallest = c;
    }
    std::cout << smallest;
}

int main()
{
    int num1, num2, num3;
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    GetMin(num1, num2, num3);
}
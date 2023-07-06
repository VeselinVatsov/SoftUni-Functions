//Create a function that prints the sign of an integer number n :

#include <iostream>

void sign(int a)
{
	if (a > 0) 
	{
		std::cout << "The number " << a << " is positive.";
	}
	else if (a < 0) 
	{
		std::cout << "The number " << a << " is negative.";
	}
	else if (a == 0)
	{
		std::cout << "The number " << a << " is zero.";
	}
}

int main()
{
	int num;
	std::cin >> num;

	sign(num);
}
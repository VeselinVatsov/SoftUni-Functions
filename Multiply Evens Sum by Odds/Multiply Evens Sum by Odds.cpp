//Create a program that reads an integer number and multiplies the sum of all its even digits by the sum of all its
//odd digits :

#include <iostream>

int main()
{
	int n;
	int evenSum = 0, oddSum = 0;
	std::cin >> n;

	while (true) {
		int d = n % 10;
		
		if (d % 2 == 0)
			evenSum += d;
		else
			oddSum += d;

		n /= 10;
		
		if (n == 0) break;
	}
	std::cout << evenSum * oddSum;
}
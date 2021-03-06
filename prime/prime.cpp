// prime.cpp : Adds the user for a single digit number and returns if the number is prime or not.
//

#include "pch.h"
#include <iostream>

int userNumber()
{
	std::cout << "Enter a single digit number: ";
	int x{};
	std::cin >> x;
	return x;
}

bool comparePrime(int x)
{
	if (x == 2)
		return true;
	if (x == 3)
		return true;
	if (x == 5)
		return true;
	if (x == 7)
		return true;
	else
		return false;
}


int main()
{
	//Asks the user to input a number.
	int x{ userNumber() };
	//Compares the number to a list of single digit primes and returns the result
	if (comparePrime(x))
		std::cout << x << " is prime.";
	else
		std::cout << x << " is not prime.";
	return 0;
}

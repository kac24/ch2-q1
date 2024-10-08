#include "io.h"
#include <iostream>

//read an integer from user and return
int readNumber()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	return x;
}

//takes a value from caller and display
void writeAnswer(int ans)
{
	std::cout << "The sum is " << ans << ".\n";
}
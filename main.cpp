#include "io.h"
#include <iostream>

//Read integer from user twice, add them and pass to writeAnswer
int main()
{
	int num1{ readNumber() };
	int num2{ readNumber() };
	int sum{ num1 + num2 };

	writeAnswer(sum);

	return 0;
}

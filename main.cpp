#include "io.h"
#include <iostream>

int main()
{
	int num1{ readNumber() };
	int num2{ readNumber() };
	int ans{ num1 + num2 };

	writeAnswer(ans);
	return 0;
}

#include <iostream>
#include <cstring>
int main()
{
	setlocale(LC_ALL, "rus");
	int number_1;
	int number_2;
	int operator_1;
	std::cout << "¬ведите 1 число: ";
	std::cin >> number_1;
	std::cout << "ќпрератор (+;-;*;/;): ";
	std::cin >> operator_1;
	std::cout << "¬ведите 2 число: ";
	std::cin >> number_2;
	
	if (operator_1 == '+' || '-' || '*' || '/');
	{
		if (operator_1 == '+')
		{
			int number_3;
			number_3 = number_1 + number_2;
			std::cout << number_3;
		}
		else if (operator_1 == '-')
		{
			int number_4;
			number_4 = number_1 - number_2;
			std::cout << number_4;
		}
		else if (operator_1 == '*')
		{
			int number_5;
			number_5 = number_1 * number_2;
			std::cout << number_5;
		}
		else if (operator_1 == '/')
		{
			int number_6;
			number_6 = number_1 / number_2;
			std::cout << number_6;
		}
		else
		{
			std::cout << "Error!";

		}
	}
	
}
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	std::cout << "������� ����� �� 1 �� 100: ";
	std::cin >> number;
	if (number > 100)
	{
		std::cout << "��������� ����";
	}
	else if (number > 10)
	{
		std::cout << "�� ������������";
	}	
	else if (number < 0)
	{
		std::cout << "�� ������������";
	}	
	else 
	{
		std::cout << "���� ��������";
	}
		
}
#include <iostream>;
#include<conio.h>
void main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "������� ������: " << std::endl;
	char button;
	do
	{
		button = _getch();
		if (button == 'w')
		{
			std::cout << button << " - ";
			std::cout << "������" << std::endl;
		}
		else if (button == 'a')
		{
			std::cout << button << " - ";
			std::cout << "�����" << std::endl;
		}
		else if (button == 's')
		{
			std::cout << button << " - ";
			std::cout << "����" << std::endl;
		}
		else if (button == 'd')
		{
			std::cout << button << " - ";
			std::cout << "������" << std::endl;
		}
		else if (button == ' ')
		{
			std::cout << button << "Space - ";
			std::cout << "������" << std::endl;
		}
		else
		{
			std::cout << "Enter - ";
			std::cout << "�����" << std::endl;
		}


	} while (true);
		

}
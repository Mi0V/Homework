#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float price_notebook;
	int amount;
	float price_cover;
	cout << "���������� ��������� �������" << endl;
	cout << "������� �������� ������" << endl;
	cout << "���� ������� --> ";
	cin >> price_notebook;
	cout << "���� ������� --> ";
	cin >> price_cover;
	cout << "���������� ���������� (��.) --> ";
	cin >> amount;
	float all = (price_notebook + price_cover) * amount;
	cout << "��������� �������: " << all << " ���." << endl;
}
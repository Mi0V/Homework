#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ������� �����:" << endl;
	float price;
	cin >> price;
	int integer = price;  // ����� ������� ����� % �� ��������, ��� �� ������������� ������ float ������� ������ ����� int ��� � ����������� ������ ������������� �����
	float remainder = (price - integer) * 100;
	cout << price << " ���. - ��� " << integer << " ���. " << remainder << " ���. " << endl;






}
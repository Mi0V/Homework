#include <iostream>
#include<iomanip>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float distance;
	float fuel_consumption;
	float fuel_price;
	cout << "���������� ��������� ������� �� ���� � �������." << endl;
	cout << "���������� �� ���� (��.) --> ";
	cin >> distance;
	cout << "������ ������� (������ �� 100 �� �������) --> ";
	cin >> fuel_consumption;
	cout << "���� ����� ������� (���.) --> ";
	cin >> fuel_price;
	float the_cost_of_travel = (distance * 2 / 100) * fuel_consumption * fuel_price;
	cout << setprecision (2) << fixed << "������� �� ���� � ������� ��������� � " << the_cost_of_travel << " ���. " << endl;



}
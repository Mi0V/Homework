#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	float buy;
	float weight;
	float buy2;
	int weight2;
	cout << "��������� ��������� ����� �������!" << endl;
	cout << "������� �������� ������" << endl;
	cout << "���� ������� (���.): ";
	cin >> buy;
	cout << "���-�� ��������: ";
	cin >> weight;
	float all = buy * weight;
	cout << "���� ��������� (���.): ";
	cin >> buy2;
	cout << "���-�� ����������: ";
	cin >> weight2;
	float all2 = buy2 * weight2;
	float all_products = all + all2;
	cout << "���� ����� ������ = " << all_products << " ���." << endl;




}

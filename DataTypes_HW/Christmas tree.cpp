#include <iostream>
using namespace std;
#define tab "\t\t\t\t\t\t"
#define Text
void main()
{
#if defined Text	
	setlocale(LC_ALL, "rus");

	cout << tab "� ���� �������� ������,\n" << tab "� ���� ��� �����,\n" << tab "����� � ����� ��������,\n" << tab "������� ����.\n";
	cout << endl;
	cout << tab "������ �� ���� �������:\n" << tab "����, ������, ��� - ���!�\n" << tab "����� ������� ��������:\n" << tab "�������, �� ��������!�\n";
	cout << endl;
	cout << tab "�������� ����� ���������\n" << tab "��� ������� ������.\n" << tab "����� ����, �������� ����\n" << tab "������ ��������.\n";
	cout << endl;
	cout << tab "��! ���� �� ���� �������\n" << tab "��� ������� �������,\n" << tab "������� ����������\n" << tab "���������, �����.\n";
	cout << endl;
	cout << tab "����� ������� ��������,\n" << tab "� � ������� ��������,\n" << tab "������ �� ���� ������\n" << tab "��� ����� �������.\n";
	cout << endl;
	cout << tab "������ ���, ��������,\n" << tab "H� �������� � ��� ������\n" << tab "� �����, ����� �������\n" << tab "�������� ��������!\n";
	cout << endl;
#endif
}


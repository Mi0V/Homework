#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	cout << "ВВедите дробное число:" << endl;
	float price;
	cin >> price;
	int integer = price;  // Хотел сделать через % но выдавало, что не соответствует данным float поэтому сделал через int что в последствии выдало целочисленное число
	float remainder = (price - integer) * 100;
	cout << price << " руб. - это " << integer << " руб. " << remainder << " коп. " << endl;






}
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	float buy;
	float weight;
	float buy2;
	int weight2;
	cout << "Вычислите стоимость ваших покупок!" << endl;
	cout << "Введите исходные данные" << endl;
	cout << "Цена тетради (руб.): ";
	cin >> buy;
	cout << "Кол-во тетрадей: ";
	cin >> weight;
	float all = buy * weight;
	cout << "Цена карандаша (руб.): ";
	cin >> buy2;
	cout << "Кол-во карандашей: ";
	cin >> weight2;
	float all2 = buy2 * weight2;
	float all_products = all + all2;
	cout << "Цена всего товара = " << all_products << " руб." << endl;




}

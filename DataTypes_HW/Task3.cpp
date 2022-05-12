#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float price_notebook;
	int amount;
	float price_cover;
	cout << "Вычисление стоимости покупки" << endl;
	cout << "Введите исходные данные" << endl;
	cout << "Цена тетради --> ";
	cin >> price_notebook;
	cout << "Цена обложки --> ";
	cin >> price_cover;
	cout << "Количество комплектов (шт.) --> ";
	cin >> amount;
	float all = (price_notebook + price_cover) * amount;
	cout << "Стоимость покупки: " << all << " руб." << endl;
}
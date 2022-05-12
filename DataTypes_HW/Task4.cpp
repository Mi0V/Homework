#include <iostream>
#include<iomanip>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float distance;
	float fuel_consumption;
	float fuel_price;
	cout << "Вычисление стоимости поездки на дачу и обратно." << endl;
	cout << "Расстояние до дачи (км.) --> ";
	cin >> distance;
	cout << "Расход бензина (литров на 100 км пробега) --> ";
	cin >> fuel_consumption;
	cout << "Цена литра бензина (руб.) --> ";
	cin >> fuel_price;
	float the_cost_of_travel = (distance * 2 / 100) * fuel_consumption * fuel_price;
	cout << setprecision (2) << fixed << "Поездка на дачу и обратно обойдется в " << the_cost_of_travel << " руб. " << endl;



}
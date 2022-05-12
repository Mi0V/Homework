#include <iostream>
using namespace std; //<<         >>

#define DOUBLE_VARIABLE
#define JOB_WITH_TYPEID
void main()
{
#if defined DOUBLE_VARIABLE
	int a = 2;
	int b = 1;
	cout << a << "\t" << b << endl;
	int c = a;
	a = b;
	b = c;
	cout << a << "\t" << b << endl;
	
#endif
#if defined JOB_WITH_TYPEID
	setlocale(LC_ALL, "rus");
	cout << typeid('+').name() << endl;
	cout << typeid(5).name() << endl;
	cout << typeid(5.).name() << endl;
	cout << typeid(5.f).name() << endl;
	cout << typeid(8ULL).name() << endl;
	cout << typeid(.5).name() << endl;
#endif

}
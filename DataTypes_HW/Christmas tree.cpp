#include <iostream>
using namespace std;
#define tab "\t\t\t\t\t\t"
#define Text
void main()
{
#if defined Text	
	setlocale(LC_ALL, "rus");

	cout << tab "В лесу родилась елочка,\n" << tab "В лесу она росла,\n" << tab "Зимой и летом стройная,\n" << tab "Зеленая была.\n";
	cout << endl;
	cout << tab "Метель ей пела песенку:\n" << tab "«Спи, елочка, бай - бай!»\n" << tab "Мороз снежком укутывал:\n" << tab "«Смотри, не замерзай!»\n";
	cout << endl;
	cout << tab "Трусишка зайка серенький\n" << tab "Под елочкой скакал.\n" << tab "Порою волк, сердитый волк\n" << tab "Рысцою пробегал.\n";
	cout << endl;
	cout << tab "Чу! Снег по лесу частому\n" << tab "Под полозом скрипит,\n" << tab "Лошадка мохноногая\n" << tab "Торопится, бежит.\n";
	cout << endl;
	cout << tab "Везет лошадка дровенки,\n" << tab "А в дровнях старичок,\n" << tab "Срубил он нашу елочку\n" << tab "Под самый корешок.\n";
	cout << endl;
	cout << tab "Теперь она, нарядная,\n" << tab "Hа праздник к нам пришла\n" << tab "И много, много радости\n" << tab "Детишкам принесла!\n";
	cout << endl;
#endif
}


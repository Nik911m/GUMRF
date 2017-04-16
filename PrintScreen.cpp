///Вывод базы на экран
#include "includes.h" //Подключаемые библиотеки и дерективы
#include "STRUCT.h" //Спецификация структуры и технологии списка

//Функция вывода на экран
void PrintScreen(List *b) // //Вывод базы на экран
{
	List *print = b; //Указатель для прохода по списку
	while (print) //Проход по списку
	{
		cout << "==================" << endl;;
		cout << "Имя: " << print->man.name << endl;
		cout << "Телефон: " << print->man.phone << endl;
		cout << "Время: " << print->man.time << endl;
		cout << "==================" << endl;;

		print = print->next; //Переход к следующему элементу списка
	}
	cout << "NULL" << endl; //Вывод NULL указателя
}
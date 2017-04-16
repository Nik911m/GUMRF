
#include "includes.h" //Подключаемые библиотеки и дерективы
#include "prototypes.h"

int main()
{
	SetConsoleCP(1251); //Кодировка 1251
	SetConsoleOutputCP(1251);

	List* begin = NULL; //Технология "Односвязный список"

	int operation; //Переменная для выбора действия
	bool Flag_Init = true; //Флаг инициализации списка

	while (true) //Цикл перезапуска программы
	{
		Menu(); //Меню
		cin >> operation; // Выбор действий
		ClearStream(); //Очистка потока
		system("cls");
		switch (operation) //Меню выбора действий
		{
		case 0: //Завершить программу
			return 0;

		case 1: //Добавить нового абонента
		{
			Add();
		} break;

		case 2: //Вывод списка абонентов на экран
		{
			Init(&begin);//ПРОВЕДЕНИЕ ПЕРВИЧНОЙ ИНИЦИАЛИЗАЦИИ БАЗЫ ДАННЫХ/СИНХРОНИЗАЦИЯ С ФАЙЛОМ ATS.txt
			if (Flag_Init) // Флаг первичной инициализации
				PrintScreen(begin); //Функция вывода на экран
			else //Сообщение об ошибке
				cout << "Отображение невозможно т.к. база не инициализирована," 
				"пожалуйста, проведите инициализацию" << endl;

		} break;

		case 3: //Вывод извещений абонентов на экран
		{
			Init(&begin);//ПРОВЕДЕНИЕ ПЕРВИЧНОЙ ИНИЦИАЛИЗАЦИИ БАЗЫ ДАННЫХ/СИНХРОНИЗАЦИЯ С ФАЙЛОМ ATS.txt
			int tariff = 2; //Тариф
			Notice(begin, tariff); //Вывод извещений
		} break;


		default:  cout << "Выберите пункт меню 0-3" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
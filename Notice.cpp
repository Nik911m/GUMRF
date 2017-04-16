#include "includes.h"
#include "STRUCT.h"

void Notice(List * begin, int tariff) //Выдача извещений абонентов
{
	ofstream outFile;		//Создание объекта для ввода
	List *print = begin; //Указатель для прохода по списку
	cout << "Текущая дата: ";
	string date;
	cin >> date;
	cout << "Дата извещения: " << date << endl;
	cout << endl;
	string filename = "Notice ["+date+"].txt"; //Имя файла
	outFile.open(filename);
	outFile << "Дата извещения: " << date << endl;
	while (print) //Проход по списку
	{
		cout << "==================" << endl;
		outFile<< "==================" << endl; //Дублирование в файл извещения
		cout << "Имя: " << print->man.name << endl;
		outFile << "Имя: " << print->man.name << endl; //Дублирование в файл извещения
		cout << "Телефон: " << print->man.phone << endl;
		outFile << "Телефон: " << print->man.phone << endl;//Дублирование в файл извещения
		cout << "К оплате: " << print->man.time * tariff << " Рублей" << endl;
		outFile << "К оплате: " << print->man.time * tariff <<" Рублей" << endl;//Дублирование в файл извещения
		cout << "==================" << endl;
		outFile << "==================" << endl; //Дублирование в файл извещения
		print = print->next; //Переход к следующему элементу списка
	}

	cout << "NULL" << endl; //Вывод NULL указателя

	outFile.close();
}
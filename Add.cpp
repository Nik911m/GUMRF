///Добавить абонента
#include "includes.h"
#include "STRUCT.h"

void Add()
{
	ofstream outFile;		//Создание объекта для ввода
	string filename = "ATS.txt"; //Имя файла
	outFile.open(filename, std::ios_base::app); //Ассоциирование его с файлом
	//"ios_base::app" - Открыть файл, указатель записи в конец файла
	cout << "Добавление нового абонента: "<<endl;
	outFile << endl;
	cout << "Фамилия: " << endl;
	string temp;
	cin >> temp;
	outFile << temp << endl;
	cout << "Номер телефона: " << endl;
	cin >> temp;
	outFile << temp << endl;
	cout << "Время разговора:" << endl;
	cin >> temp;
	outFile << temp;
	outFile.close(); //Завершить работу с файлом
	cout << " " << endl;
}
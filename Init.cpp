#include "includes.h" //Подключаемые библиотеки и дерективы
#include "STRUCT.h" //Спецификация структуры и технологии списка

void Init(List **begin) //Функция инициализации списка
{
	ifstream inFile; //Объект для обработки файлового ввода
	string filename = "ATS.txt"; //Имя файла
	inFile.open(filename); //Ассоциирование inFile с файлом
	if (!inFile.is_open())	//Не удалось открыть файл
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating. \n";
		exit(EXIT_FAILURE);
	}

	(*begin) = new List;
	(*begin)->next = NULL;

	inFile >> (*begin)->man.name;
	inFile >> (*begin)->man.phone;
	inFile >> (*begin)->man.time;

	List* end = (*begin);


	while (inFile.good())	//Пока ввод успешен и не достигнут EOF
	{
		end->next = new List;
		end = end->next;
		inFile >> end->man.name;
		inFile >> end->man.phone;
		inFile >> end->man.time;

		end->next = NULL;
	}
	inFile.close();
}
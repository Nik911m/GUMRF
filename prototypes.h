///Файл прототипирования

#include "STRUCT.h" //Спецификация структуры и технологии списка

void Menu(); //Меню
void ClearStream(); //Очистка потока
void PrintScreen(List* ); //Вывод базы на экран
void Init(List **); //Функция инициализации списка
void Add(); //Добавить абонента
void Notice(List * begin, int tariff); //Вывод извещений, //Сохранение в отдельном файле

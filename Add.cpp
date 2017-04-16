///Äîáàâèòü àáîíåíòà
#include "includes.h"
#include "STRUCT.h"

void Add()
{
	SetConsoleCP(1251); //Кодировка 1251
	SetConsoleOutputCP(1251);

	ofstream outFile;		//Ñîçäàíèå îáúåêòà äëÿ ââîäà
	string filename = "ATS.txt"; //Èìÿ ôàéëà
	outFile.open(filename, std::ios_base::app); //Àññîöèèðîâàíèå åãî ñ ôàéëîì
	//"ios_base::app" - Îòêðûòü ôàéë, óêàçàòåëü çàïèñè â êîíåö ôàéëà
	cout << "Äîáàâëåíèå íîâîãî àáîíåíòà: "<<endl;
	outFile << endl;
	cout << "Ôàìèëèÿ: " << endl;
	string temp;
	cin >> temp;
	outFile << temp << endl;
	cout << "Íîìåð òåëåôîíà: " << endl;
	cin >> temp;
	outFile << temp << endl;
	cout << "Âðåìÿ ðàçãîâîðà:" << endl;
	cin >> temp;
	outFile << temp;
	outFile.close(); //Çàâåðøèòü ðàáîòó ñ ôàéëîì
	cout << " " << endl;
}

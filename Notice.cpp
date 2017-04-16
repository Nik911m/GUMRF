#include "includes.h"
#include "STRUCT.h"

void Notice(List * begin, int tariff) //������ ��������� ���������
{
	ofstream outFile;		//�������� ������� ��� �����
	List *print = begin; //��������� ��� ������� �� ������
	cout << "������� ����: ";
	string date;
	cin >> date;
	cout << "���� ���������: " << date << endl;
	cout << endl;
	string filename = "Notice ["+date+"].txt"; //��� �����
	outFile.open(filename);
	outFile << "���� ���������: " << date << endl;
	while (print) //������ �� ������
	{
		cout << "==================" << endl;
		outFile<< "==================" << endl; //������������ � ���� ���������
		cout << "���: " << print->man.name << endl;
		outFile << "���: " << print->man.name << endl; //������������ � ���� ���������
		cout << "�������: " << print->man.phone << endl;
		outFile << "�������: " << print->man.phone << endl;//������������ � ���� ���������
		cout << "� ������: " << print->man.time * tariff << " ������" << endl;
		outFile << "� ������: " << print->man.time * tariff <<" ������" << endl;//������������ � ���� ���������
		cout << "==================" << endl;
		outFile << "==================" << endl; //������������ � ���� ���������
		print = print->next; //������� � ���������� �������� ������
	}

	cout << "NULL" << endl; //����� NULL ���������

	outFile.close();
}
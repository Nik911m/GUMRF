///�������� ��������
#include "includes.h"
#include "STRUCT.h"

void Add()
{
	ofstream outFile;		//�������� ������� ��� �����
	string filename = "ATS.txt"; //��� �����
	outFile.open(filename, std::ios_base::app); //�������������� ��� � ������
	//"ios_base::app" - ������� ����, ��������� ������ � ����� �����
	cout << "���������� ������ ��������: "<<endl;
	outFile << endl;
	cout << "�������: " << endl;
	string temp;
	cin >> temp;
	outFile << temp << endl;
	cout << "����� ��������: " << endl;
	cin >> temp;
	outFile << temp << endl;
	cout << "����� ���������:" << endl;
	cin >> temp;
	outFile << temp;
	outFile.close(); //��������� ������ � ������
	cout << " " << endl;
}
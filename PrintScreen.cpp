///����� ���� �� �����
#include "includes.h" //������������ ���������� � ���������
#include "STRUCT.h" //������������ ��������� � ���������� ������

//������� ������ �� �����
void PrintScreen(List *b) // //����� ���� �� �����
{
	List *print = b; //��������� ��� ������� �� ������
	while (print) //������ �� ������
	{
		cout << "==================" << endl;;
		cout << "���: " << print->man.name << endl;
		cout << "�������: " << print->man.phone << endl;
		cout << "�����: " << print->man.time << endl;
		cout << "==================" << endl;;

		print = print->next; //������� � ���������� �������� ������
	}
	cout << "NULL" << endl; //����� NULL ���������
}
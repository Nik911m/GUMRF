
#include "includes.h" //������������ ���������� � ���������
#include "prototypes.h"

int main()
{
	SetConsoleCP(1251); //��������� 1251
	SetConsoleOutputCP(1251);

	List* begin = NULL; //���������� "����������� ������"

	int operation; //���������� ��� ������ ��������
	bool Flag_Init = true; //���� ������������� ������

	while (true) //���� ����������� ���������
	{
		Menu(); //����
		cin >> operation; // ����� ��������
		ClearStream(); //������� ������
		system("cls");
		switch (operation) //���� ������ ��������
		{
		case 0: //��������� ���������
			return 0;

		case 1: //�������� ������ ��������
		{
			Add();
		} break;

		case 2: //����� ������ ��������� �� �����
		{
			Init(&begin);//���������� ��������� ������������� ���� ������/������������� � ������ ATS.txt
			if (Flag_Init) // ���� ��������� �������������
				PrintScreen(begin); //������� ������ �� �����
			else //��������� �� ������
				cout << "����������� ���������� �.�. ���� �� ����������������," 
				"����������, ��������� �������������" << endl;

		} break;

		case 3: //����� ��������� ��������� �� �����
		{
			Init(&begin);//���������� ��������� ������������� ���� ������/������������� � ������ ATS.txt
			int tariff = 2; //�����
			Notice(begin, tariff); //����� ���������
		} break;


		default:  cout << "�������� ����� ���� 0-3" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
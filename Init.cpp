#include "includes.h" //������������ ���������� � ���������
#include "STRUCT.h" //������������ ��������� � ���������� ������

void Init(List **begin) //������� ������������� ������
{
	ifstream inFile; //������ ��� ��������� ��������� �����
	string filename = "ATS.txt"; //��� �����
	inFile.open(filename); //�������������� inFile � ������
	if (!inFile.is_open())	//�� ������� ������� ����
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


	while (inFile.good())	//���� ���� ������� � �� ��������� EOF
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
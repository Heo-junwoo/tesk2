#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int sum(const char* filename)
{
	//�����Է¼��� �� �����˻�
	ifstream table(filename);
	if (!table)
	{
		cout <<  "�б����" << endl;
		return 0;
	}
	

	//���ۼ���
	int buf;


	//���۸� ���� ������ ������� ���� �� net�� �ջ�
	//������ ������ net�� ��� �� �ʱ�ȭ
	while(!table.eof())
	{
		int net = 0;
		for (int j = 0; j < 2; j++)
		{
			table >> buf;
			net = net + buf;
		}
		cout << net << endl;
	}
	return 0;
}


int main()
{
	sum("Text.txt");
}

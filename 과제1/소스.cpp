#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//�����ּ��̸� �������
	const char* origifname = "C:\\Users\\dinle\\cap.png";
	const char* copyfname = "C:\\Users\\dinle\\cpacopy.png";


	//�����Է¼��� �� �����˻�
	ifstream infile(origifname, ios::in | ios::binary);
	if (!infile)
	{
		cout << origifname << "�������" << endl;
		return 0;
	}


	//������¼��� �� �����˻�
	ofstream outfile(copyfname, ios::out | ios::binary);
	if (!outfile)
	{
		cout << copyfname << "�������" << endl;
		return 0;
	}


	//���� ����
	char buf[1024];


	//������ �о� ���۸� ���� ���ο� ������ ��
	while (!infile.eof())
	{
		infile.read(buf, 1024);
		int n = infile.gcount();
		outfile.write(buf, n);
	}


	cout << "����Ϸ�" << endl;


	//���� �ݱ�
	infile.close();
	outfile.close();

}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int sum(const char* filename)
{
	//파일입력선언 및 오류검사
	ifstream table(filename);
	if (!table)
	{
		cout <<  "읽기오류" << endl;
		return 0;
	}
	

	//버퍼선언
	int buf;


	//버퍼를 통해 파일을 순서대로 읽은 후 net에 합산
	//한줄을 읽으면 net을 출력 후 초기화
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

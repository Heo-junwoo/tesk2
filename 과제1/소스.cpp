#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//파일주소이름 상수선언
	const char* origifname = "C:\\Users\\dinle\\cap.png";
	const char* copyfname = "C:\\Users\\dinle\\cpacopy.png";


	//파일입력선언 및 오류검사
	ifstream infile(origifname, ios::in | ios::binary);
	if (!infile)
	{
		cout << origifname << "열기오류" << endl;
		return 0;
	}


	//파일출력선언 및 오류검사
	ofstream outfile(copyfname, ios::out | ios::binary);
	if (!outfile)
	{
		cout << copyfname << "쓰기오류" << endl;
		return 0;
	}


	//버퍼 선언
	char buf[1024];


	//파일을 읽어 버퍼를 통해 새로운 파일을 씀
	while (!infile.eof())
	{
		infile.read(buf, 1024);
		int n = infile.gcount();
		outfile.write(buf, n);
	}


	cout << "복사완료" << endl;


	//파일 닫기
	infile.close();
	outfile.close();

}

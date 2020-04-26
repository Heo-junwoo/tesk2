#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const char* origifname = "C:\\Users\\dinle\\cap.png";
	const char* copyfname = "C:\\Users\\dinle\\cpacopy.png";

	ifstream infile(origifname, ios::in | ios::binary);
	if (!infile)
	{
		cout << origifname << "열기오류" << endl;
		return 0;
	}



	ofstream outfile(copyfname, ios::out | ios::binary);
	if (!outfile)
	{
		cout << copyfname << "쓰기오류" << endl;
		return 0;
	}



	char buf[1024];

	while (!infile.eof())
	{
		infile.read(buf, 1024);
		int n = infile.gcount();
		outfile.write(buf, n);
	}

	cout << "복사완료" << endl;

	infile.close();
	outfile.close();

}

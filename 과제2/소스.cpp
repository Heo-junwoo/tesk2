#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int sum(const char* filename)
{

	ifstream table(filename);
	if (!table)
	{
		cout <<  "읽기오류";
		return 0;
	}
	
	int temp;

	while(!table.eof())
	{
		int net = 0;
		for (int j = 0; j < 2; j++)
		{
			table >> temp;
			net = net + temp;
		}
		cout << net << endl;
	}
	
	return 0;
}

int main()
{
	sum("Text.txt");
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void sum(const char* filename)
{
	ifstream table(filename);
	char line[255];
	while (!table.eof())
	{
		table.getline(line, 255);
		cout << stoi(line);
	}

}

int main()
{
	sum("Text.txt");
}

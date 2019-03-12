#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;


int main()
{
	ofstream mine;
	ifstream in_file;
	int var;

	int a[5] = { 5, 4, 12, 54, 29 };
	mine.open("out.txt", ios::out);
	in_file.open("out.txt");

	//mine << "My name is Dinara" << endl;

	for(int i=0; i<5; i++)
		mine << a[i] << " ";

	mine.close(); // открепление от физического файла out.txt

	in_file.open("out.txt");
	while (in_file.eof()) // end of file (eof)
	{
		in_file >> var;
		cout << var << endl;
	}

	system("pause");
	return 0;
}
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
	int sum = 0, k = 0;

	////int a[5] = { 5, 4, 12, 54, 29 };
	//mine.open("out.txt", ios::out);
	////in_file.open("out.txt");
	////mine << "My name is Dinara" << endl;
	//for(int i=0; i<5; i++)
	//	mine << a[i] << " ";
	//mine.close(); // открепление от физического файла out.txt

	in_file.open("in.txt", ios::in);
	
	if (!in_file)
	{
		cout << "file open error" << endl;
	}
	else
		while (!in_file.eof()) // end of file (eof)
	{
		in_file >> var;
		cout << var << endl;
		k++;
		sum += var;
	}
	cout << "sum = " << sum << endl;
	cout << "quantity = " << k << endl << endl;

	in_file.seekg(0); //устанавливает курсор на самое начало файла, чтобы оттуда начать считывание

	int *arr=new int[k];
	for (int i = 0; i < k; i++)
	{
		in_file >> var;
		arr[i] = var;
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[]arr;

	system("pause");
	return 0;
}
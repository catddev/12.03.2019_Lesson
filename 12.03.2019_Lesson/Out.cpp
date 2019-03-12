#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
	ofstream mine;
	ifstream in_file;
	char buffer[300];
	in_file.open("Source.cpp"); // открытие файла в режиме чтения
	mine.open("Out.cpp"); //в режиме записи
	if (!in_file)
		cerr << "file open error" << endl;
		while (in_file.getline(buffer, 300)) // посимвольное считывание пока идет как cin.get()
			if(strlen(buffer)>10)
				mine << buffer << endl; // если не поставить end of line считает и скопирует все в одну длинную строку
	//if (!in_file)
	//	cerr << "file open error" << endl;
	//	while (in_file.get(ch)) // посимвольное считывание пока идет как cin.get()
	//		if (ch != ' ') // копирует все кроме пробелов
	//			mine << ch;
	//int var;
	//int sum = 0, k = 0;
	//////int a[5] = { 5, 4, 12, 54, 29 };
	////mine.open("out.txt", ios::out);
	//////in_file.open("out.txt");
	//////mine << "My name is Dinara" << endl;
	////for(int i=0; i<5; i++)
	////	mine << a[i] << " ";
	////mine.close(); // открепление от физического файла out.txt
	//in_file.open("in.txt", ios::in);
	//if (!in_file)
	//	cout << "file open error" << endl;
	//	while (!in_file.eof()) // end of file (eof)
	//	in_file >> var;
	//	cout << var << endl;
	//	sum += var;
	//cout << "sum = " << sum << endl;
	//cout << "quantity = " << k << endl << endl;
	//in_file.seekg(0); //устанавливает курсор на самое начало файла, чтобы оттуда начать считывание
	//int *arr=new int[k];
	//int i = 0;
	//while (!in_file.eof())
	//	in_file >> arr[i++]; //считывание и занесение в массив
	//for(int i=0; i<k; i++)
	//	cout << arr[i] << " ";
	//cout << endl;
	//delete[]arr;
	system("pause");

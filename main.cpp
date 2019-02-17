#include <iostream>
#include <fstream>
#include "container_atd.h"
#include "animal_atd.h"
//#include "containers.cpp"

//namespace simple_animals {
//	// Сигнатуры требуемых внешних функций
//	void Clear();
//	void In(ifstream &ifst);
//	void Out(ofstream &ofst);
//}
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream in;
	in.open("in.txt");
	if (!in.is_open())
	{
		cout << "Ошибка с файлом";
		return -1;
	}

	ofstream out;
	out.open("out.txt");
	if (!out.is_open())
	{
		cout << "Ошибка с файлом";
		return -1;
	}

	cout << "Start" << endl;

	simple_animals::container* begin = new simple_animals::container;
	begin->In(in);
	begin->Out(out);

	cout << "Stop" << endl;

	in.close();
	out.close();
	system("pause");
	return 0;
}
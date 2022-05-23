//////////////////Source.cpp
#include "ARprog.h"
#include "GEOprog.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Element* arprog = new ARprog(10,10);
	Element* geo = new GEOprog(1,2);
	cout << "Арифметична прогресія" << endl;
	for (int i = 0; i < 15; i++)
	{
		cout << arprog->element(i) << endl;
		
	}
	cout << endl;	
	system	("pause");
	cout << endl;
	cout << "Геометрична прогресія" << endl;
	for (int i = 0; i < 15; i++)
	{
		cout  << geo->element(i) << endl;
	}
	return 0;
}
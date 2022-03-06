#include <iostream>
#include <cstring>
#include "03-2-2 Printer.h"

using namespace std;

void Printer::SetString(const char* str)
{
	strcpy(str_save, str);
}

void Printer::ShowString()
{
	cout << str_save << endl;
}
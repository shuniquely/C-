#include "03-2-2 Printer.h"

int main()
{
	Printer pnt;
	pnt.SetString("Hello wolrd!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
}
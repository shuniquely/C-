#ifndef __PRINTER_H__
#define __PRINTER_H__

class Printer
{
private:
	char str_save[50];
public:
	void SetString(const char* str);
	void ShowString();
};

#endif // !__PRINTER_H__
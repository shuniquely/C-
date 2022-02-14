#include <iostream>

using namespace std;

// 참조자를 사용하여 SwapPointer 함수 정의.
void SwapPointer(int* (&ptr1), int* (&ptr2))
{
	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

int main()
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	cout << "ptr1: " << *ptr1 << endl << "ptr2: " << *ptr2 << endl;
}
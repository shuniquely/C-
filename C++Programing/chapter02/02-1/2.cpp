#include <iostream>

using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	int val1 = 10;
	int val2 = 20;

//	SwapByRef2(10, 20);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
}

// 함수에 인자로 있는 참조자는 함수가 실행될 때 받아오는 매개변수로 초기화 되는데 참조자는 상수로 초기화 할 수 없기 때문에 오류가 난다.
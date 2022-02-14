#include <iostream>

using namespace std;

int main()
{
	const int num = 12;

	// 위 변수를 가리키는 포인터 생성.
	const int* ptr = &num;
	// 위 포인터 변수를 참조하는 참조자 생성
	const int* (&ref) = ptr;

	cout << *ptr << endl << *ref << endl;
}
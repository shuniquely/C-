#include <iostream>

using namespace std;

int main()
{
	const int num = 12;

	// �� ������ ����Ű�� ������ ����.
	const int* ptr = &num;
	// �� ������ ������ �����ϴ� ������ ����
	const int* (&ref) = ptr;

	cout << *ptr << endl << *ref << endl;
}
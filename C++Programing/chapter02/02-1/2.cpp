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

// �Լ��� ���ڷ� �ִ� �����ڴ� �Լ��� ����� �� �޾ƿ��� �Ű������� �ʱ�ȭ �Ǵµ� �����ڴ� ����� �ʱ�ȭ �� �� ���� ������ ������ ����.
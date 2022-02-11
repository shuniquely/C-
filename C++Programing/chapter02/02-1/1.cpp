#include <iostream>

using namespace std;

// 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
void PlusOne(int& num)
{
	num += 1;
}

// 인자로 전달된 int형 변수의 부호를 바꾸는 함수
void ChangeSign(int& num)
{
	num = -num;
}

int main()
{
	int num;

	cout << "정수를 입력하세요: ";
	cin >> num;

	PlusOne(num);
	cout << "1이 증가된 후: " << num << endl;

	ChangeSign(num);
	cout << "부호가 변경된 후: " << num << endl;
}
#include <iostream>


using namespace std;

int main()
{
	// num은 사용자가 입력한 정수를 저장.
	int num;

	// num에 정수를 받아온다.
	cout << "구구단 숫자 입력: ";
	cin >> num;

	// for문을 이용하여 num에 해당하는 구구단을 출력한다.
	for (int i = 1; i <= 9; i++)
	{
		cout << num << " X " << i << " = " << num * i << endl;
	}
}
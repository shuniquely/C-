#include <iostream>

using namespace std;

int main()
{
	// num은 입력 받는 정수, result는 합을 저장할 변수.
	int num, result = 0;

	// for문을 이용하여 정수를 입력 받는다. 턴마다 정수를 입력받고 입력받은 정수(num)를 결과값(result)에 더해준다.
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "번째 정수 입력: ";
		cin >> num;
		result += num;
	}

	// 출력한다.
	cout << "합계: " << result << endl;

























}
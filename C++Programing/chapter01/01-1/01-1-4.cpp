#include <iostream>

using namespace std;

int main()
{
	// amount는 판매 금액을 저장할 변수.
	int amount;

	// 무한 반복문을 통해 작성한다.
	while (1)
	{
		// 판매 금액을 입력 받아 저장한다.
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> amount;

		// -1 이하가 입력되면 종료.
		if (amount <= -1) break;

		// 급여를 계산하여 출력한다. (급여계산은 50 + 판매금액 * 0.12)
		cout << "이번 달 급여: " << 50 + amount * 0.12 << "만원" << endl;
	}

	cout << "프로그램을 종료합니다." << endl;
}
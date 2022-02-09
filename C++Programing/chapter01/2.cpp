#include <iostream>

using namespace std;

int main()
{
	// name은 이름을 저장할 변수, pnum은 전화번호를 저장하는 변수.
	char name[50], pnum[50];

	// 이름과 전화번호를 저장하여 각 name과 pnum 변수에 저장한다.
	cout << "이름 입력: ";
	cin >> name;
	cout << "전화번호 입력: ";
	cin >> pnum;

	// 데이터를 그대로 출력한다.
	cout << "사용자명: " << name << "\n전화번호: " << pnum << endl;
}
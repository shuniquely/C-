#include <iostream>

using namespace std;

// 디폴트 값 지정 함수를 오버로딩 함수로.
int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume(int length, int width)
{
	// height의 값을 디폴트 값으로 대체함.
	return length * width * 1;
}

int BoxVolume(int length)
{
	// height와 width의 값을 디폴트 값으로 대체함.
	return length * 1 * 1;
}

int main()
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
//  cout << "[D, D, D] : " << BoxVolume() << endl;
}
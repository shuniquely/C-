#include <iostream>

using namespace std;

// ����Ʈ �� ���� �Լ��� �����ε� �Լ���.
int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume(int length, int width)
{
	// height�� ���� ����Ʈ ������ ��ü��.
	return length * width * 1;
}

int BoxVolume(int length)
{
	// height�� width�� ���� ����Ʈ ������ ��ü��.
	return length * 1 * 1;
}

int main()
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
//  cout << "[D, D, D] : " << BoxVolume() << endl;
}
#include <iostream>

using namespace std;

// ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
void PlusOne(int& num)
{
	num += 1;
}

// ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
void ChangeSign(int& num)
{
	num = -num;
}

int main()
{
	int num;

	cout << "������ �Է��ϼ���: ";
	cin >> num;

	PlusOne(num);
	cout << "1�� ������ ��: " << num << endl;

	ChangeSign(num);
	cout << "��ȣ�� ����� ��: " << num << endl;
}
#include <iostream>

using namespace std;

int main()
{
	// num�� �Է� �޴� ����, result�� ���� ������ ����.
	int num, result = 0;

	// for���� �̿��Ͽ� ������ �Է� �޴´�. �ϸ��� ������ �Է¹ް� �Է¹��� ����(num)�� �����(result)�� �����ش�.
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "��° ���� �Է�: ";
		cin >> num;
		result += num;
	}

	// ����Ѵ�.
	cout << "�հ�: " << result << endl;

























}
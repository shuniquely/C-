#include <iostream>

using namespace std;

int main()
{
	// amount�� �Ǹ� �ݾ��� ������ ����.
	int amount;

	// ���� �ݺ����� ���� �ۼ��Ѵ�.
	while (1)
	{
		// �Ǹ� �ݾ��� �Է� �޾� �����Ѵ�.
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> amount;

		// -1 ���ϰ� �ԷµǸ� ����.
		if (amount <= -1) break;

		// �޿��� ����Ͽ� ����Ѵ�. (�޿������ 50 + �Ǹűݾ� * 0.12)
		cout << "�̹� �� �޿�: " << 50 + amount * 0.12 << "����" << endl;
	}

	cout << "���α׷��� �����մϴ�." << endl;
}
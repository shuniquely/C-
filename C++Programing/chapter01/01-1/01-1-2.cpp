#include <iostream>

using namespace std;

int main()
{
	// name�� �̸��� ������ ����, pnum�� ��ȭ��ȣ�� �����ϴ� ����.
	char name[50], pnum[50];

	// �̸��� ��ȭ��ȣ�� �����Ͽ� �� name�� pnum ������ �����Ѵ�.
	cout << "�̸� �Է�: ";
	cin >> name;
	cout << "��ȭ��ȣ �Է�: ";
	cin >> pnum;

	// �����͸� �״�� ����Ѵ�.
	cout << "����ڸ�: " << name << "\n��ȭ��ȣ: " << pnum << endl;
}
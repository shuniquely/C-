#include <iostream>


using namespace std;

int main()
{
	// num�� ����ڰ� �Է��� ������ ����.
	int num;

	// num�� ������ �޾ƿ´�.
	cout << "������ ���� �Է�: ";
	cin >> num;

	// for���� �̿��Ͽ� num�� �ش��ϴ� �������� ����Ѵ�.
	for (int i = 1; i <= 9; i++)
	{
		cout << num << " X " << i << " = " << num * i << endl;
	}
}
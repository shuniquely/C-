#include <iostream>

using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApple;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApple = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		if (money < 0)
		{
			cout << "0���� ���� ���� �Է��� �� �����ϴ�." << endl;
			return;
		}
		int num = money / APPLE_PRICE;
		numOfApple -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() const
	{
		cout << "���� ���: " << numOfApple << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOFApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOFApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		if (money < 0)
		{
			cout << "0���� ���� ���� �Է��� �� �����ϴ�." << endl;
			return;
		}
		numOFApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOFApples << endl;
	}
};

int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
}
//定义一个类，求解百钱百鸡问题。我国古代数学家张丘建在《算经》一书中提出的数学问题：
//鸡翁一只钱五，鸡母一只钱三，鸡雏三只钱一。百钱买百鸡，问鸡翁、鸡母、鸡雏各几何？类中包括，
//鸡翁、鸡母、鸡雏各自数量的3个私有成员，其各自价格如上所述，求任意钱数下，是否有解，
//无解情况下输出：此题无解，有解情况下依次输出所有解。

#include <iostream>
using namespace std;

class Cxk
{
public:
	Cxk() :Cf(0), Cm(0), Ck(0) {}
	void solve(int money);
private:
	int Cf;
	int Cm;
	int Ck;
};

void Cxk::solve(int money)
{
	int count = 0;

	for (int i = 0; i <= money / 5 && i <= 100; i++)
	{
		for (int j = 0; j <= money / 3 && j <= 100; j++)
		{
			for (int k = 0; k <= money * 3 && k <= 100; k++)
			{
				if ((5 * i + 3 * j + k / 3 == money && k % 3 == 0) && (i + j + k == 100))
				{
					count++;
					cout << "公鸡" << i << "只,"
						<< "母鸡" << j << "只,"
						<< "小鸡" << k << "只" << endl;
				}
			}
		}
	}
	if (count == 0)
	{
		cout << "此题无解";
	}
}

int main()
{
	Cxk cxk;
	int money;
	cin >> money;
	cxk.solve(money);
	return 0;
}
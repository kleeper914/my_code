//����һ���࣬����Ǯ�ټ����⡣�ҹ��Ŵ���ѧ�������ڡ��㾭��һ�����������ѧ���⣺
//����һֻǮ�壬��ĸһֻǮ����������ֻǮһ����Ǯ��ټ����ʼ��̡���ĸ�����������Σ����а�����
//���̡���ĸ����������������3��˽�г�Ա������Լ۸�����������������Ǯ���£��Ƿ��н⣬
//�޽����������������޽⣬�н����������������н⡣

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
					cout << "����" << i << "ֻ,"
						<< "ĸ��" << j << "ֻ,"
						<< "С��" << k << "ֻ" << endl;
				}
			}
		}
	}
	if (count == 0)
	{
		cout << "�����޽�";
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
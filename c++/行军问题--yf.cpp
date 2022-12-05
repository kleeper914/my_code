#include <iostream>
#include <cstdlib>
#include <cstring>
#define N 99
using namespace std;
int main() {
	char ori1[N], ori2[N], sec[N];
	int i, a, b, c, temp, load1, load2;
	cout << "第一个士兵手持的字母为" << endl;
	cin.getline(ori1, N, '\n');
	cout << "第二个士兵手持的字母为" << endl;
	cin.getline(ori2, N, '\n');
	cout << "第三个士兵手持的数字为" << endl;
	cin >> i;
	getchar();
	cout << "需要加密的密文为" << endl;
	cin.getline(sec, N, '\n');
	cout << "加密中..." << endl;
	a = strlen(sec);
	b = strlen(ori1);
	c = strlen(ori2);
	for (int n = 0; n < a; n++) {
		for (int m = 0; m < b; m++) {
			if (sec[n] == ori1[m]) {
				if ((m + i) >= c && (m + i) % c == 0)
				{
					sec[n] = ori2[c - 1];
					break;
				}
				else
				{
					temp = (m + i) % c;
					sec[n] = ori2[temp];
					break;
				}
			}
			else continue;
		}
	}
	cout << "加密为" << sec << endl;
	system("pause");
	return 0;
}
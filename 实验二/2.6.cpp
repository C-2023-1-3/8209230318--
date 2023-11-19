#include<iostream>
using namespace std;
int main()
{
	int num1, num2, temp;
	cout<< "请输入两个要进行计算的数值:";
	cin >> num1 >> num2;
	if (num2 > num1)
		temp = num2, num2 = num1, num1 = temp;
	for (int i = num1;; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			cout << "最大公约数是" << i << endl;
			break;
		}
	}
	for (int i = num2;; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			cout << "最小公倍数是" << i << endl;
			break;
		}
	}
	return 0;
}
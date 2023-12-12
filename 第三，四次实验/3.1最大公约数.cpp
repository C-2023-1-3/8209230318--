#include<iostream>
using namespace std;
int max(int& num1,int& num2)
{
	for (int i = num1;; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			return i;
			break;
		}
	}
}
int min(int& num1, int& num2)
{
	for (int i = num2;; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			return i;
			break;
		}
	}
}
int main()
{
	int a, b;
	cout << "请输入两个数值：";
	cin >> a >> b;
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	int c = max(a, b);
	int d = min(a, b);
	cout << "最小公倍数是："<<c<<'\n'<<"最大公约数是："<<d<<endl;
}


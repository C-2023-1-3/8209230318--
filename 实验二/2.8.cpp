#include<iostream>
using namespace std;
int main()
{
	double a, x, b;
	cout <<"请输入一个求根数字：";
	cin >> a ;
	x = a;
	if (a < 0)
		cout << "不可对负数求根" << endl;
	else if (a==0)
		cout<< "a的平方根为" << 0 << endl;
	else 
	{
		for (int i = 0;; i++)
		{	
			b =  (x + (a / x))/2;
			if (b - x < 1e-5 && b-x > -1e-5)
				break;
			else x = b;
		}
	}
	cout << "该数的平方根为：" << b << endl;
	return 0;
}
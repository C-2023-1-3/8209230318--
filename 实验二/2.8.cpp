#include<iostream>
using namespace std;
int main()
{
	double a, x, b;
	cout <<"������һ��������֣�";
	cin >> a ;
	x = a;
	if (a < 0)
		cout << "���ɶԸ������" << endl;
	else if (a==0)
		cout<< "a��ƽ����Ϊ" << 0 << endl;
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
	cout << "������ƽ����Ϊ��" << b << endl;
	return 0;
}
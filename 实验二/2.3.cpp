#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请分别输入三角形三边长：" ;
	cin >> a >> b >> c;
	if ((a + b <= c)||(b + c <= a)||(a + c <= b))
		cout << "这三个数无法组成三角形" << endl;
	else
	{
		cout << "三角形的周长为" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "这个三角形是等腰三角形" << endl;
		}
		else cout<< "这个三角形不是等腰三角形" << endl;
	}
	return 0;
}
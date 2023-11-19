#include<iostream>
using namespace std;
int main()
{
	double Pi = 3.1415926;
	double r, h;
	cout << "请输入圆锥的半径" << endl;
	cin >> r ;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	cout << "圆锥的体积为" << Pi * r * r * h / 3 << endl;
	return 0;
}
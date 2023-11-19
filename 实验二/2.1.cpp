#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈë£º";
	cin >> a;
	if ('a' <=a&&a <= 'z')
	{
		char b = int(a)-32;
		cout <<b<< endl;
	}
	else if(a>='A'&&a<='Z')
	{
		int b =(int)a;
		b += 1;
		cout << b<< endl;
	}
	return 0;
}
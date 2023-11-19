#include<iostream>
using namespace std;
int main()
{
	double sum=0, con, day=0;
	for (int i = 2; i <= 100; i *= 2)
	{
		con = i * 0.8;
		sum = sum + con;
		day++;
	}
	cout <<"每天平均花"<< (double)sum / day<<"元"<<endl;

	return 0;
}
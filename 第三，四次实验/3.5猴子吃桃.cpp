#include <iostream>
using namespace std;
int sum(int a)
{
	a = (a + 1) * 2;
	return a;
}
int main()
{
	int num = 1;
	for (int i = 1; i < 10; i++)
	{
		num=sum(num);
	}
	cout<<"第一天摘的桃子数量是："<<num << endl;
}
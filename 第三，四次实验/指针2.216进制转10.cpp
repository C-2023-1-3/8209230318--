#include <iostream>
#include<cstring>
using namespace std;

int parseHex(const char* const hexString)
{
	int a, sum = 0;
	a = strlen(hexString);
	int *list=new int [a];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i] = (static_cast<int>(hexString[i]) - 55) * (pow(16, a - 1 - i));
		else
			list[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		sum = sum + list[i];
	}
	return sum;
}
int main()
{
	int size = 999;
	char *a=new char[size];
	cout << "请输入一个十六进制数:";
	cin.getline(a, size);
	cout << "该16进制数的10进制为" << parseHex(a) << endl;
	delete []a;
	return 0;
}
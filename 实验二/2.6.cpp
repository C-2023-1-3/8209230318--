#include<iostream>
using namespace std;
int main()
{
	int num1, num2, temp;
	cout<< "����������Ҫ���м������ֵ:";
	cin >> num1 >> num2;
	if (num2 > num1)
		temp = num2, num2 = num1, num1 = temp;
	for (int i = num1;; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			cout << "���Լ����" << i << endl;
			break;
		}
	}
	for (int i = num2;; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			cout << "��С��������" << i << endl;
			break;
		}
	}
	return 0;
}
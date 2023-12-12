#include<iostream>
using namespace std;

int main()
{
	double list[10];
	cout << "请输入十个要排序的数字：";
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j+1] = temp;
				changed = true;
			}
		}
	} 
	while (changed); 
	cout << "排序后的值为：";
	for (int i = 0; i < 10; i++)
	{	
		cout << list[i]<<" ";
	}
	cout << endl;
	return 0;
}
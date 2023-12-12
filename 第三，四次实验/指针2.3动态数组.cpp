#include <iostream>
using namespace std;
void line( int size, int list[])
{
	for (int i = 0; i < (size- 1); i++)
	{
		for (int j = 0; j < (size - 1); j++)
		{
			int temp;
			if (list[j] > list[j + 1])
			{
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
			}
			if (list[j] <= list[j + 1])
			{
			}
		}
	}
}
int main()
{
	int size;
	cout << "input size:";
	cin >> size;
	cout << "input list ";
	int* list = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> list[i];
	}
	
	cout << "¶¯Ì¬µ÷ÊÔ:" << endl;
	int a;
	cin >> a;
	cout << "list[" << a << "]= " << *(list + a - 1) << endl;
	line(size, list);
	for (int i = 0; i < size; i++)
	{
		cout << *(list+i) << " ";
	}
}
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int j = 0; j < size1; j++)
		list3[j] = list1[j];
	for (int k = 0; k < size2; k++)
		list3[size1 + k] = list2[k];
	for (int i = 0; i < (size1 + size2 - 1); i++)
	{
		for (int j = 0; j < (size1 + size2 - 1); j++)
		{
			int temp;
			if (list3[j] > list3[j + 1])
			{
				temp = list3[j + 1];
				list3[j + 1] = list3[j];
				list3[j] = temp;
			}
			if (list3[j] <= list3[j + 1])
			{
			}
		}
	}
}
int main()
{
	int size1, size2, size3;

	cout << "请分别输入两个数组元素个数，和由小到大排序号的数组元素" << endl;
	cout << "Enter size1:";
	cin >> size1;
	cout << "Enter list1:";
	int* list1 = new int[size1+1];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];

	cout << "Enter size2:";
	cin >> size2;
	cout << "Enter list2:";
	int* list2 = new int[size2+1];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;

	int* list3 = new int[size3+1];
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	for (int i = 0; i < size1 + size2; i++)
		cout << list3[i]<<" ";
	delete[]list1;
	delete[]list2;
	delete[]list3;

	return 0;
}


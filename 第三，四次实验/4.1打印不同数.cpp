	#include<iostream>
	using namespace std;
	int main()
	{
		cout << "Enter ten numbers:";
		int m[10];
		for (int i = 0; i < 10; i++)
			cin >> m[i];
		cout <<"The distinct numbers are:" << m[0] << " ";
		for (int i = 1; i < 10; i++)
		{
			for (int k = i-1;k>=0; k--)
			{
				if (m[i] != m[k])
				{
					if (k == 0)
					{
						cout << m[i] << " ";
					}
				}
				else break;
			}
		}
		return 0;
	}
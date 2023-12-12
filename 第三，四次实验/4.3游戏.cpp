#include<iostream>
using namespace std;
int main()
{
	bool m[100];
	for (int i = 0; i < 100; i++)
	{
		m[i] = false;
	}
	for (int i = 0; i < 100; i++)	
	{
		for (int j = 1; j <= 100; j++)	
		{
			if ((i+1)%j==0)
				{
					if (m[i])
						m[i] = false;
					else m[i] = true;
				}
		}
	}
	cout << "开着的柜子的编号是：";
	for (int i = 0; i < 100; i++)
	{
		if (m[i])
			cout  << i + 1 << " " ;
	}
	return 0;
}
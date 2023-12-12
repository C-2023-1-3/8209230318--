#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = num-1; i >= 2; i--)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	
	int k = 0;
	for (int i = 2;; i++)
	{
		if (is_prime(i))
		{
			cout << i <<'\t';
			k++;
				if (k % 10 == 0)
				{
					cout << '\n';
				}
				while (k == 200)
					goto ret;
		}
	}
	ret:return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]);
int main()
{
	int size1 = 999, size2 = 99;
	cout << "Enter the first string: ";
	char* s1 = new char[size1];
	char* s2 = new char[size2];
	cin.getline(s1, size1);
	cout << "Enter the second string: ";
	cin.getline(s2, size2);
	int a,b,index,j,k;
	a=strlen(s1);
	b=strlen(s2);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
	delete []s1;
	delete []s2;
	return 0;
}
int indexOf(const char s1[], const char s2[])
{
	int a, b, r, h=0;
	a = strlen(s1);
	b = strlen(s2);
	for (int i = 0; i < b ; i++)
	{
		int c = 0;
		for (int j = 0; j < a; j++)
		{
			if (s1[j] == s2[i + j])
			{
				c++;
			}
			if (c == a)
			{
				h = 1;
				r = i;
				goto re;
			}
			
		}
		re:if (h == 1)
		{
			goto ret;
		}
	}
ret:
	{
		if (h == 1)
		{
			return r ;
		}
		if (h == 0)
			return -1;
	}

}
#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int b = 0;
	const int num1 = 26;
	const int num2 = 999;
	for (int i = 0; i < num1; i++)
		counts[i] = 0;
	for (int i = 0; i < num2; i++)
	{
		counts[s[i] - 'a']++;
		counts[s[i] - 'A']++;
	}
	for (int i = 0; i < num1; i++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>(i + 'a') <<" "<< counts[i] << " times" << endl;
		}
	}
}

int main()
{
	int size = 999;
	int* counts = new int[26];
	cout << "Enter a string:";
	char *s = new char[size];
	cin.getline(s, size);
	count( s,counts);
	delete[]counts;
	delete[]s;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	char symbol;
	double num1, num2;
	cout << "���������ʽ:";
	cin >> num1 >> symbol >> num2;
	switch (symbol)
	{
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		break;
	case '/':
	{
		if (num2 == 0)
			cout << "0����������" << endl;
		else
			cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		break;
	}
	}
	if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/')
		cout << "����������顣" << endl;

	return 0;
}
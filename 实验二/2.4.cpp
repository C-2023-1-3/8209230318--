#include <iostream>
using namespace std;
int main()
{
	char symbol;
	double num1, num2;
	cout << "请输入计算式:";
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
			cout << "0不能做除数" << endl;
		else
			cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		break;
	}
	}
	if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/')
		cout << "输入错误，请检查。" << endl;

	return 0;
}
#include<iostream>
#include <iomanip> 
using namespace std;
int main()
{
	int degree;
	cout << "���뻪���¶�";
	cin >> degree;
	cout << "�����¶�Ϊ";
	cout <<fixed<< setprecision(2) <<(5 / 9.00 * (degree - 32)) + 0.5<< endl;
	return 0;
}
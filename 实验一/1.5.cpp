#include<iostream>
#include <iomanip> 
using namespace std;
int main()
{
	int degree;
	cout << "输入华氏温度";
	cin >> degree;
	cout << "摄氏温度为";
	cout <<fixed<< setprecision(2) <<(5 / 9.00 * (degree - 32)) + 0.5<< endl;
	return 0;
}
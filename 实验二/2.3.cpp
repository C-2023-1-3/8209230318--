#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "��ֱ��������������߳���" ;
	cin >> a >> b >> c;
	if ((a + b <= c)||(b + c <= a)||(a + c <= b))
		cout << "���������޷����������" << endl;
	else
	{
		cout << "�����ε��ܳ�Ϊ" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "����������ǵ���������" << endl;
		}
		else cout<< "��������β��ǵ���������" << endl;
	}
	return 0;
}
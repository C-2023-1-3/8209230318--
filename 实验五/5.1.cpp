#include<iostream>
using namespace std;
class Time             // ����Time��
{
	int hour;
	int minute;
	int sec;
	public:              // ���ݳ�ԱΪ���õ�
	Time(int h = 0, int m = 0, int s = 0)
	{
		hour = h, minute = m, sec = s;
	}
	void get()
	{
		cin >> hour >> minute >> sec;
	}
	void show()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.get();
	t1.show();
	return 0;
}
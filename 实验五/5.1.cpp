#include<iostream>
using namespace std;
class Time             // 定义Time类
{
	int hour;
	int minute;
	int sec;
	public:              // 数据成员为公用的
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
	Time t1;           //定义t1为Time类对象
	t1.get();
	t1.show();
	return 0;
}
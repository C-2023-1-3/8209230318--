/*设有一描述坐标点的类Point，其私有变量x和y代表一个点的(x,y)坐标值。
请编写程序实现以下功能：
利用构造函数传递参数，在定义对象时将x、y坐标值初始化为（60,80）；
利用公有成员函数void setPoint(int i, int j)将坐标值修改为(60+i,80+j)；
利用公有成员函数display()输出修改后的坐标值。
主函数中通过定义对象，验证各个函数。*/
#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point() :x(60), y(80)
	{}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "更改后的坐标值为(" << x << "," << y << ")";
	}
};
int main()
{
	int i, j;
	cout << "请分别输入i,j的值:";
	cin >> i >> j;
	Point p;
	p.setPoint(i, j);
	p.display();
	return 0;
}
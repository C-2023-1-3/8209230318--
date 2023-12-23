/*3、需要求3个长方柱的体积，请编一个基于对象的程序。数据成员包括length(长)、width(宽)、height(高)。
要求用成员函数实现以下功能：
(1)由键盘分别输入3个长方柱的长、宽、高；
(2)计算长方柱的体积；
3)输出3个长方柱的体积。*/
#include<iostream>
using namespace std;
class VT
{
private:
	double length;
	double width;
	double height;
public:
	void get()
	{
		cin >> length >> width >> height;
	}
	void cou()
	{
		cout << "请分别输入长方体的长宽高:";
	}
	void show()
	{
		cout <<"该长方体的体积为："<< length * width * height << endl;
	}
};
int main()
{
	for (int i = 0; i < 3; i++)
	{
		VT cy;
		cy.cou();
		cy.get();
		cy.show();
	}
	return 0;
}
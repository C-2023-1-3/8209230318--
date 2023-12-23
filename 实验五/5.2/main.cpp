//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	int num;
	char name[20];
	char sex;
	cout << "请分别输入编号、姓名和性别:";
	cin >> num;
	cin>>name;
	/*for (int i = 0; i < 20; i++)
	{
		cin >> name[i];
		if (cin.get() == '\n') break;
	}*/
	cin >> sex;
	Student stud;                //定义对象
	stud.set_value(num, name, sex);
	stud.display();              //执行stud对象的display函数
	return 0;
}
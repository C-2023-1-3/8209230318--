//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
using namespace std;
int main()
{
	int num;
	char name[20];
	char sex;
	cout << "��ֱ������š��������Ա�:";
	cin >> num;
	cin>>name;
	/*for (int i = 0; i < 20; i++)
	{
		cin >> name[i];
		if (cin.get() == '\n') break;
	}*/
	cin >> sex;
	Student stud;                //�������
	stud.set_value(num, name, sex);
	stud.display();              //ִ��stud�����display����
	return 0;
}
//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;

void Student:: set_value(int Num, char Name[20], char Sex)
	{
		num = Num;
		for (int i = 0; i < 20; i++)
		{
			name[i] = Name[i];
		}
		sex = Sex;
	}
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" <<num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
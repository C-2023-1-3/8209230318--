/*3����Ҫ��3������������������һ�����ڶ���ĳ������ݳ�Ա����length(��)��width(��)��height(��)��
Ҫ���ó�Ա����ʵ�����¹��ܣ�
(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
(2)���㳤�����������
3)���3���������������*/
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
		cout << "��ֱ����볤����ĳ����:";
	}
	void show()
	{
		cout <<"�ó���������Ϊ��"<< length * width * height << endl;
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
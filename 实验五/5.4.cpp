/*����һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ�����
����һ������max����ָ������ָ��������������
��max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�*/
#include<iostream>
using namespace std;
class stu
{
private:
	int num_;
	int score_;
public:
	stu(int num, int score)
	{
		num_ = num;
		score_ = score;
	}
	stu max(stu s)
	{
		if (s.score_ < score_)
			return *this;
		else return s;
	}
	void show()
	{
		cout << "��߳ɼ�������" << num_ << "��" << endl;
	}
};
int main()
{
	stu s1[5] = { stu(1, 89),stu(2, 85), stu(3,67), stu(4, 78), stu(5, 87) };
	stu s = s1[0].max(s1[1]).max(s1[2]).max(s1[3]).max(s1[4]);
	s.show();
}


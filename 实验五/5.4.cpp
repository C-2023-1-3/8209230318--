/*建立一个对象数组，内放5个学生的（学号，成绩），
设立一个函数max，用指向对象的指针作函数参数，
在max函数中找出5个学生的最高成绩者，并输出其学号。*/
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
		cout << "最高成绩的人是" << num_ << "号" << endl;
	}
};
int main()
{
	stu s1[5] = { stu(1, 89),stu(2, 85), stu(3,67), stu(4, 78), stu(5, 87) };
	stu s = s1[0].max(s1[1]).max(s1[2]).max(s1[3]).max(s1[4]);
	s.show();
}


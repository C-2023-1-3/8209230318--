#include <iostream>
using namespace std;
int main()
{
    int letter = 0, space = 0, digit = 0, others = 0;
    cout << "请输入计数的文本：";
    char c  ;
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            letter++;
        }
        else if (c >= '0' && c <= '9')
        {
            digit++;
        }
        else if (c == ' ')
        {
            space++;
        }
        else
        {
            others++;
        }
    }
    cout << "字母数：" << letter <<'\t' 
        << "数字数：" << digit << '\t' 
        << "空格数：" << space << '\t' 
        << "其它字符数：" << others;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int letter = 0, space = 0, digit = 0, others = 0;
    cout << "������������ı���";
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
    cout << "��ĸ����" << letter <<'\t' 
        << "��������" << digit << '\t' 
        << "�ո�����" << space << '\t' 
        << "�����ַ�����" << others;
    return 0;
}

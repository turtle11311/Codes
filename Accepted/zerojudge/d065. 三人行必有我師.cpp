#include <iostream>
using namespace std;

int main() {
    int a, b, c, t;
    cin >> a >> b >> c;        //��J�D��
    t = a;                     //�����]�Ѯv�� a �D
    if (b>t)                   //�p�G b ���D�Ƥ�Ѯv�h
    t=b;                       //�Ѯv���D�Ƨ令 b �D
    if (c>t)                   //�p�G c ���D�Ƥ�Ѯv�h
    t=c;                       //�Ѯv���D�Ƨ令 c �D
    cout << t;                 //��X�Ѯv���D��
}
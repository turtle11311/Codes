#include <iostream>
using namespace std;

int main() {
    int a, b, c, t;
    cin >> a >> b >> c;        //块肈计
    t = a;                     //安砞ρ畍秆 a 肈
    if (b>t)                   //狦 b 肈计ゑρ畍
    t=b;                       //ρ畍肈计эΘ b 肈
    if (c>t)                   //狦 c 肈计ゑρ畍
    t=c;                       //ρ畍肈计эΘ c 肈
    cout << t;                 //块ρ畍肈计
}
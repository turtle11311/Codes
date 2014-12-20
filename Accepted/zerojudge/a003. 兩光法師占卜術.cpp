#include <iostream>
#include <string>
using namespace std;
int main () {
    string S[]={"´¶³q","¦N","¤j¦N"};
    int M, D;
    while (cin >> M >> D)
        cout << S[(M*2+D)%3] << endl;
}

#include <cstdio>
using namespace std;

int main () {
    int i, j, n, d[22];
    long long form[10001]={1};
    for(i=1;i<=21;i++)
        d[i]=i*i*i;
    for(i=1;i<=21;i++)
        for(j=d[i];j<=10000;j++)
        form[j]+=form[j-d[i]];
    while (scanf("%d", &n)!=EOF)
        printf("%lld\n", form[n]);
}

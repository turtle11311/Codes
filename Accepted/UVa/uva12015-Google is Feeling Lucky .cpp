#include <iostream>
#include <string>
using namespace std;

int main () {
	string address[10],tag;
	unsigned int n, i, maxn, cs=1;
	unsigned int v[10];
	cin >> n;
	while(n--) {
		for (i=0;i<10;i++)
			cin >> address[i] >> v[i];
		cout << "Case #" << cs++ <<":\n";
		for (i=0,maxn=0;i<10;i++) {
			if (maxn<=v[i]) {
				if (maxn<v[i])
					tag="",maxn=v[i];
				tag+=i+'0';}
		}
		for (i=0;i<tag.size();i++)
			cout << address[(tag[i]-'0')] << endl;
	}
}

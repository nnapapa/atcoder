//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;
	cin >> k;
	cin >> s;

	if (s.size()> k) {
		for(i=0;i<k;i++) cout << s[i];
		cout << "..." << endl;
	} else {
		cout << s << endl;
	}

	return 0;
}

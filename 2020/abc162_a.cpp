//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y;
	string	s;
	string	ans = "No";

	cin >> s;

	for(i=0;i<3;i++) {
		if (s[i] =='7') ans = "Yes";
	}

	cout << ans << endl;
	return 0;
}

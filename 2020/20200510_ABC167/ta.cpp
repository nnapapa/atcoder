//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s,t,u;

	cin >> s >> t;
	u = "Yes";
	for(i=0;i<s.size();i++) {
		if (s[i]!=t[i]) u = "No"; 
	}

	cout << u << endl;
	return 0;
}

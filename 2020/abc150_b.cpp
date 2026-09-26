//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,i,j,k,t,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> s;

	for(i=0;i<n-2;i++) {
		if (s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') ans++;
	}
    cout << ans << endl;
	return 0;
}

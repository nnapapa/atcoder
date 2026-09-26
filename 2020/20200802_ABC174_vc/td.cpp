//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y,r,w;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	r = w = 0;
	for(i=0;i<n;i++) {
		if (s[i]=='R') r++;
		else w++;
	}
	if (r==n || w==n) {
		ans = 0;
	} else {
		i = 0;
		j = n-1;
		while(1) {
			while(s[i]=='R'&&i<n-1) i++;
			while(s[j]=='W'&&j>0) j--;
			if (i>j) break;
			ans++;
			swap(s[i],s[j]);
		}
	}
	cout << ans << endl;
	return 0;
}

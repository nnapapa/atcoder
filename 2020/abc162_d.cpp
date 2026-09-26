//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		r,g,b,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> s;
	r = g = b = 0;
	vector<int> R(n),G(n),B(n);
	for(i=0;i<n;i++) {
		if (s[i] == 'R') R[r++] = i;
		if (s[i] == 'G') G[g++] = i;
		if (s[i] == 'B') B[b++] = i;
 	}
	ans = r*g*b;

	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			if ((j-i) % 2 == 1) continue;
			k = (i+j)/2;
			if ( (s[i]!=s[j]) && (s[i]!=s[k]) && (s[j]!=s[k]) ) ans--;
		}
	}
	cout << ans << endl;

}

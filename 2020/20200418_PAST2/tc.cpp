#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;

	cin >> n;
	vector<string>	s(n);
	for(i=0;i<n;i++) cin >> s[i];
	m = 2*n - 1;

	for(i=n-2;i>=0;i--) {
		for(j=1;j<m-1;j++) {
			if (s[i][j] != '#') continue;
			if ((s[i+1][j-1]=='X')||(s[i+1][j]=='X')||(s[i+1][j+1]=='X')) s[i][j] = 'X';
		}
	}

	for(i=0;i<n;i++) {
		cout << s[i] << endl;
	}
}

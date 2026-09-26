#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	vector<string>	s(n);
	for(i=0;i<n;i++) cin >> s[i];
	vector<vector<ll>>	ch(n , vector<ll>(26,0));
	for(i=0;i<n;i++) {
		for(j=0;j<s[i].size();j++) {
			ch[i][s[i][j]-'a']++;
		}
	}
	for(j=0;j<26;j++) {
		char aa = 'a';
		a = INFL;
		for(i=0;i<n;i++) {
			a = min(a,ch[i][j]);
		}
		for(k=0;k<a;k++) cout << (char)(aa+j);
	}
	cout << endl;
	return 0;
}

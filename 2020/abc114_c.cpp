#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll		n,ans;

void chk(string s) {
	int ret = 0;
	for(int i=0;i<s.size();i++) {
		if (s[i]=='7') ret |= 4;
		if (s[i]=='5') ret |= 2;
		if (s[i]=='3') ret |= 1;
	}
	int a = 0;
	for(int i=0;i<s.size();i++) a = a*10 + s[i]-'0';
	if ((ret==7)&&(a<=n)) ans++;
}
void calc(string s) {
	if (s.size()==10) return;
	chk(s);
	calc(s+"7");
	calc(s+"5");
	calc(s+"3");
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,x,y,z;

	string	s;
	cin >> s;
	n = 0;
	for(i=0;i<s.size();i++) n = n*10 + s[i]-'0';

	ans = 0;
	calc("");

	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
END:
	cout << ans << endl;
	return 0;
}

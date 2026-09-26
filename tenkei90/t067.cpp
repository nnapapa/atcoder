#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	char	a;
	string	s,t;
	cin >> s >> k;
	for(x=0;x<k;x++) {
		ans = 0;
		for(i=0;i<s.size();i++) {
			ans = ans * 8;
			ans += s[i] - '0';
		}
		if (ans) t = "";
		else t = "0";
		while(ans>0) {
			a = '0' + (ans % 9);
			if (a=='8') a = '5';
			t.push_back(a);
			ans /= 9;
		}
		reverse(t.begin(),t.end());
		s = t;
	}
	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

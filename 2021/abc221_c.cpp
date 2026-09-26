#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	n = s.size();
	for(i=1;i<(1<<n);i++) {
		a = b = 0;
		for(j=0;j<n;j++)
			if ((1<<j)&i) a = a*10 + s[j]-'0';
			else b = b*10 + s[j]-'0';
		//cout << a << " " << b << " " << a*b << endl;
		ans = max(ans , a * b);  
	}

	cout << ans << endl;
	return 0;
}

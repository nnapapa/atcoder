#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s,t,u;
	cin >> s;
	bool f = false;
	a = 0;
	b = 0;
	while(s[a]=='a') a++;
	for(i=s.size()-1;i>=a;i--) {
		if (s[i]!='a') f = true;
		if (!f) b++;
		if (f) t += s[i];
	}
	for(i=0;i<a-b;i++) t+= 'a';
	for(i=t.size()-1;i>=0;i--) u+=t[i];
	
	//cout << t << endl;
	//cout << u << endl;
	//cout << a << " " << b << endl;
	if (t==u) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

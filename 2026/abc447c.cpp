#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s,t;
	cin >> s >> t;
	a = 0;
	x = 0;
	for(i=0,j=0;i<s.size();i++) {
		//printf("x i j ans:%d %d %d %d\n",x,i,j,ans);
		if (s[i]=='A') a++;
		else {
			b = 0;
			while(j<t.size()) {
				if (t[j]=='A') b++;
				else if (t[j]==s[i]) {
					x += abs(a-b);
					a = b = 0;
					j++;
					break;
				} else {
					ans = -1;
					j++;
					break;
				}
				j++;
				if (j==t.size()) ans = -1;
			}
		}
		//printf("x:i j ans:%d %d %d %d\n",x,i,j,ans);

	}
	b = 0;
	while(j<t.size()) {
		if (t[j]=='A') b++;
		else ans = -1;
		j++;
	}
	x += abs(a-b);
	
	if (ans==0) ans = x;
	cout << ans << endl;
	return 0;
}

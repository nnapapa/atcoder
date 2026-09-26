#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
string	s , ans;
ll	k,n;
map<string , ll> moji;
void calc(string t , ll index) {
	if (t.size()==n) {
		//cout << "dbg:" << t << endl;
		moji[t] = 1;
		return;
	}
	for(int i=0;i<n;i++) {
		if ((index & (1<<i))==0) calc(t+s[i] , index | (1<<i));
	}
}
int main() {
	ll		a,b,c,d,h,i,j,l,m,t,q,r,v,w,x,y,z;
	cin >> s >> k;
	n = s.size();
	sort(s.begin(),s.end());
	calc("",0);
	i = 1;
	for(auto p:moji) {
		if (i==k) {
			ans = p.first;
			break;
		}
		else i++;
	}

	cout << ans << endl;
	return 0;
}

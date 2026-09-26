#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = -1;
	string	ns, s = "0999999999";
	cin >> m;
	vector<ll>	U(m),V(m);
	for(i=0;i<m;i++) cin >> U[i] >> V[i];
	for(i=1;i<=8;i++) {
		cin >> a;
		s[a] = '0' + i;
	}
	map<string,int> mp;
	mp[s] = 0;
	
	queue<string> que;
	que.push(s);
	
	while(que.size()) {
		s = que.front(); que.pop();
		//cout << ":" << s << endl;
		for(i=1;i<=9;i++) {
			if (s[i]=='9') {
				for(j=0;j<m;j++) {
					a = 0;
					if (U[j]==i) a = V[j];
					if (V[j]==i) a = U[j];
					if (a) {
						ns = s;
						swap(ns[i], ns[a]);
						if (mp.count(ns)==0) {
							mp[ns] = mp[s]+1;
							que.push(ns);
						}
					}
				}
				break;
			}
		}
		if (s=="0123456789") { ans = mp[s]; break; }
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	//vector<vector<vector<ll>>>	dp3(x , vector<vector<ll>>(y, vector<ll>(z,INFL)));
	cout << ans << endl;
	return 0;
}

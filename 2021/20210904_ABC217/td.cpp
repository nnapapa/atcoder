#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,f,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> l >> q;
	vector<ll>	AA;
	set<ll> A;
	A.insert(0);
	A.insert(l);
	for(i=0;i<q;i++) {
		cin >> c >> x;
		if (c==1) A.insert(x);
		else {	//c==2
			auto it = A.lower_bound(x);
			AA.push_back(*it - *(--it));
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	for(i=0;i<AA.size();i++) cout << AA[i] << endl;
	
	return 0;
}

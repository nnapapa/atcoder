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
	cin >> q;
	vector<ll>	A,AA;
	map<ll,ll> mp;
	a = 0;
	for(i=0;i<q;i++) {
		cin >> n;
		if (n==1) {
			cin >> x;
			A.push_back(x);
		}
		if (n==2) {
			if (mp.size()==0) ans = A[a++];
			else {
				for(auto p : mp) {
					ans = p.first;
					c = p.second;
					break;
				}
				if (c==1) mp.erase(ans);
				else mp[ans]--;
			}
			AA.push_back(ans);
		}
		if (n==3) {
			for(;a<A.size();a++) {
				mp[A[a]]++;
			}
		}
	}

	for(i=0;i<AA.size();i++) cout << AA[i] << endl;
	return 0;
}

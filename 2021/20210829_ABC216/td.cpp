#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
set<ll> chk;
map<ll,ll> ap;
vector<vector<ll>>	A(200001);
vector<ll> p(200001,0);
void chkdel(ll index) {
	if (p[index]==A[index].size()) return;
	ll a = A[index][p[index]++];
	if (chk.count(a)) {
		chk.erase(a);
		chkdel(ap[a]);
		chkdel(index);
	} else {
		chk.insert(a);
		ap[a] = index;
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s = "Yes";
	cin >> n >> m;

	for(i=0;i<m;i++) {
		cin >> k;
		for(j=0;j<k;j++) {
			cin >> a;
			A[i].push_back(a);
		}
	}

	for(i=0;i<m;i++) {
		chkdel(i);
	}
	
	for(i=0;i<m;i++) if (p[i]<A[i].size()) s = "No";


	cout << s << endl;
	return 0;
}


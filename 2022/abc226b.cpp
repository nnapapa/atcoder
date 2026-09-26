#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	string	s;
	cin >> n;
	map<vector<ll>,ll> mp;

	for(i=0;i<n;i++) {
		cin >> l;
		vector<ll> A(l);
		//printf("%d %llx\n",i,A);
		for(j=0;j<l;j++) {
			cin >> A[j];
		}
		mp[A] = 1;
	}

	cout << mp.size() << endl;
	/*
	for(auto p : mp) {
		for(i=0;i<p.first.size();i++) {
			cout << p.first[i] << " ";
		}
		cout << endl;
	}
	*/
	return 0;
}

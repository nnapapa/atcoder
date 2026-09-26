#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),B(n);
	//ll	B[100001];
	map<ll,ll>	mp;
	for(i=0;i<n;i++) {
		cin >> A[i];
		mp[A[i]]++;
	}
	a = 0;
	for(auto p : mp) {
		if (p.second > 1) {
			B[a++] = p.second;
		}
		//cout << p.first << " " << p.second << endl;
	}
	sort(B.begin() , B.begin()+a);
	//reverse(B.begin() , B.begin()+a);
	//for(i=0;i<a;i++) cout << B[i] << " " << endl;

	for(i=0;i<a-1;i++) {
		if (B[i]>1) {
			B[i+1] -= B[i]-1;
		}
	}
	ans = mp.size();
	if (a>0) if ((B[a-1]&1)==0) {
		ans--;
	}

	cout << ans << endl;
	return 0;
}

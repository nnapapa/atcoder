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
	cin >> n >> m >> k;
	vector<ll>	H(n), B(m);
	for(i=0;i<n;i++) cin >> H[i];
	for(i=0;i<m;i++) cin >> B[i];
	sort(H.begin(), H.end());
	//reverse(H.begin(), H.end());
	sort(B.begin(), B.end());
	//reverse(B.begin(), B.end());
	for(i=0,j=0;i<n;i++) {
		while(1) {
			if (j==m) break;
			if (H[i]<=B[j]) {
				ans++;
				j++;
				break;
			}  else {
				j++;
			}
		}
		if  (j==m) break;
	}
	if (ans>=k) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}

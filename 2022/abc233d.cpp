#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	vector<ll>	sum(n+1,0),sum1;
	for(i=1;i<=n;i++) sum[i] = sum[i-1] + A[i-1];
	for(i=0;i<=n;i++) cout << sum[i] << " "; cout << endl;
	for(i=0;i<n;i++) {
		x = sum[i];
		if (x==k) ans++;
		p = i+2;
		sum1.resize(0);
		for(j=p;j<=n;j++) sum1.push_back(sum[j]-x);
		sort(sum1.begin(), sum1.end());
		cout << p<< " " << x << ":";
		for(x=0;x<sum1.size();x++) cout << sum1[x] << " "; cout << endl;
		if (binary_search(sum1.begin(), sum1.end(), k)) {
			auto it1 = lower_bound(sum1.begin(), sum1.end(), k);
			auto it2 = upper_bound(sum1.begin(), sum1.end(), k);
			ans += (int)(it2 - it1);
			cout << "ans=" << ans << endl;
		}
	}
	cout << ans << endl;
	return 0;
}

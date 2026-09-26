#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<ll>	x(m),sa(m-1);
	for(i=0;i<m;i++) cin >> x[i];
	sort(x.begin(),x.end());
	for(i=1;i<m;i++) sa[i-1] = x[i] - x[i-1];
	sort(sa.begin(),sa.end());
	for(i=0;i<m-n;i++) ans+=sa[i]; 
	cout << ans << endl;
	return 0;
}

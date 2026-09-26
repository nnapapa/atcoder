#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

/* MAXPまでの素数列挙 prime_listが素数のリスト */
vector<ll> plist;
void construct_plist(ll maxp) {
  vector<bool> pf(maxp,false);
  for(int i=2;i<maxp;i++) {
    if(pf[i]) continue;
    plist.push_back(i);
    for(int j=i;j<maxp;j+=i) pf[j]=true;
  }
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	a = 1000001;
	construct_plist(min(n+1,a));
	j = plist.size()-1;
	//for(i=0;i<plist.size();i++) cout << plist[i] << " ";
	//cout << endl;
	for(i=0;i<plist.size();i++) {
		if (i>=j) break;
		while(1) {
			if (i>=j) break;
			double pq3 = (double)plist[i]*plist[j]*plist[j]*plist[j];
			if (pq3 > 1000000000000000001) k = 1000000000000000001;
			else k = plist[i]*plist[j]*plist[j]*plist[j];
			if (k<=n) {
				ans += j - i;
				break;
			} else {
				j--;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

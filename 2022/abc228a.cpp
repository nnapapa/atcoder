#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,s,j,k,l,m,n,t,q,r,v,w,x,y,z;
	string		ans = "No";
	
	cin >> s >> t >> x;
	if ( (s<t) && (s<=x) && (x<t) ) ans = "Yes";
	if ( (s>t) && ((s<=x)||(x<t)) ) ans = "Yes";
	cout << ans << endl;
	return 0;
}

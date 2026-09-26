#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s = "No";
	//cin >> n;
	vector<ll>	aa(4);
	cin >> aa[0] >> aa[1] >> aa[2] >> aa[3];
	for(i=1;i<0xf;i++) {
		a = b = 0;
		if ((i&1) == 0) a += aa[0];
		else b+= aa[0];
		if ((i&2) == 0) a += aa[1];
		else b+= aa[1];
		if ((i&4) == 0) a += aa[2];
		else b+= aa[2];
		if ((i&8) == 0) a += aa[3];
		else b+= aa[3];
		if (a == b) s = "Yes";
	}
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

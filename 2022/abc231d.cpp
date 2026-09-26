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
	string	s = "Yes";
	cin >> n >> m;
	vector<ll>	A(m),B(m),NB(n+1,0);
	for(i=0;i<m;i++) cin >> A[i] >> B[i];
	for(i=0;i<m;i++) {
		if (NB[A[i]]==2) s = "No";
		else NB[A[i]]++;
		if (NB[B[i]]==2) s = "No";
		else NB[B[i]]++;
	}
	a = b = 0;
	for(i=1;i<=n;i++) {
		if (NB[i]==2) a++;
		else if (NB[i]==1) b++;
		else s = "No";
	}
	if (a!=n-2 || b!=2) s = "No";
	cout << s << endl;
	return 0;
}

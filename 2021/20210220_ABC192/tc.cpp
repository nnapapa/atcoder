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
	cin >> n >> k;
	int	A[10];
	
	for(c=1;c<=k;c++) {
		i = 0;
		while(n>0) {A[i++]=n%10; n = n/10;}
		sort(A,A+i);
		ll g1 = 0, g2 = 0;
		for(j=0;j<i;j++) g2 = g2*10 + A[j];
		reverse(A,A+i);
		for(j=0;j<i;j++) g1 = g1*10 + A[j];
		n = g1 - g2;

	}
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << n << endl;
	return 0;
}

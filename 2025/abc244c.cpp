#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(2*n+2,0);
	a = 1;
	while(1) {
		cout << a << endl;
		A[a] = 1;
		cin >> b;
		if (b==0) break;
		A[b] = 1;
		while(A[a]) a++;
	}
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	//vector<vector<vector<ll>>>	dp3(x , vector<vector<ll>>(y, vector<ll>(z,INFL)));
	return 0;
}

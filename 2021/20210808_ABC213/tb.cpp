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
	vector<pair<ll,ll>>	A(n);
	for(i=0;i<n;i++) {
		cin >> A[i].first;
		A[i].second = i + 1;
	}
	sort(A.begin(),A.end());

	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << A[n-2].second << endl;
	return 0;
}

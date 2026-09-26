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
	vector<tuple<ll,ll,ll>>	AB(n+1);
	z = 0;
	for(i=0;i<n;i++) {
		cin >> a >> b;
		AB[i] = make_tuple(2*a+b,a,a+b);
		z += a;
	}
	AB[n] = make_tuple(-1,-1,-1);
	sort(AB.begin(),AB.begin()+n);
	reverse(AB.begin(),AB.begin()+n);
	/*for(i=0;i<n-1;i++) {
		j = i+1;
		while (AB[i].first==AB[j].first) j++;
		if (j>i+1) {
			reverse(AB.begin()+i,AB.begin()+j);
			i = j-1;
		}
	}*/
	for(i=0;i<n;i++) {
		tie(a,b,c) = AB[i];
		z   -= b;
		ans += c;
		if (ans>z) break;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << i+1 << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> a >> b;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	if (b<10) {
		a = a*10 + b;
	} else if (b<100) {
		a = a*100 + b;
	} else {
		a = a*1000 + b;
	}
	i = 1;
	while(1) {
		if (i*i == a) {
			cout << "Yes" << endl;
			return 0;
		}
		if (i*i > a) break;
		i++;
	}
	cout << "No" << endl;
	return 0;
}

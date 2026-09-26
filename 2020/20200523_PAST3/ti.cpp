//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	cin >> n;

	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			cout << " ";
			cout << n*(i-1)+j-1;
		}
		cout << endl;
	} 
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y));

	
	return 0;
}

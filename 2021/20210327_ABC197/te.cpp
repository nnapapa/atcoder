#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	vector<pair<ll,ll>>	CX(n),CX2(n);
	vector<vector<ll>> dp(n,vector<ll>(2));
	for(i=0;i<n;i++) cin >> CX[i].second >> CX[i].first;
	sort(CX.begin(),CX.end());
	CX2[0].first = CX2[0].second = CX[0].second;
	b = CX[0].first;
	for(i=1,x=0;i<n;i++) {
		if (b != CX[i].first) {
			b = CX[i].first;
			x++;
			CX2[x].first = CX2[x].second = CX[i].second;
		} else {
			CX2[x].second = CX[i].second;
		}
	}
	/*
	for(i=0;i<n;i++) {
		cout << "CX:" << CX[i].first << " " << CX[i].second << endl;
	}
	for(i=0;i<=x;i++) {
		cout << "CX2:" << CX2[i].first << " " << CX2[i].second << endl;
	}
	*/
	dp[0][0] = abs(CX2[0].second) + abs(CX2[0].second - CX2[0].first); //大→小
	dp[0][1] = abs(CX2[0].first) + abs(CX2[0].second - CX2[0].first);  //小→大
	for(i=1;i<=x;i++) {
		//大→小
		dp[i][0] = dp[i-1][0] + abs(CX2[i].second - CX2[i-1].first) + abs(CX2[i].second - CX2[i].first); 
		dp[i][0] = min(dp[i][0] , 
		           dp[i-1][1] + abs(CX2[i].second - CX2[i-1].second) + abs(CX2[i].second - CX2[i].first) );
		//小→大
		dp[i][1] = dp[i-1][0] + abs(CX2[i].first - CX2[i-1].first) + abs(CX2[i].second - CX2[i].first); 
		dp[i][1] = min(dp[i][1] , 
		           dp[i-1][1] + abs(CX2[i].first - CX2[i-1].second) + abs(CX2[i].second - CX2[i].first) );
	}
	/*
	for(i=0;i<=x;i++) {
		cout << "dp[][]:" << dp[i][0] << " " << dp[i][1] << endl;
	}
	*/
	ans = dp[x][0] + abs(CX2[x].first);
	ans = min( ans , dp[x][1] + abs(CX2[x].second) );
	cout << ans << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	int		r,g,b,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n;
	vector<int> dp(n+1,INF);
	dp[0] = 0;
	vector<int> a = {1,6,6*6,6*6*6,6*6*6*6,6*6*6*6*6,6*6*6*6*6*6,9,9*9,9*9*9
					,9*9*9*9,9*9*9*9*9};
	//for(i=0;i<12;i++) cout << a[i] << endl;
	for(i=0;i<n;i++) {
		for(j=0;j<12;j++) {
			k = i+a[j];
			if (n<k) continue;
			dp[k] = min(dp[k], dp[i]+1); 
		}
	}
	cout << dp[n] << endl;

}

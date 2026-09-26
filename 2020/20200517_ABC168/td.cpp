//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> m;
	vector<vector<ll>>	ab(n+1);
	vector<ll> dp(n+1,INFL);
	queue<ll> q;

	for(i=0;i<m;i++) {
		cin >> a >> b;
		ab[a].push_back(b);
		ab[b].push_back(a);
	}

	dp[1] = 0;
	q.push(1);
	
	while(!q.empty()) {
		x = q.front();
		q.pop();
		for(i=0;i<ab[x].size();i++) {
			if (dp[ab[x][i]] == INFL) {
				dp[ab[x][i]] = dp[x] + 1;
				q.push(ab[x][i]);
			}
		}
	}
	cout << "Yes" << endl;
	for(i=2;i<=n;i++) {
		for(j=0;j<ab[i].size();j++) {
			if (dp[i] == dp[ab[i][j]] + 1) {
				cout << ab[i][j] << endl;
				break;
			}
		}
	}

	return 0;
}

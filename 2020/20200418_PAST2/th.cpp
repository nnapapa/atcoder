//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int N , M;
vector<vector<char>> maze(51 , vector<char>(51));
vector<vector<ll>> dp(51 , vector<ll>(51 , -1));

ll mazex(int sx , int sy) {
	if (maze[sx][sy] == 10) return 0;
	if (dp[sx][sy] != -1) return dp[sx][sy];
	ll ans = INF;
	for(int i=0;i<N;i++) for(int j=0;j<M;j++) {
		if (sx==i && sy==j) continue;
		if (maze[i][j] == maze[sx][sy]+1) {
			ans = min(ans , abs(sx - i) + abs(sy - j) + mazex(i , j) );
			
		}
	}
	dp[sx][sy] = ans;
	return ans;
}

int main() {
	ll		a,b,i,j,k,x,y,ans = 0;
	string	str;
	char	c,chk[10] = {0};
	int		sx , sy , gx , gy;

	cin >> N >> M;
	for(x=0;x<N;x++) for(y=0;y<M;y++)  {
		cin >> c;
		if (c=='S') {
			maze[x][y] = 0;
			sx = x;
			sy = y;
		} else if (c=='G') {
			maze[x][y] = 10;
			gx = x;
			gy = y;
		} else {
			maze[x][y] = c - '0';
			chk[c-'0'] = 1;
		}

	}
	for(i=1;i<=9;i++) {
		if (chk[i]==0) {
			cout << -1 << endl;
			return 0;
		}
	}

	ans = mazex(sx , sy);


	cout << ans << endl;

}

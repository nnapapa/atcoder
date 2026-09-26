//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;

	cin >> n;
	vector<vector<int>> cnt(10,vector<int>(10));
	for(i=1;i<=n;i++) {
		x = i%10;
		y = i;
		while(y>=10) y /= 10;
		cnt[x][y]++;
	}
	for(i=1;i<=9;i++) {
		for(j=1;j<=9;j++) {
			ans += cnt[i][j]*cnt[j][i];
		}
	}
	cout << ans << endl;
	return 0;
}

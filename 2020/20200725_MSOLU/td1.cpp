//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL
ll	n;
ll	ans;
vector<ll>	aa(100);
vector<vector<ll>>	kb(100 , vector<ll>(1000000));
void calc(ll	day , ll	kabu) {
	//printf("day=%d yen=%d kabu=%d\n", day,yen,kabu);
	if (day > n) {
		return;
	}
	ll y = kb[day-1][kabu];
	ll k = kabu;
	while(y >= aa[day]) {
		y -= aa[day];
		k++;
		if (kb[day][k] < y) {
			kb[day][k] = y;
			calc(day+1 , k);
		}
	}
	y = kb[day-1][kabu];
	k = kabu;
	while(k > 0) {
		y += aa[day];
		k--;
		if (kb[day][k] < y) {
			kb[day][k] = y;
			calc(day+1 , k);
		}
	}
	if (kb[day][kabu] < kb[day-1][kabu]) {
		kb[day][kabu] = kb[day-1][kabu];
		calc(day+1 , kabu);
	}

}
int main() {
	ll		a,b,c,h,i,j,k,l,m,x,y;
	ans = 1000;
	cin >> n;
	for(i=1;i<=n;i++) cin >> aa[i];
	kb[0][0] = 1000;
	calc(1,0);
	for(i=0;i<1000000;i++) {
		ans = max( ans , kb[n][i]);
	}
	cout << ans << endl;
	return 0;
}

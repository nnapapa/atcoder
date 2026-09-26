//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL
ll	n;
ll	ans;
vector<ll>	aa(100);
void calc(ll	day , ll	yen , ll	kabu) {
	//printf("day=%d yen=%d kabu=%d\n", day,yen,kabu);
	if (day > n) {
		ans = max(ans , yen);
		//printf("yen=%d ans=%d\n",yen,ans);
		return;
	}
	ll y = yen;
	ll k = kabu;
	if (y >= aa[day]) {
		while(y >= aa[day]) {
			y -= aa[day];
			k++;
		}
		calc(day+1 , y+aa[day] , k-1);
	}
	y = yen;
	k = kabu;
	if (k > 0) {
		while(k > 0) {
			y += aa[day];
			k--;
		}
		calc(day+1 , y-aa[day] , k+1); 
	}
	calc(day+1 , yen , kabu);

}
int main() {
	ll		a,b,c,h,i,j,k,l,m,x,y;
	ans = 1000;
	cin >> n;
	for(i=1;i<=n;i++) cin >> aa[i];

	calc(1,1000,0);
	cout << ans << endl;
	return 0;
}

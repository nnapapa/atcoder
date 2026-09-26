//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	long long		a,b,c,h,i,j,k,l,m,n,x,y;
	long long		ans = 1;
	double aa,aans=1.0;
	string	s;
	cin >> n;
	//vector<ll>	aa(n);
	bool flag = true , zero = false;
	for(i=0;i<n;i++) {
		cin >> a;
		if (ans != 0) {
			c = 1000000000000000000ull / ans;
			if (c < a) flag = false;
		}
		ans *=a;
		aa = a;
		//aans *= aa;
		//if (aans > 1000000000000000000.0) flag = false;
		//if (ans > 1000000000000000000ull) flag = false;
		if (a == 0) {
			zero = true;
		}	
	}
	
	if (flag == false && zero == false) ans = -1;
	
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

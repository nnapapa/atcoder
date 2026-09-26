//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

void calc(ll n, int a, int b, int c, int d) {
	vector<int> dp()

}
int main() {
	ll		t,a,b,c,d,i,j,k,n,m,x,y,ans = 0;
	string	s;
	cin >> t;
	vector<vector<ll>> abcd(t, vector<ll>(5));

	for(i=0;i<t;i++) {
		cin >> abcd[i][0] >> abcd[i][1] >> abcd[i][2] >> abcd[i][3] >> abcd[i][4];
	}

	for(i=0;i<t;i++) {
		calc(abcd[i][0] , abcd[i][1] , abcd[i][2] , abcd[i][3] , abcd[i][4]);
	}

	return 0;
}

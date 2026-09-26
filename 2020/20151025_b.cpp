//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> m;
	
	map<int , int> a;

	for(i=0;i<n;i++) {
		cin >> j;
		a[j]++;
	}
	x = 0;
	for(auto p : a) {
		if (p.second > x) {
			x = p.second;
			ans = p.first;
		} 
	}
	if (x > n / 2) {
		cout << ans << endl;
	} else {
		cout << '?' << endl;
	}
}

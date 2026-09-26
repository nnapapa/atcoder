//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> a >> b >> c >> d;
	
	while(1) {
		c = c - b;
		if (c<=0) {
			cout << "Yes" << endl;
			return 0;
		}
		a = a - d;
		if (a<=0) {
			cout << "No" << endl;
			return 0;
		}
	}


}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> k >> a >> b;
	ll K = k;
	while(K<a) {
		K += k; 
	}
	if (K<=b) {
		cout << "OK" << endl;
	} else {
		cout << "NG" << endl;

	}

}

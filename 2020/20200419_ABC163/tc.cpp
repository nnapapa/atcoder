//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	cin >> n;
	vector<int> a(n+1);
	for(i=1;i<n;i++) {
		cin >> j;
		a[j]++;
	}

	for(i=1;i<=n;i++) {
		cout << a[i] << endl;
	}


}

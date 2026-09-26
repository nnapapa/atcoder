//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;

	cin >> n;
	string	s;
	map<string, int> kei;

	for (i=0;i<n;i++) {
		cin >> s;
		kei[s] = 1;
	}

	cout << kei.size() << endl;

}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	map<string,ll>	name;
	for(i=0;i<n;i++) {
		cin >> s;
		if (name.count(s)==0) {
			name[s] = 1;
			cout << i+1 << endl;
		}
	}

	return 0;
}

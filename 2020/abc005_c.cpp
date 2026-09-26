//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,i,j,k,t,n,m,x,y;
	string	ans = "yes";
	string	s;

	cin >> t >> n;

	vector<int> a(n);
	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	cin >> m;
	vector<int> b(m);
	for(i=0;i<m;i++) {
		cin >> b[i];
	}

	int bi,ai=-1;

	for(bi=0;bi<m;bi++) {
        while(1) {
            ai++;
            if (ai>=n) break;
            if ((a[ai]<=b[bi])&&(a[ai]+t>=b[bi])) break;
        }
	}

    if (ai>=n) ans = "no";
    cout << ans << endl;
	return 0;
}

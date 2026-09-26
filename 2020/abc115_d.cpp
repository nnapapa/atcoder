//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y,f,p;
	ll		ans = 0;
	string	s;
	cin >> n >> x;

	ll		nf,np,nb;
	while(x>0) {
		f = p = 1;
		b = 0;

		bool flag = true;
		for(i=2;i<=n;i++) {
			nf = f*2 + 3;
			np = p*2 + 1;
			nb = b*2 + 2;
			if (nf>x) {
				flag = false;
				break;
			}
			f = nf;
			p = np;
			b = nb;
		}

		ans += p;
		if (flag) break;
		x = x - f;
		
	}

	cout << ans << endl;
	return 0;
}

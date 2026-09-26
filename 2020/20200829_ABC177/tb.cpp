//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = INF;
	string	s , t;
	cin >> s >> t;
	
	a = s.size();
	b = t.size();

	for(i=0;i<=a-b;i++) {
		x = 0;
		for(j=0;j<b;j++) {
			if (s[i+j]!=t[j]) x++;
		}
		//printf("x:%d\n",x);
		ans = min(ans,x);
	}

	cout << ans << endl;
	return 0;
}

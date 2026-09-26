//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,h,i,j,k,m,n,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	l(n),ll(3);
	for(i=0;i<n;i++) cin >> l[i];
	for(i=0;i<n-2;i++) {
		for(j=i+1;j<n-1;j++) {
			for(k=j+1;k<n;k++) {
				a=ll[0]=l[i];
				b=ll[1]=l[j];
				c=ll[2]=l[k];
				sort(ll.begin(),ll.end());
				if (a==b||b==c||a==c) continue;
				if (ll[2]<ll[0]+ll[1]) ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

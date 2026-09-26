#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	for(i=j=k=0;i<s.size();i++) {
		if (s[i]=='A') {
			j = max(j,i+1);
			while(j<s.size()) {
				if (s[j++]=='B') {
					k = max(k,j);
					while(k<s.size()) {
						if (s[k++]=='C') {
							ans++;
							//printf("i j k:%d %d %d\n",i,j,k);
							break;
						}
					}
					break;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,h,i,j,k,l,m,n,x,y,z;
	char	s[2001] , ans[2001] = {0};
	scanf("%[^\n]%*c",s);
	bool f = true;
	a = 0;
	for(i=0;i<strlen(s);i++) {
		if (s[i]==' ') {
			if (f) {
				ans[a++] = ',';
				f = false;
			}
		} else {
			f = true;
			ans[a++] = s[i];
		}
	}
	cout << ans << endl;
	return 0;
}

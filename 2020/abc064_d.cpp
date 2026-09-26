#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	vector<char>	a(201);
	for(i=0;i<n;i++) a[i] = s[i];
	while(1) {
		c = 0;
		bool f = true;
		for(i=0;i<n;i++) {
			if (a[i]=='(' ) c++;
			else c--;
			if (c<0) {
				for(j=n-1;j>=0;j--) a[j+1] = a[j];
				a[0] = '(';
				n++;
				f = false;
				break;
			}
		}
		if (f) {
			while(c>0) {
				a[n++] = ')';
				c--;
			}
			break;
		}

	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	for(i=0;i<n;i++) cout << a[i];
	cout << endl;
	return 0;
}

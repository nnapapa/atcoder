#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,z;
	ll		ans = 0;
	string	s = "No";
	cin >> n;
	vector<ll>	x(n),y(n);
	for(i=0;i<n;i++) {
		cin >> a >> b;
		x[i] += a+1000;
		y[i] += b+1000;
	}

	for(i=0;i<n-2;i++) {
		for(j=i+1;j<n-1;j++) {
			for(k=j+1;k<n;k++) {
				ll ax = x[i]; ll ay = y[i];
				ll bx = x[j]; ll by = y[j];
				ll cx = x[k]; ll cy = y[k];

				ll xx = bx - ax;
			 	ll yy = by - ay;

				if ( (cy-ay)*xx == yy*(cx-ax) ) {
					s = "Yes";
				}
			}
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

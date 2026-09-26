#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		h,a,b,c,i,j,k,n,m,x,y;
	float			ans , maxx = 0.0;
	
	cin >> n >> k;
	vector<long long> p(n),sum(n+1);
	sum[0] = 0;
	for(i=0;i<n;i++) {
		cin >> p[i];
		sum[i+1] = sum[i] + p[i];
	}
	
	for(i=0;i<=n-k;i++) {
		ans = sum[i+k] - sum[i];
		ans = (ans + k) / 2;
		maxx = max(maxx , ans);
	}
	printf("%f\n",maxx);


}

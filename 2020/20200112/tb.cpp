#include <bits/stdc++.h>
using namespace std;

int main() {
	int		b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n >> k >> m;

	
	vector<int>	a(n);

	for(i=0;i<n-1;i++) {
		cin >> a[i];
		ans += a[i];
	}
	
	if (m*n > ans) {
		ans = m*n - ans;
		if (ans > k) ans = -1;
	} else {
		ans = 0;
	}
	

	cout << ans << endl;

}

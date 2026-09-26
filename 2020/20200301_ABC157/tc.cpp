#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		s,a,b,c,i,j,k,n,m,x[3],y,ans = 0;
	string	str;
	
	cin >> n >> m;
	
	x[0] = x[1] = x[2] = -1;
	
	for(i=0;i<m;i++) {
		cin >> s >> c;
		s--;
		if (ans == -1) continue;
		if (x[s] == -1) {
			x[s] = c;
		} else if (x[s] != c) {
			ans = -1;
		}
	}
	

	if ((n != 1) && (x[0] == 0)) ans = -1;
	
	if (ans != -1) {
		if ((n != 1) && (x[0] == -1)) x[0] = 1;
		for(i=0;i<n;i++) {
			if (x[i] == -1) x[i] = 0;
			ans = ans * 10;
			ans = ans + x[i];
			//cout << x[i] << " ";
		}
	}

	cout << ans << endl;


}

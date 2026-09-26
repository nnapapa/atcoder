#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		a,b,c,i,j,k,n,m,y,ans = -1;
	string	str;
	
	cin >> n;
	
	vector<int>	x(n);
	for(i=0;i<n;i++) cin >> x[i];
	
	int pp;
	for(int p=1;p<=100;p++) {
		j = 0;
		for(i=0;i<n;i++) {
			j += (x[i]-p)*(x[i]-p);
		}
		if (ans == -1) {
			ans = j;
			pp = p;
		}
		if (ans > j) {
			ans = j;
			pp = p;
		}
	}
	
	cout << ans << endl;


}

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n >> k;
	
	vector<int> h(n);
	
	for(i=0;i<n;i++) {
		cin >> h[i];
	}
	
	sort(h.begin(), h.end());
	reverse(h.begin(), h.end());
	
	for(i=k;i<n;i++) {
		ans += h[i];
	}
	cout << ans << endl;


}

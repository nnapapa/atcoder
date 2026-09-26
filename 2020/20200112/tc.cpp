#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a,b,c,p,i,j,k,n,m,x,y,pena = 0,ans = 0;
	string	str;
	
	cin >> n >> m;
	
	vector<int>  t(n+1); 
	vector<char> tt(n+1);

	for(i=0;i<m;i++) {
		cin >> p;
		cin >> str;
		if (tt[p] == 'A') continue;
		if (str[0] == 'A') {
			tt[p] = 'A';
			ans++;
		} else {
			t[p]++;
		}
	}
	
	for(i=1;i<=n;i++) {
		if (tt[i] == 'A') pena += t[i];
	}
		

	cout << ans << ' ' << pena << endl;

}

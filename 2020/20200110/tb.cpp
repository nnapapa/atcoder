#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;
	
	cin >> n;
	cin >> s;
	
	for(i=0;i < n-2 ; i++) {
		if ((s[i] == 'A') && (s[i+1] == 'B') && (s[i+2] == 'C')) {
			ans++;
		}
	}
	
	cout << ans << endl;
}

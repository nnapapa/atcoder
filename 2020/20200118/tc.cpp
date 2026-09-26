#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a,b,c,i,j,k,n,s,m,x,y,ans = 0;
	string	str;
	
	cin >> n >> k >> s;
	
	if (s < 1000000000) {
		for(i=0;i<k;i++) {
			cout << s << ' ';
		}
		for(i=k;i<n;i++) {
			cout << s+1 << ' ';
		}
		cout << endl;
	} else {
		for(i=0;i<k;i++) {
			cout << s << ' ';
		}
		for(i=k;i<n;i++) {
			cout << 1 << ' ';
		}
		cout << endl;
	}


}

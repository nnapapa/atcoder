#include <bits/stdc++.h>
using namespace std;

char t[100001];
char tt[100001];

int main() {
	int		a,b,c,i,j,k,n,m,x,y,r,s,p;
	long long	ans = 0;

	
	cin >> n;
	cin >> k;
	cin >> r;
	cin >> s;
	cin >> p;
	scanf("%s", t);
	

	for(i=0;i<n;i++) {
		if (i>=k) {
			if (t[i] == 'r') {
				if (tt[i-k] == 'p') { tt[i] = 'P'; continue; }
				else { ans += p; tt[i] = 'p'; continue; }
			}
			if (t[i] == 's') {
				if (tt[i-k] == 'r') { tt[i] = 'R'; continue; }
				else { ans += r; tt[i] = 'r'; continue; }
			}
			if (t[i] == 'p') {
				if (tt[i-k] == 's') { tt[i] = 'S'; continue; }
				else { ans += s; tt[i] = 's'; continue; }
			}
		} else {
			if (t[i] == 'r') { ans += p; tt[i] = 'p'; }
			if (t[i] == 's') { ans += r; tt[i] = 'r'; }
			if (t[i] == 'p') { ans += s; tt[i] = 's'; }
		}
		//cout << ans << endl;
	}
	
	cout << ans << endl;

}

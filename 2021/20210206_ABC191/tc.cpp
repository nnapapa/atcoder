#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> h >> w;
	vector<string>	S(h);
	for(i=0;i<h;i++) cin >> S[i];
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) if (S[i][j]=='#') break;
		if (j!=w) break;
	}
	ll sy = i;
	ll sx = j;
	a = 1;
	b = 0;
	ans = 1;
	while(1) {
		//cout << i << ' ' << j << ' ' << a << ' ' << b << endl;
		if (sy==i&&sx==j&&a==0&&b==3) break;
		if (a==1) {
			if (b==0) {
				if (S[i-1][j+1]=='#') { ans++; a=0; b=3; i--; j++; continue;}
				if (S[i][j+1]=='#') {j++; continue;}
				ans++; a=2; b=1; continue;
			}
			if (b==1) {
				if (S[i][j+1]=='#') {ans++; b=0; j++; continue;}
				a=2; continue;
			}
			if (b==2) {
				if (S[i-1][j-1]=='#') {ans++; a=1; b=3; i--;j--; continue;}
				if (S[i][j-1]=='#') { a=0; j--; continue;}
				ans++; a=3; b=1; continue;
			}
			if (b==3) {
				if (S[i-1][j-1]=='#') {ans++; a=3; b=2; i--;j--; continue;}
				if (S[i-1][j]=='#') {a=0; i--; continue;}
				ans++; a=1; b=0; continue;
			}
		}
		if (a==2) {
			if (b==0) {
				if (S[i+1][j+1]=='#') {ans++; a=3;b=1;i++;j++; continue;}
				if (S[i][j+1]=='#') {a=2;j++; continue;}
				ans++; a=1;b=3; continue;
			}
			if (b==1) {
				if (S[i+1][j+1]=='#') {ans++; a=1; b=0; i++;j++;continue;}
				if (S[i+1][j]=='#') {i++;continue;}
				ans++; a=3; b=2; continue;
			}
			if (b==2) {
				if (S[i+1][j]=='#') {ans++; a=2; b=1; i++; continue;}
				a=3; continue;
			}
			if (b==3) {
				if (S[i-1][j-1]=='#') {ans++; a=2; b=0; i--;j--;continue;}
				a=1; continue;
			}
		}
		if (a==3) {
			if (b==0) {
				if (S[i+1][j]=='#') {ans++; a=3; b=1; i++;continue;}
				a=2;continue;
			}
			if (b==1) {
				if (S[i+1][j-1]=='#') {ans++; a=0;b=2;i++;j--;continue;}
				if (S[i+1][j]=='#') {a=3;i++;continue;}
				ans++;a=2;b=0;continue;
			}
			if (b==2) {
				if (S[i+1][j-1]=='#') {ans++; a=2;b=1;i++;j--;continue;}
				if (S[i][j-1]=='#') {a=3;j--;continue;}
				ans++;a=0;b=3;continue;
			}
			if (b==3) {
				if (S[i][j-1]=='#') {ans++;a=3;b=2;j--;continue;}
				a=0;continue;
			}
		}
		if (a==0) {
			if (b==0) {
				if (S[i-1][j]=='#') {ans++;a=0;b=3;i--;continue;}
				a=1;continue;
			}
			if (b==1) {
				if (S[i][j-1]=='#') {ans++;a=0;b=2;j--;continue;}
				a=3;continue;
			}
			if (b==2) {
				if (S[i-1][j-1]=='#') {ans++;a=1;b=3;i--;j--;continue;}
				if (S[i][j-1]=='#') {a=0;j--;continue;}
				ans++;a=3;b=1;continue;
			}
			if (b==3) {
				if (S[i-1][j-1]=='#') {ans++;a=3;b=2;i--;j--;continue;}
				if (S[i-1][j]=='#') {a=0;i--;continue;}
				ans++;a=1;b=0;continue;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

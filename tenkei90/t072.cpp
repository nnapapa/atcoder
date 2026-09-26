#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll		ans = 0;
ll		si , sj , h , w;
vector<vector<char>>	C(20 , vector<char>(20,'#'));

void calc(ll i , ll j , ll cnt) {
	if (i==si && j==sj) {
		ans = max(ans , cnt);
		return;
	} 
	C[i][j] = '#';
	if (C[i-1][j]=='.') calc(i-1,j,cnt+1);
	if (C[i+1][j]=='.') calc(i+1,j,cnt+1);
	if (C[i][j-1]=='.') calc(i,j-1,cnt+1);
	if (C[i][j+1]=='.') calc(i,j+1,cnt+1);
	C[i][j] = '.';
}
void start(ll i , ll j) {
	si = i; sj = j;
	if (C[i-1][j]=='.') calc(i-1,j,1);
	if (C[i+1][j]=='.') calc(i+1,j,1);
	if (C[i][j-1]=='.') calc(i,j-1,1);
	if (C[i][j+1]=='.') calc(i,j+1,1);
}

int main() {
	ll		a,b,c,d,i,j,k,l,m,n,v,x,y,z;
	string s;
	cin >> h >> w;

	for(i=1;i<=h;i++) {
		cin >> s;
		for(j=0;j<w;j++) C[i][j+1] = s[j];
	}
	for(i=1;i<=h;i++) for(j=1;j<=h;j++) {
		if (C[i][j]=='#') continue;
		a = 0;
		if (C[i-1][j]=='.') a++;
		if (C[i+1][j]=='.') a++;
		if (C[i][j-1]=='.') a++;
		if (C[i][j+1]=='.') a++;
		if (a>=2) start(i,j);
	}
	if (ans<=2) ans = -1;
	cout << ans << endl;
	return 0;
}

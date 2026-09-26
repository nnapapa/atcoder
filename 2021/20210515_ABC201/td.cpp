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
	vector<string> A(h);
	for(i=0;i<h;i++) cin >> A[i];
	vector<vector<ll>> tak(h+1,vector<ll>(w+1,0)),aok(h+1,vector<ll>(w+1,0));;

	for(i=h;i>0;i--) {
		bool f = false;
		if ((i+w)%2==0) f = true;		//tak
		for(j=w;j>0;j--) {
			if (i==h && j==w) {f=!f; continue;}
			if (f) {
				if ((i!=h&&j!=w&&(tak[i+1][j]-aok[i+1][j]>tak[i][j+1]-aok[i][j+1]))||j==w) {
					if (A[i][j-1]=='+') a = 1; else a = -1;
					tak[i][j] = tak[i+1][j] + a;
					aok[i][j] = aok[i+1][j];
				} else {
					if (A[i-1][j]=='+') b = 1; else b = -1;
					tak[i][j] = tak[i][j+1] + b;
					aok[i][j] = aok[i][j+1];
				}
			} else {
				if ((i!=h&&j!=w&&(aok[i+1][j]-tak[i+1][j]>aok[i][j+1]-tak[i][j+1]))||j==w) {
					if (A[i][j-1]=='+') a = 1; else a = -1;
					aok[i][j] = aok[i+1][j] + a;
					tak[i][j] = tak[i+1][j];
				} else {
					if (A[i-1][j]=='+') b = 1; else b = -1;
					aok[i][j] = aok[i][j+1] + b;
					tak[i][j] = tak[i][j+1];
				}
			}
			f = !f;
		}
	}

	if (tak[1][1]==aok[1][1]) cout << "Draw" << endl;
	if (tak[1][1]< aok[1][1]) cout << "Aoki" << endl;
	if (tak[1][1]> aok[1][1]) cout << "Takahashi" << endl;
	/*
	for(i=1;i<=h;i++) {
		for(j=1;j<=w;j++) cout << tak[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for(i=1;i<=h;i++) {
		for(j=1;j<=w;j++) cout << aok[i][j] << " ";
		cout << endl;
	}*/
	return 0;
}

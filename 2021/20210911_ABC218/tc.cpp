#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s = "No";
	cin >> n;
	bool tt;
	vector<string>	S(n),T(n),U(n*2),V(n*2),W(n);
	for(i=0;i<n;i++) cin >> S[i];
	for(i=0;i<n;i++) cin >> T[i];
	for(i=0;i<n*2;i++) V[0] += '.';
	for(i=1;i<n*2;i++) V[i] = V[0];
	for(i=0;i<n*2;i++) for(j=0;j<n*2;j++) {
		for(k=0;k<n*2;k++) U[k] = V[k]; // clear
		for(x=max(0LL,i-n);x<=i;x++) for(y=max(0LL,j-n);y<=j;y++) {
			if (x+n-1-i<0 || y+n-1-j<0) U[x][y] = '.';
			else U[x][y] = T[x+n-1-i][y+n-1-j];
		}
		tt = true;
		for(x=0;x<n;x++) for(y=0;y<n;y++) if (S[x][y] != U[x][y]) tt = false;
		if (tt) s = "Yes";
		//if (tt) {printf("Y %d %d %d\n",1,i,j); for(z=0;z<n;z++) cout << U[z] << endl;}
	}
	//90度回転
	W = T;
	for(i=0;i<n;i++) for(j=0;j<n;j++) T[j][n-1-i] = W[i][j];
	//for(z=0;z<n;z++) cout << " " << T[z] << endl;
	for(i=0;i<n*2;i++) for(j=0;j<n*2;j++) {
		for(k=0;k<n*2;k++) U[k] = V[k]; // clear
		for(x=max(0LL,i-n);x<=i;x++) for(y=max(0LL,j-n);y<=j;y++) {
			if (x+n-1-i<0 || y+n-1-j<0) U[x][y] = '.';
			else U[x][y] = T[x+n-1-i][y+n-1-j];
		}
		tt = true;
		for(x=0;x<n;x++) for(y=0;y<n;y++) if (S[x][y] != U[x][y]) tt = false;
		if (tt) s = "Yes";
		//if (tt) {printf("Y %d %d %d\n",1,i,j); for(z=0;z<n;z++) cout << U[z] << endl;}
	}
	//90度回転
	W = T;
	for(i=0;i<n;i++) for(j=0;j<n;j++) T[j][n-1-i] = W[i][j];
	//for(z=0;z<n;z++) cout << " " << T[z] << endl;
	for(i=0;i<n*2;i++) for(j=0;j<n*2;j++) {
		for(k=0;k<n*2;k++) U[k] = V[k]; // clear
		for(x=max(0LL,i-n);x<=i;x++) for(y=max(0LL,j-n);y<=j;y++) {
			if (x+n-1-i<0 || y+n-1-j<0) U[x][y] = '.';
			else U[x][y] = T[x+n-1-i][y+n-1-j];
		}
		tt = true;
		for(x=0;x<n;x++) for(y=0;y<n;y++) if (S[x][y] != U[x][y]) tt = false;
		if (tt) s = "Yes";
		//if (tt) {printf("Y %d %d %d\n",1,i,j); for(z=0;z<n;z++) cout << U[z] << endl;}
	}
	//90度回転
	W = T;
	for(i=0;i<n;i++) for(j=0;j<n;j++) T[j][n-1-i] = W[i][j];
	//for(z=0;z<n;z++) cout << " " << T[z] << endl;
	for(i=0;i<n*2;i++) for(j=0;j<n*2;j++) {
		for(k=0;k<n*2;k++) U[k] = V[k]; // clear
		for(x=max(0LL,i-n);x<=i;x++) for(y=max(0LL,j-n);y<=j;y++) {
			if (x+n-1-i<0 || y+n-1-j<0) U[x][y] = '.';
			else U[x][y] = T[x+n-1-i][y+n-1-j];
		}
		tt = true;
		for(x=0;x<n;x++) for(y=0;y<n;y++) if (S[x][y] != U[x][y]) tt = false;
		if (tt) s = "Yes";
		//if (tt) {printf("Y %d %d %d\n",1,i,j); for(z=0;z<n;z++) cout << U[z] << endl;}
	}
	
	cout << s << endl;
	return 0;
}

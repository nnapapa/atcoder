#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
string s = "                    ";
ll	n;
void calc(int sz,int nst) {
	//cout << "calc: " << s << " " << sz << " " << nst << endl;
	if (sz==n) {
		for(int i=0;i<n;i++) cout << s[i];
		cout << endl;
		return;
	}
	if (nst<n/2 && nst<n-sz) {
		s[sz] = '(';
		calc(sz+1,nst+1);
	}
	if (nst>0) {
		s[sz] = ')';
		calc(sz+1,nst-1);
	}
	return;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	if (n&1) return 0;

	calc(0,0);

	return 0;
}

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
	string	s;
	
	a=b=c=d=0;
	for(i=0;i<4;i++) {
		cin >> s;
		if (s=="H") a++;
		if (s=="2B") b++;
		if (s=="3B") c++;
		if (s=="HR") d++; 
	}
	if (a==1 && b==1 && c==1 && d==1) s = "Yes";
	else s = "No";
	cout << s << endl;
	return 0;
}

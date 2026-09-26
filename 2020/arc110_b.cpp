#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s,t,pre,aft;
	cin >> n >> t;
	if (n==1) {
		if (t[0]=='1') cout << 20000000000 << endl;
		else cout << 10000000000 << endl;
		return 0;
	}
	if (n==2) {
		if (t=="00") cout << 0 << endl;
		else if ((t=="10")||(t=="11")) cout << 10000000000 << endl;
		else cout << 999999999 << endl;
		return 0;
	}
	/*
	if (n==3) {
		if (t=="110") cout << 10000000000 << endl;
		else if ((t=="000")||(t=="111")||(t=="100")||(t=="010")||(t=="001")) cout << 0 << endl;
		else cout << 999999999 << endl;
		return 0;
	}
	*/
	a = 0;
	c = 0;
	for(i=0;i<n-2;i++) {
		if (a<=1&&t[i]=='1'&&t[i+1]=='1'&&t[i+2]=='0') {
			a = 1;
			i += 2;
			c++;
		} else if (a==1) a = 2;
		if (a==0) pre += t[i];
		if (a==2) aft += t[i];
	}
	for(;i<n;i++) aft += t[i];
	//cout << c << endl;
	//cout << pre << endl;
	//cout << aft << endl;
	if (pre!=""&&pre!="0"&&pre!="10") {
		cout << 0 << endl;
		return 0;
	}
	if (aft!=""&&aft!="1"&&aft!="11") {
		cout << 0 << endl;
		return 0;
	}

	if (pre.size()) c++;
	d = 0;
	if (aft.size()==0) d = 1;

	ans = 10000000000 + d - c;
	cout << ans << endl;
	return 0;
}

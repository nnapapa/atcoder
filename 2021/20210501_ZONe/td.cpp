#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	n = s.size();
	vector<char> t(n*2,' '),u(n),v(n);
	a = n-1;
	b = n;
	bool f = true;
	z = 0;
	for(i=0;i<n;i++) {
		if (s[i]=='R') {
			f = !f;
			z++;
		} else if (f) t[b++] = s[i];
		else t[a--] = s[i];
	};
	if (f) {
		for(i=a+1,j=0;i<b;i++,j++) u[j] = t[i]; 
	} else {
		for(i=b-1,j=0;i>a;i--,j++) u[j] = t[i];
	}
	if (n-z==0) {
		cout << endl;
		return 0;
	}
	v[0] = u[0];
	for(i=1,j=0;i<n-z;i++) {
		//cout << v[j] << " " << u[i] << endl;
		if (v[j]==u[i]) j--;
		else v[++j] = u[i];
		//for(k=0;k<j;k++) cout << u[k];
		//cout << ":" << j << ":" << i << endl;
	}
	/*
	for(i=0;i<n*2;i++) cout << t[i];
	cout << endl;
	for(i=0;i<n;i++) cout << u[i];
	cout << endl;
	*/
	for(i=0;i<=j;i++) cout << v[i];
	cout << endl;
	return 0;
}

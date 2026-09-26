#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

vector<int> calc(int n) {
	vector<int> a,b;
	//cout << "calc " << n << endl;
	if (n==1) {
		a.push_back(1);
		return(a);
	}
	b = calc(n-1);
	a = b;
	a.push_back(n);
	for(int i=0;i<b.size();i++) a.push_back(b[i]);
	return(a);
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<int> A;
	A = calc(n);
	for(i=0;i<A.size();i++) {
		cout << A[i] << endl;
	}
	return 0;
}

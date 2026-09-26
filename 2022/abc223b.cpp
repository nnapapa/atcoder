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
	string	s;
	cin >> s;
	n = s.size();
	vector<string>	A(n);
	for(i=0;i<n;i++) A[i] = s;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			A[j][(i+j)%n] = s[i];
		}
	}
	sort(A.begin(),A.end());
	cout << A[0] << endl;
	cout << A[n-1] << endl;
	return 0;
}

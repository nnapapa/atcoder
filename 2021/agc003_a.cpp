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
	cin >> s;
	vector<ll> A(4,0);
	for(i=0;i<s.size();i++) {
		if (s[i]=='N') A[0]++;
		if (s[i]=='W') A[1]++;
		if (s[i]=='S') A[2]++;
		if (s[i]=='E') A[3]++; 
	}
	s = "No";
	if (A[0]>0 && A[1]>0 && A[2]>0 && A[3]>0) s = "Yes";
	if (A[0]>0 && A[1]==0 && A[2]>0 && A[3]==0) s = "Yes";
	if (A[0]==0 && A[1]>0 && A[2]==0 && A[3]>0) s = "Yes";

	cout << s << endl;
	return 0;
}

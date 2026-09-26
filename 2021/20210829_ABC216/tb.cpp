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
	vector<string>	S(n),T(n);
	for(i=0;i<n;i++) cin >> S[i] >> T[i];
	for(i=0;i<n-1;i++) for(j=i+1;j<n;j++) {
		if (S[i]==S[j] && T[i]==T[j]) s = "Yes";
	}

	cout << s << endl;
	return 0;
}

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
	cin >> n >> k;
	vector<ll>	A(n) , B(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	for(i=0;i<n;i++) ans += abs(A[i]-B[i]);
	if (ans==k) cout << "Yes" << endl;
	else if (ans<k && (k-ans)%2==0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

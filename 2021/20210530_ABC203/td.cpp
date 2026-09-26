#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> k;

	vector<vector<ll>>	AA(n , vector<ll>(n));
	vector<ll> A(n*n),S(k*k);
	for(i=0,z=0;i<n;i++) for(j=0;j<n;j++) { cin >> AA[i][j]; A[z++] = AA[i][j]; }
	/*sort(A.begin() , A.end());
	ll mx = A[n*n - ((k*k)/2+1)];
	ll mn = A[(k*k)/2+1];
	cout << "mn:mx " << mn << ":" << mx << endl;
	*/
	for(i=0;i<n-k+1;i++) {
		for(j=0;j<n-k+1;j++) {
			//if (AA[i][j]>=mn && AA[i][j]<=mx) {
				for(x=0,z=0;x<k;x++) for(y=0;y<k;y++) S[z++] = AA[i+x][j+y];
				sort(S.begin() , S.end());
				reverse(S.begin() , S.end());
				//cout << S[(k*k)/2] << endl;
				ans = min(ans , S[(k*k)/2]);
			//}
		}
	}

	cout << ans << endl;
	return 0;
}

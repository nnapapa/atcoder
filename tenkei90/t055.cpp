#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		p,q,a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> p >> q;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) A[i] %= p;
	for(i=0;i<n-4;i++)
		for(j=i+1;j<n-3;j++)
			for(k=j+1;k<n-2;k++)
				for(l=k+1;l<n-1;l++)
					for(m=l+1;m<n;m++) {
						a = A[i]*A[j]%p;
						a = a*A[k]%p;
						a = a*A[l]%p;
						a = a*A[m]%p;
						//printf("%d %d %d %d %d : %d\n",i,j,k,l,m,a);
						if (a==q) ans++;
					}
		
	cout << ans << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

long long gcd(long long m, long long n) {
	long long temp;
	if (n > m) swap(m , n);
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}
vector<ll> divisor(ll n) {
	vector<ll> ret;
	for(ll i=1;i*i<=n;i++) {
		if (n%i==0) {
			ret.push_back(i);
			if (i*i!=n) ret.push_back(n/i);
		}
	}
	//sort(ret.begin(),ret.end());
	return ret;
}
int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	
	cin >> n;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	ans = gcd(aa[0],aa[1]);
	for(i=2;i<n;i++) ans = gcd(ans , aa[i]);
	if (ans > 1) {
		cout << "not coprime" << endl;
		return 0;
	}
	vector<ll> an(1000001);
	bool f = false;
	for(i=0;i<n;i++) {
		for(j=1;j*j<=aa[i];j++) {
			if (aa[i]%j==0) {
				an[j]++;
				if (j!=1 && an[j]>1) {
					cout << "setwise coprime" << endl;
					return 0;
				}
				if (j*j!=aa[i]) {
					an[aa[i]/j]++;
					if ( (aa[i]/j!=1) && (an[aa[i]/j]>1) ) {
						cout << "setwise coprime" << endl;
						return 0;
					}
				}
			}
		}
	}

	cout << "pairwise coprime" << endl;

	return 0;
}

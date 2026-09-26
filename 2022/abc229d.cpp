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
	cin >> s >> k;
	n = s.size();
	vector<ll>	A(n,0);
	queue<ll> mp;
	c = 0;
	for(i=0;i<n;i++) {
		if (s[i]=='X') A[i] = 1;
	}
	a = l = 0;
	for(i=0;i<n;i++) {
		b = -1;
		if (A[i]) {
			l++;
			ans = max(ans , l);
		} else {
			if (mp.size()<k) {
				l++;
				ans = max(ans , l);
				mp.push(i);
				A[i] = 1;
			} else {
				mp.push(i);
				A[i] = 1;
				b = mp.front();
				mp.pop();
				A[b] = 0;
				if (a<=b) {
					a = b+1;
					l = i-a+1;
				}

			}
		}

		//for(j=0;j<n;j++) cout << A[j] << " ";  cout << "  " << i << " " << a << " " << b << " "<< l << " " << ans << endl;
		
	}


	cout << ans << endl;
	return 0;
}

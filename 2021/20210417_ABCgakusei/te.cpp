#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
string	s , t;
int chkkai(int p,int n) {
	int ret = 0;
	for(int i=0;i<n/2;i++) if (s[p+i]!=s[p+n-i-1]) ret++;
	return ret;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,K;
	ll		ans = 0;

	cin >> K >> s;
	vector<int> eo(K+2);
	n = s.size();
	k = K;
	while(k||n) {
		eo[k] = n % 2;
		if (n==1) eo[k] = 0;
		n = n / 2;
		k--;
	}
cout << n << " " << k << endl;
for(i=0;i<=K;i++) cout << eo[i] << endl;
	if (n==0 && k>0) {
		cout << "impossible 0" << endl;
		return 0;
	}
	if (K==0) {
		if (chkkai(0,n)>0 && n>2) {
			cout << 0 << endl;
			return 0;
		} else {
			cout << "impossible 1" << endl;
			return 0;
		}
	}

	if (chkkai(0,n)==0 && n>0) {
		cout << "impossible 2" << endl;
		return 0;
	}
	x = 0;
	while (k<K) {
		if (n==0 && k==0) {
			n=1;
			k=1;
			t += s[0]; x++;
			cout << k << " " << x << " " << t << endl;
			continue;
		}
		if (k==0) {
			for(i=0;i<n;i++) { t += s[i]; x++; }
			cout << k << " " << x << ":" << t << endl;
		} else {
			//for(i=0;i<n;i++) { t += t[i]; x++; }
			if (eo[k+1]) { t += s[t.size()]; x++; }
			for(i=n-1;i>=0;i--) { t += t[i]; x++; } 
		}
		n = n*2 + eo[k+1];
		k++;
		cout << k << " " << x << ":" << t << endl;
	}
	cout << x << ":" << t << endl;
	for(i=0;i<s.size();i++) if (t[i]!=s[i]) ans++;

	cout << ans << endl;
	return 0;
}

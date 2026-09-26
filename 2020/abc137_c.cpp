//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n;
	vector<string> ss(n);
	for(i=0;i<n;i++) {
		cin >> s;
		sort(s.begin(),s.end());
		ss[i] = s;
	}
	sort(ss.begin(), ss.end());
	/*for(i=0;i<n;i++) {
		cout << ss[i] << endl;
	}*/

	int idx = 0;
	int cnt = 1;
	vector<ll> aa(n);
	int ia = 0; 
	for(i=1;i<n;i++) {
		if (ss[idx] == ss[i]) {
			cnt++;
		} else {
			if (cnt>1) {
				aa[ia++] = cnt;
			}
			cnt = 1;
			idx = i;
		}
	}
	if (cnt>1) aa[ia++] = cnt;

	for(i=0;i<ia;i++) {
		//cout << aa[i] << endl;
		ans += aa[i]*(aa[i]-1)/2;
	}
	cout << ans << endl;
	return 0;
}

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
	cin >> n;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	vector<ll> ANS;
	b = 0;
	for(i=0;i<n;i++) {
		cin >> a;
		if (a==1) {
			cin >> x;
			pq.push(x+b);
		}
		if (a==2) {
			cin >> x;
			b -= x;
		}
		if (a==3) {
			c = pq.top();
			pq.pop();
			ANS.push_back(c-b);
		}
	}

	for(i=0;i<ANS.size();i++) cout << ANS[i] << endl;
	return 0;
}

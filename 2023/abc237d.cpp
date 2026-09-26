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
	cin >> n;
	cin >> s;
	vector<ll>	leftA(n+1,-1),rightA(n+1,-1);
	for(i=0;i<n;i++) {
		if (s[i]=='L') {
			if (leftA[i]!=-1) {
				rightA[leftA[i]] = i+1;
				leftA[i+1] = leftA[i];
			}
			leftA[i] = i+1;
			rightA[i+1] = i;
		}
		if (s[i]=='R') {
			if (rightA[i]!=-1) {
				leftA[rightA[i]] = i+1;
				rightA[i+1] = rightA[i];
			}
			rightA[i] = i+1;
			leftA[i+1] = i;
		}
	}
	for(i=0;i<n;i++) {
		if (leftA[i]==-1) break;
	}
	cout << i << " ";
	while(rightA[i]!=-1) {
		cout << rightA[i] << " ";
		i = rightA[i];
	}
	cout << endl;
	return 0;
}

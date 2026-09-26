#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	char	b;
	m = 0;
	vector<char> s;
	cin >> q;
	for(i=0;i<q;i++) {
		cin >> a;
		if (a==1) {
			cin >> b;
			s.push_back(b);
			if (b==')') {
				ans-=1;
				if (ans==-1) m++;
			} else {
				ans+=1;
				if (ans==0) m--;
			}
		} else {
			if (s[s.size()-1]==')') {
				ans+=1;
				if (ans==0) m--;
			} else {
				ans-=1;
				if (ans==-1) m++;
			}
			s.pop_back();
		}
		if ( (ans==0) && (m==0) ) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}

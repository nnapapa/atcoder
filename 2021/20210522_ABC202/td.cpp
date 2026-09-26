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
	cin >> a >> b >> k;
	vector<vector<ll>>	cnt(31 , vector<ll>(31,1));
	for(i=1;i<=30;i++) {
		for(j=1;j<=30;j++) {
			cnt[i][j]= cnt[i-1][j]+cnt[i][j-1];
		}
	}
	/*
	for(i=0;i<=30;i++) {
		for(j=0;j<=30;j++) {
			cout << cnt[i][j] << ' ';
		}
		cout << endl;
	}*/
	x = 0;
	c = a+b;
	for(i=0;i<c;i++) {
		if (a==0) {
			s.push_back('b');
		} else if (x+cnt[a-1][b]>=k) {
			a--;
			s.push_back('a');
			//cout << 'a' << ' ' << x << endl;
		} else {
			x += cnt[a-1][b];
			b--;
			s.push_back('b');
			//cout << 'b' << ' ' << x << endl;
		}
	}

	cout << s << endl;
	return 0;
}

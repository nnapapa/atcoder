//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,w;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	vector<string>	ms(h);
	for(i=0;i<h;i++) cin >> ms[i];
	vector<int> x = {-1,0,+1,-1,+1,-1,0,+1};
	vector<int> y = {-1,-1,-1,0,0,+1,+1,+1};

	for(i=0;i<h;i++) for(j=0;j<w;j++) {
		ans = 0;
		if (ms[i][j]=='#') continue;
		for(k=0;k<8;k++) {
			if (i+x[k]>=0 && i+x[k]<h && j+y[k]>=0 && j+y[k]<w && ms[i+x[k]][j+y[k]]=='#') ans++;
		}
		ms[i][j]=ans+'0';
	}

	for(i=0;i<h;i++) cout << ms[i] << endl;
	return 0;
}

#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
//using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,t;
	string	s;
	cin >> t;
	vector<string>	ans(t,"NO");
	vector<vector<int>> cv(6,vector<int>(3));
	cv[0] = {-1,-1,1};
	cv[1] = {-1,1,-1};
	cv[2] = {-1,1,1};
	cv[3] = {1,-1,-1};
	cv[4] = {1,-1,1};
	cv[5] = {1,1,-1};
	for(x=0;x<t;x++) {
		cin >> s;
		n = s.size();
		for(i=0;i<6;i++) {
			b = 0;
			for(j=0;j<n;j++) {
				b += cv[i][s[j]-'A'];
				if (b<0) break;
			}
			if (b==0) {
				ans[x] = "YES";
				break;
			}
		}
	}
	for(x=0;x<t;x++) cout << ans[x] << endl;
	return 0;
}

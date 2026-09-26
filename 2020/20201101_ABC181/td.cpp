#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	ans = "No";
	string	s;
	AAA:
	ans = "No";
	cin >> s;
	n = s.size();
	vector<ll>	aa(10,0),bb(10);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	for(i=0;i<n;i++) {
		aa[s[i]-'0']++;
	}
	for(i=1;i<125;i++) {
		for(j=0;j<10;j++) bb[j]=0;
		x = i*8;
		if ((x >= 100)||(n>=3)) {
			bb[ x/100 ]++;
			x %= 100;
			bb[ x/10 ]++;
			x %= 10;
			bb[ x ]++;
		} else if ((x >= 10)||(n>=2)) {
			bb[ x/10 ]++;
			x %= 10;
			bb[ x ]++;
		} else {
			bb[ x ]++;
		}
		if (bb[0]!=0) continue;
		if (n<4) {
			if (aa[1]==bb[1] && aa[2]==bb[2] && aa[3]==bb[3] &&
				aa[4]==bb[4] && aa[5]==bb[5] && aa[6]==bb[6] &&
				aa[7]==bb[7] && aa[8]==bb[8] && aa[9]==bb[9] ) {
					ans = "Yes";
					break;
			}
		} else {
			if (aa[1]>=bb[1] && aa[2]>=bb[2] && aa[3]>=bb[3] &&
				aa[4]>=bb[4] && aa[5]>=bb[5] && aa[6]>=bb[6] &&
				aa[7]>=bb[7] && aa[8]>=bb[8] && aa[9]>=bb[9] ) {
					ans = "Yes";
					break;
			}
		}
	}
	//cout << i << endl;
	cout << ans << endl;
	//goto AAA;
	return 0;
}

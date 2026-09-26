#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,tk,ao;
	double		ans = 0;
	string	s,t;
	cin >> k >> s >> t;
	z = 9*k - 8;
	vector<int> inia(10),init(10),zan(10,k),zant(10),inittmp(10),iniatmp(10);
	for(i=1;i<=9;i++) init[i] = 1;
	for(i=0;i<4;i++) {
		init[s[i]-'0'] *= 10;
		zan[s[i]-'0']--;
	}
	for(i=1;i<=9;i++) inia[i] = 1;
	for(i=0;i<4;i++) {
		inia[t[i]-'0'] *= 10;
		zan[t[i]-'0']--;
	}
	//for(i=1;i<=9;i++) cout << zan[i] << endl;
	for(i=1;i<=9;i++) {
		if (zan[i]==0) continue;
		for(j=1;j<=9;j++) {
			iniatmp = inia;
			inittmp = init;
			zant = zan;
			inittmp[i] *= 10;
			zant[i]--;
			if (zant[j]==0) continue;
			iniatmp[j] *= 10;
			tk = ao = 0;
			for(c=1;c<=9;c++) tk += c*inittmp[c];
			for(c=1;c<=9;c++) ao += c*iniatmp[c];
			//if (tk>ao) cout << i << ":" << j << " " << tk << ":" << ao << endl;
			if (tk>ao) {
				ans += ((double)zan[i]/z)*((double)zant[j]/(z-1));
			}
		}
	}


	//cout << tk << " " << ao << endl;

	printf("%.10f\n",ans);
	return 0;
}

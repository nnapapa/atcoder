#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll>	A(200001,0),pre(200001,0),ABp(200001,0);


int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	A[1] = 1;
	vector<vector<ll>> AB(n+1);
	vector<ll> ANS;
	for(i=1;i<n;i++) {
		cin >> a >> b;
		AB[a].push_back(b);
		AB[b].push_back(a);
	}
	for(i=1;i<=n;i++) sort(AB[i].begin(),AB[i].end());
	/*for(i=1;i<=n;i++) {
		for(j=0;j<AB[i].size();j++) cout << AB[i][j] << " ";
		cout << endl;
	}*/
	ANS.push_back(1);
	a = 1;
	while(1) {
		bool f = false;
		for(i=ABp[a];i<AB[a].size();i++) {
			b = AB[a][i];
			if (A[b]==0) {
				A[b] = 1;
				pre[b] = a;
				ANS.push_back(b);
				//for(j=0;j<ANS.size();j++) cout << ANS[j] << " ";
				//cout << endl;
				ABp[a] = i+1;
				a = b;
				f = true;
				
				break;
			}
		}
		if (f) continue;

		if (a==1) {
			break;
		} else {
			a = pre[a];
			ANS.push_back(a);
			//cout << "B ";
			//for(j=0;j<ANS.size();j++) cout << ANS[j] << " ";
			//cout << endl;
			//break;
		}
	}
	//printf("OK\n");
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	cout << "1";
	for(i=1;i<ANS.size();i++) cout << " " << ANS[i];
	cout << endl;
	return 0;
}

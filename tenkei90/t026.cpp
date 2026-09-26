#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	cin >> n;
	vector<ll>					ans(n,0);
	vector<vector<ll>>	AB(n);
	for(i=0;i<n-1;i++) {
		cin >> a >> b;
		a--;b--;
		AB[a].push_back(b);
		AB[b].push_back(a);
	}
	/*
	for(i=0;i<n;i++) {
		for(j=0;j<AB[i].size();j++) {
			cout << AB[i][j] << " ";
		}
		cout << endl;
	}*/
	/*
	vector<pair<ll,ll>> X(n);
	for(i=0;i<n;i++) {
		X[i] = make_pair(AB[i].size(),i);
	}
	sort(X.begin(),X.end());
	reverse(X.begin(),X.end());
	*/
	
	//for(z=0;z<n;z++) {
	//	x = X[z].second;
	//	ans[x] = -1;
	//x = 1;
	queue<pair<ll,ll>> q;
	q.push(make_pair(0,-1));
	while(q.size()) {
		tie(a,b) = q.front();
		q.pop();
		for(i=0;i<AB[a].size();i++) {
			if (ans[AB[a][i]]==0) {
				ans[AB[a][i]] = -1*b;
				q.push(make_pair(AB[a][i],-1*b));
			}
		}
	}
		//for(i=0,j=0;i<n;i++) if (ans[i]==1) j++;
		//if (j>=n/2) break;
		//for(i=0;i<n;i++) ans[i]=0;
	//}

	a = 1;
	for(i=0,j=0;i<n;i++) if (ans[i]==a) j++;
	if (j<n/2) a = -1;
	for(i=0,j=0;i<n;i++) {
		if (ans[i]==a) {
			cout << i+1;
			if (++j==n/2) break;
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}

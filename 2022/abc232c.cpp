#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,w,x,y,z;
	string ans = "No";
	cin >> n >> m;
	vector<pair<ll,ll>>	AB(m),CD(m),EF(m);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		AB[i] = make_pair(a,b);
	}
	sort(AB.begin(),AB.end());
	for(i=0;i<m;i++) {
		cin >> c >> d;
		CD[i] = make_pair(c,d);
	}
  vector<int> v(n+1);
  for(i=1;i<=n;i++) v[i] = i;
  do {
		//for(i=0;i<=n;i++) cout << v[i]; cout << endl;
		for(i=0;i<m;i++) {
			a = v[CD[i].first];
			b = v[CD[i].second];
			if (a<b) EF[i]  = make_pair(a , b);
			else EF[i]  = make_pair(b , a);
		}
		
		sort(EF.begin(),EF.end());
    if (AB==EF) ans = "Yes";
  } while (next_permutation(v.begin()+1, v.end()));

	cout << ans << endl;
	return 0;
}

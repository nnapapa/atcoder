#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,y,z;
	ll		ans = 0;
	string	x,s,t;
	cin >> x >> n;
	vector<char> X(26);
	for(i=0;i<26;i++) {
		X[x[i]-'a'] = 'a' + i;
	}
	//for(i=0;i<26;i++) cout << X[i] << endl;
	vector<pair<string,string>>	S(n);
	for(i=0;i<n;i++) {
		cin >> s;
		t = "";
		for(j=0;j<s.size();j++) {
			t += X[s[j]-'a'];
		}
		S[i].first = t;
		S[i].second = s;
		//cout << t << " " << s << endl;
	}
	sort(S.begin() , S.end());
	for(i=0;i<n;i++) {
		cout << S[i].second << endl;
	}

	return 0;
}

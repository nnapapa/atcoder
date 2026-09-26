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
	vector<string> t(31);
	for(i=0;i<31;i++) {
		cin >> s;
		for(j=0;j<s.size();j++) {
			t[i] += char(((s[j]-'a'+13)%26)+'a');
		}
	}
	for(i=0;i<31;i++) {
		cout << t[i] << endl;
	}

	return 0;
}

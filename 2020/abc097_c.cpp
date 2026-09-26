#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	s,t,u;
	cin >> s;
	cin >> k;
	vector<string> ans(6);
	char ch = 'z';
	for(i=0;i<s.size();i++) {
		ch = min(ch,s[i]);
	}
	ans[1] += ch;
	//cout << ans[1] << endl;
	for(i=2;i<=k;i++) {
			t = ans[i-1];
			u = "";
			for(j=0;j<s.size()-t.size();j++) {
				bool f = true;
				for(c=0;c<t.size();c++) if (t[c]!=s[j+c]) f = false;
				if (f) {
					if (u=="") u = t + s[j+t.size()];
					else u = min(u,t+s[j+t.size()]);
				}
			}
			if (u!="") {
				ans[i] = u;
				//cout << ans[i] << endl;
			} else {
				char nch = ch;
				ch = 'z';
				for(c=0;c<s.size();c++) {
					if (s[c]>nch) ch = min(ch,s[c]);
				}
				ans[i] += ch;
				//cout << ans[i] << endl;
			}
	}

	cout << ans[k] << endl;
	return 0;
}

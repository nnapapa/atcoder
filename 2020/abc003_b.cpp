//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

bool isOK(char c) {
	//cout << c << ' ';
	if (c=='a') return true;
	if (c=='t') return true;
	if (c=='c') return true;
	if (c=='o') return true;
	if (c=='d') return true;
	if (c=='e') return true;
	if (c=='r') return true;
	if (c=='@') return true;
	return false;
}
int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 1;
	string	s,t;

	cin >> s;
	cin >> t;
	n = s.size();

	for(i=0;i<n;i++) {
		if (s[i] == '@') {
			if (!isOK(t[i])) ans = 0;
		} else if (t[i] == '@') {
			if (!isOK(s[i])) ans = 0;
		} else if (s[i] != t[i]) {
			ans = 0;
		}
	}

	if (ans)
		cout << "You can win"<< endl;
	else
		cout << "You will lose" << endl;

	return 0;
}

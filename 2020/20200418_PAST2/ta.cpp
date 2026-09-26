#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int kai(string s) {
	if (s[0] == 'B') {
		return -1 * (s[1] - '0') + 1;
	} else {
		return s[0] - '0';
	}
}
int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s,t;

	cin >> s >> t;
	
	ans = kai(s) - kai(t);
	if (ans<0) ans *= -1;

	cout << ans << endl;

}

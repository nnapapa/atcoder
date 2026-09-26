#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll a,b;
	string	s;
	cin >> s;
	cin >> a >> b;
	swap(s[a-1],s[b-1]);
	cout << s << endl;
	return 0;
}

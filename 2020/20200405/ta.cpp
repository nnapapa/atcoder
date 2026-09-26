#include <bits/stdc++.h>
using namespace std;
#define INF 0x7fffffff
#define ll	long long

int main() {
	int		s,l,r,ans = 0;
	int		tmp = INF;
	string	str;

	cin >> s >> l >> r;

	ans = s;
	if (s<l) ans = l;
	else if (r<s) ans = r;

	cout << ans << endl;

}

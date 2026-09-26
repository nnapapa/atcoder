//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,i,j,k,n,m,x,y;
	char	a,b;
	string	A,B,ans;

	cin >> a >> b;

	for(i=0;i<b-'0';i++) A += a;
	for(i=0;i<a-'0';i++) B += b;

	ans = min(A,B);

	cout << ans << endl;
	return 0;
}

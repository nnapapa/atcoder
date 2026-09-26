//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

/* 最大公約数 */
long gcd(long m, long n) {
	long temp;
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	cin >> k;

	for(a=1;a<=k;a++) {
		for(b=1;b<=k;b++) {
			for(c=1;c<=k;c++) {
				ans += gcd(a , gcd(b , c) );
			}
		}
	}

	cout << ans << endl;

}

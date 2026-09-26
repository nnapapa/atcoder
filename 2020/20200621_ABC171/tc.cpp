//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;
	i=0;
	while(n>0) {
		n--;
		s += 'a' + n%26; 
		n /=26;
	}
	for(i=s.size()-1;i>=0;i--)
	cout << s[i];
	cout << endl;
	return 0;
}

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	cin >> str;

	for(i=0;i<str.size();i++) {
		if (str[i]=='(') {
			a = i;
		}
		if (str[i]==')') {
			b = i;
			
		}
	}
	
	cout << str << endl;

}

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
	a = b = c = 0;
	for(i=0;i<str.size();i++) {
		if (str[i] == 'a' ) a++;
		if (str[i] == 'b' ) b++;
		if (str[i] == 'c' ) c++;
	}

	if ((a > b) && (a > c)) str = "a";
	if ((b > a) && (b > c)) str = "b";
	if ((c > a) && (c > b)) str = "c";

	cout << str << endl;

}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;
	ll		A=0;
	ll		B=0;
	cin >> n >> a >> b;
	cin >> s;

	n = s.size();
	for(i=0;i<n;i++) {
		if (s[i]=='c') {
			cout << "No" << endl;
		} else if (s[i]=='a') {
			if (a+b<=A+B) {
				cout << "No" << endl;
			} else {
				cout << "Yes" << endl;
				A++;
			}
		} else {
			if (a+b<=A+B) {
				cout << "No" << endl;
			} else {
				if (b>=B+1) {
					cout << "Yes" << endl;
					B++;
				} else {
					cout << "No" << endl;
				}
			}

		}
	}

	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c,i,j,k,n,m,x,y,ans = 0;
	long long aa,bb;
	
	cin >> a >> b >> c;

	
	aa = 4*a*b;
	bb = (c - a - b)*(c - a - b);
	
	if (( aa < bb ) && ( c - a - b > 0 )) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}

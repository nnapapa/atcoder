//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,w,t,r,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;
	a = w = t = r = 0;
	for(i=0;i<n;i++) {
		cin >> s;
		if (s == "AC") a++;
		if (s == "WA") w++;
		if (s == "TLE") t++;
		if (s == "RE") r++;
	}

	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << "AC x " << a << endl;
	cout << "WA x " << w << endl;
	cout << "TLE x " << t << endl;
	cout << "RE x " << r << endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int		b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n;
	
	map<string, int> aa;
	
	for(i=0;i<n;i++) {
		cin >> str;
		aa[str]++;
	}
	
	for(auto p : aa) {
		ans = max(ans , p.second);
	}
	
	for(auto p: aa) {
		if (p.second == ans) {
			cout << p.first << endl;
		}
	}
	

}

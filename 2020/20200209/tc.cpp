#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n;
	
	vector<int> a(n);
	
	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());
	
	str = "YES";
	for(i=0;i<n-1;i++) {
		if (a[i] == a[i+1]) {
			str = "NO";
		}
	}
	
	cout << str << endl;


}

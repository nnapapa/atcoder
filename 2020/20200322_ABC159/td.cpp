#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff

int main() {
	long long		a,b,c,i,j,k,n,m,x,y,ans1 , ans = 0;
	string	str;
	
	cin >> n;
	map<int,int> mmp;
	vector<int> aa(n);
	
	for(i=0;i<n;i++) {
		cin >> aa[i];
		mmp[ aa[i] ]++;
	}
	
	for ( auto pp : mmp) {
		long long j = pp.second;
		ans += j*(j-1)/2;
	}
	
	
	for(i=0;i<n;i++) {
		long long j = mmp[ aa[i] ];
		if (j>=2) {
			ans1 = ans - j*(j-1)/2 + (j-1)*(j-2)/2;
		} else {
			ans1 = ans;
		}
		cout << ans1 << endl;
	}

}

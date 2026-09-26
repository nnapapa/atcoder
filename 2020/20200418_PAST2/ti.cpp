#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		b,c,i,j,k,n,m,x,y;
	string	str;

	cin >> n;
	int nn = 2;
	for(i=1;i<n;i++) nn *=2; 
	vector<int> a(nn);
	vector<int> ans(nn);
	for(i=0;i<nn;i++) cin >> a[i];
	for(i=1;i<=n;i++) {
		x = 0;
		for(j=0;j<nn;j++) {
			if (a[j]!=0) {
				if (x==0) {
					x = a[j];
					y = j;
				} else {
					if (x > a[j]) {
						a[j] = 0;
						ans[j] = i;
						x = 0;
					} else {
						a[y] = 0;
						ans[y] = i;
						x = 0;
					}
				}
			}
		}
	}
	
	for(i=0;i<nn;i++) {
		if (ans[i] == 0) ans[i] = n;
		cout << ans[i] << endl;
	}
}

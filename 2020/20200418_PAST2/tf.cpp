//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		a,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	cin >> n;
	vector<pair<int,int>>	ab(n);
	for(i=0;i<n;i++) {
		cin >> ab[i].first >> ab[i].second;
	}
	sort(ab.begin(), ab.end());
	priority_queue<int> b;
	j=0;
	for(i=1;i<=n;i++) {
		if (j<n) {
			while(ab[j].first <= i) {
				b.push(ab[j].second);
				j++;
				if (j==n) break;
			}
		}
		ans += b.top();
		b.pop();
		cout << ans << endl;

	}


}

#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
typedef long long ll;

int main() {
	int n,d,x,y;
	ll m,ans = 0;
	priority_queue<int> a;
	
	cin >> n >> m;
	rep(i,n) {
		cin >> d;
		a.push(d);
	}
	
	int i=0;
	ll  j=0;
	while ((i<n) && (j<m)) {
		x = a.top();
		a.pop();
		i++;
		ans += x*2;
		j++;
		if ((i<n) && (j<m)) {
			y = a.top();
			a.pop();
			i++;
			ans += x + y;
			j++;
			if (j<m) {
				ans += x + y;
				j++;
			}
			if (j<m) {
				ans += y*2;
				j++;
			}
		}
		
	}
		
	cout << ans << endl;
}


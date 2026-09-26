//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n;
	vector<int> l(n);
	for(i=0;i<n;i++) {
		cin >> l[i];
	}
	sort(l.begin(), l.end());
	//for(i=0;i<n;i++) cout << l[i] << endl;
	for(i=n-1;i>1;i--) {
		for(j=i-1;j>0;j--) {
			int low = l[i] - l[j];
			int up = l[j];
			//cout << 'i' << i << 'j' << j << "  " << low << ' ' << up << endl;
			// low < ok <= up
			if (low >= up) continue;
			int il = upper_bound(l.begin() , l.begin() + j , low) - l.begin();
			int iu = upper_bound(l.begin() , l.begin() + j , up ) - l.begin();

			if (il <= iu) ans += iu - il;
			//cout << "il iu : " << il << ' ' << iu << endl;
			//cout << ans << endl;
		}
	}

	cout << ans << endl;
	return 0;
}

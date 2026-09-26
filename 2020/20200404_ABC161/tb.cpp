#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff

int main() {
	int		i,j,k,n,m,x,y,ans = 0;
	int		tmp = INF;

	cin >> n >> m;

	vector<int> a(n);
	for(i=0;i<n;i++) {
		cin >> a[i];
		ans += a[i];
	}

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	//for(i=0;i<n;i++)
	//	cout << a[i] << endl;

	if ( (double)a[m-1] >= (double)ans/(4*m) ) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}

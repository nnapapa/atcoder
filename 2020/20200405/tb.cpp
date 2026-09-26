#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff

int main() {
	int		i,j,k,n,m,x,y,ans = 0;
	char	c;
	int		tmp = INF;

	cin >> n;

	vector<int> r,b;
	for(i=0;i<n;i++) {
		cin >> x >> c;
		if (c=='R') r.push_back(x);
		else b.push_back(x);
	}

	sort(r.begin(), r.end());
	//reverse(r.begin(), r.end());
	sort(b.begin(), b.end());
	//reverse(b.begin(), b.end());

	for(i=0;i<r.size();i++) {
		cout << r[i] << endl;
	}
	for(i=0;i<b.size();i++) {
		cout << b[i] << endl;
	}

}

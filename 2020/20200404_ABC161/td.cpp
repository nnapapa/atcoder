#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff
#define ll	long long

int main() {
	ll	b,c,i,j,k,n,m,x,y,ans1 , ans = 0;
	string	str;

	cin >> k;

	if (k<=12) {
		cout << k << endl;
		return 0;
	}

	vector<int> a = {1,2};

	for(i=13;i<=k;i++) {
		int l = a.size()-1;
		int keta = l;
		bool f = true;
		while(l>=1) {
			if ((a[l-1] > a[l]-1)&&(a[l]!=9)) {
				f = false;
				a[l]++;
				for(j=l+1;j<=keta;j++) {
					if (a[j-1] != 0) a[j] = a[j-1] -1;
					else a[j] = 0;
				}
				break;
			}
			l--;
		}
		if (f) {
			bool f = false;
			for(j=0;j<=keta;j++) if (a[j]!=9) f = true;
			if (f) { // 最上位を+1
				a[0]++;
				for(j=1;j<=keta;j++) {
					if (a[j-1] != 0) a[j] = a[j-1] -1;
					else a[j] = 0;
				}
			} else { // 桁上げ
				a[0] = 1;
				for(j=1;j<=keta;j++) {
					a[j] = 0;
				}
				a.push_back(0);
			}

		}

	}

	for(i=0;i<a.size();i++) {
		cout << a[i];
	}
	cout << endl;
}

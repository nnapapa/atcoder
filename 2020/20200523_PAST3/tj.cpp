//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int	n,m;
vector<int>	c(100000);

bool isOK(int index, int key) {
    if (c[index] < key) return true;
    else return false;
}
// 汎用的な二分探索のテンプレ
int binary_search(int key) {
    int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = n; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
	if (right == n) right = -1;
	//cout << "ret " << right << endl;
    return right;
}

int main() {
	int		b,i,j,k,x,y;
	cin >> n >> m;

	vector<int>	ans(m),a(m);
	for(i=0;i<m;i++) {
		cin >> a[i];
	}
	for(i=0;i<m;i++) {
		//for(int ii=0;ii<n;ii++) printf("%d ",c[ii]);
		//cout << endl;
		ans[i] = binary_search(a[i]);
		if (ans[i]>=0) {
			c[ans[i]] = a[i];
			ans[i]++;
		}
	}
	for(i=0;i<m;i++) cout << ans[i] << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll	h[100005],hh[100005];
ll	n,a,b;
// 二分探索法
bool isOK(int count) {
	bool f = true;
	ll c = a - b;
	for(int i=0;i<n;i++) hh[i] = h[i] - b*count;
	//cout << "hh[]:";
	//for(int i=0;i<n;i++) cout << hh[i] << " ";
	for(int i=0;i<n;i++) {
		if (hh[i]>0) {
			int d = (hh[i]+c-1)/c;
			hh[i] -= c*min(d,count);
			count -= min(d,count);
		}
	}
	for(int i=0;i<n;i++) if (hh[i]>0) f = false;
	//cout << "hh[]:";
	//for(int i=0;i<n;i++) cout << hh[i] << " ";
	//cout << "f:" << f << endl;
  return f;
}
// 汎用的な二分探索のテンプレ(a[]は昇順データ)
int binary_search() {
    int left = 0; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = 1000000001; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
    while (right - left > 1) {
        int mid = left + (right - left) / 2;
				//cout << left << " " << mid << " " << right << " " ;
        if (isOK(mid)) right = mid;
        else left = mid;
    }
    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return right;
}

int main() {
	ll		c,d,i,j,k,l,m,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> a >> b;
	for(i=0;i<n;i++) cin >> h[i];
	//sort(h,h+n);
	//reverse(h,h+n);

	ans = binary_search();
	//for(i=0;i<=n;i++) cout << h[i] << " ";
	//cout << endl;
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll n,m;
vector<ll>	h(200005,INFL),w(200005),rrr(200005,0),lll(200005,0),sumr(200005,0),suml(200005,0);

// index が条件(key以上)を満たすかどうか
bool isOK(int index, int key) {
    if (key <= h[index]) return true;
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
    //cout << "left=" << left << " right=" << right << endl;
    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return right;
}


int main() {
	ll		a,b,c,d,i,j,k,l,r,v,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> m;
	for(i=0;i<n;i++) cin >> h[i];
	sort(h.begin(),h.end());
	for(i=0;i<m;i++) cin >> w[i];
	for(i=0;i<n-2;i+=2) {
		lll[i] = h[i+1]-h[i];
	}
	for(i=1;i<n;i+=2) {
		rrr[i] = h[i+1]-h[i];
	}
  suml[0] = lll[0];
  sumr[1] = rrr[1];
  for(i=2;i<n-2;i+=2) {
    suml[i] = suml[i-2] + lll[i];
  }
  for(i=3;i<n;i+=2) {
    sumr[i] = sumr[i-2] + rrr[i];
  }
  /*
  for(i=0;i<n;i++) cout << h[i] << " ";
  cout << endl;
  for(i=0;i<n;i++) cout << lll[i] << " ";
  cout << endl;
  for(i=0;i<n;i++) cout << suml[i] << " ";
  cout << endl;
  for(i=0;i<n;i++) cout << rrr[i] << " ";
  cout << endl;
  for(i=0;i<n;i++) cout << sumr[i] << " ";
  cout << endl;
  */
  for(i=0;i<m;i++) {
    x = binary_search(w[i]);
    y = (x >> 1) << 1;
    z = abs(h[y]-w[i]);
    if (y>0) l = suml[y-2];
    else l = 0;
    if (y==0 && n>2) r = sumr[n-2];
    else if (y < n-1) r = sumr[n-2] - sumr[y-1];
    else r = 0;
    //printf("xyz lr:%d %d %d  %d %d\n",x,y,z,l,r);
    ans = min(ans , z+l+r);
  }

	cout << ans << endl;
	return 0;
}

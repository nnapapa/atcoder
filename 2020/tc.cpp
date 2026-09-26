#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff
#define ll  long long

int main() {
  int n;
  cin >> n;
  vector<ll> dpA(n+1),dpB(n+1),dpC(n+1);
  vector<ll> a(n+1), b(n+1), c(n+1);

  for(int i=1;i<=n;i++) {
    cin >> a[i] >> b[i] >> c[i]; 
  }

  dpA[1] = a[1];
  dpB[1] = b[1];
  dpC[1] = c[1];
  for(int i=2;i<=n;i++) {
    dpA[i] = max(dpB[i-1],dpC[i-1]) + a[i];
    dpB[i] = max(dpA[i-1],dpC[i-1]) + b[i];
    dpC[i] = max(dpA[i-1],dpB[i-1]) + c[i];
  }
  ll ans = max( max(dpA[n],dpB[n]) , dpC[n]);
  cout << ans << endl;
}

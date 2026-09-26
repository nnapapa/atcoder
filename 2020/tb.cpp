#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff
#define ll  long long

int main() {
  int n,k;
  cin >> n >> k;
  vector<ll> dp(n+2 , 0x7fffffffffffffffll);
  vector<ll> h(n+2);

  for(int i=0;i<n;i++) {
    cin >> h[i+1]; 
  }
  dp[1] = 0;
  for(int i=1;i<n;i++) {
    for(int j=1;j<=k;j++){
      if (i+j > n) break;
      ll t = h[i] - h[i+j];
      if (t<0) t*=-1;
      dp[i+j] = min(dp[i+j], dp[i]+t);
    }

  }

  cout << dp[n] << endl;
}

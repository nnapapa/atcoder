#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff
#define ll  long long

int main() {
  int n, w;
  cin >> n >> w;
  vector<vector<ll>> dp(n+1 , vector<ll>(w+1) );
  vector<ll> ww(n+1), v(n+1);

  for(int i=1;i<=n;i++) {
    cin >> ww[i] >> v[i]; 
  }

  //dp[i][j]はi番目までの品物で重さの総和がj以下となるように選んだ時の価値の総和の最大値
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=w; j++) {
      if (ww[i] > j) {
        dp[i][j] = dp[i-1][j];
      } else {
        dp[i][j] = max(dp[i-1][j] , dp[i-1][j-ww[i]] + v[i]);
      }
    }
  }
  cout << dp[n][w] << endl;
}

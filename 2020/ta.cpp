#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff
#define ll  long long

int main() {
  int n;
  cin >> n ;
  vector<ll> dp(n+2 , 0x7fffffffffffffffll);
  vector<ll> h(n+2);

  for(int i=0;i<n;i++) {
    cin >> h[i+1]; 
  }
  dp[1] = 0;
  for(int i=1;i<n;i++) {
    ll t = h[i] - h[i+1];
    if (t<0) t*=-1;
    dp[i+1] = min(dp[i+1], dp[i]+t);
    t = h[i] - h[i+2];
    if (t<0) t*=-1;
    dp[i+2] = min(dp[i+2], dp[i]+t);    
  }

  cout << dp[n] << endl;
}

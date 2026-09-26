#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

static const int MAX_N=17;
static const int INF=100000000;

int n;
int d[MAX_N][MAX_N];
int dp[1<<MAX_N][MAX_N];

int rec(int S,int v){
  //メモ確認
  if(dp[S][v]>=0){
    return dp[S][v];
  }
  if(S == (1<<n)-1 && v==0){
    return dp[S][v] = 0;
  }
  int res = INF;
  for(int u=0;u<n;u++){
    if(!(S>>u&1)){
      //(S|1<<u　でSにuを追加
      res=min(res,rec(S | 1<<u,u)+d[v][u]);
    }
  }
  return dp[S][v] =res;
}

int main(){
  cin>>n;

  //from x to y const z
  int x,y,z;
	vector<int> dx(n),dy(n),dz(n);
  memset(d,INF,sizeof(d));
  for(int i=0;i<n;i++){
    cin>>x>>y>>z;
    dx[i] = x;
		dy[i] = y;
		dz[i] = z;
  }
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) {
		d[i][j] = abs(dx[i]-dx[j]) + abs(dy[i]-dy[j]) + max(0,dz[j]-dz[i]);
	}

  //dpテーブルを-1で初期化
  memset(dp,-1,sizeof(dp));

  //出力
  cout<<rec(0,0)<<endl;
  return 0;
}

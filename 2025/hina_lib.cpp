#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using lll = __int128;
using ll = long long;

//昇順にソートされた配列Aの「x以上の最小の要素」のイテレータ
auto it = lower_bound(A.begin(),A.end(),x);
//昇順にソートされた配列Aの「xを超える最小の要素」のイテレータ
auto it = upper_bound(A.begin(),A.end(),x);
//要素の参照 *(it) *(++it) *(--it) *(it+n)
//it比較(it==A.begin() it==A.end())

//setやmapにもlower_boundがある
set<ll> st; map<ll,ll> st;
auto it = st.lower_bound(x);

// 繰り返し二乗法 (xのn乗)
ll pow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n = n / 2
    }
    return ret;
}

// 繰り返し二乗法 (xのn乗 % MOD)
// x,nに指定する固定値はLLをつけること(2^nのとき、2でWA、2LLでAC)
const ll MOD = 1000000007LL;
ll modpow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % MOD;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % MOD;
        n >>= 1;  // n = n / 2
    }
    return ret;
}

// 二分探索法
// 汎用的な二分探索のテンプレ(a[]は昇順データ)
// mainに埋め込んでカスタマイズするほうが使いやすい
{
	// 左側からok、どこかから右側がng
	// whileを抜けた後、okの最大値がok、ngの最小値がng
	ll ok = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
	ll ng = (ll)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
	while (ng - ok > 1) {
		ll mid = (ok + ng) / 2;
		bool flg = false;         // またはtrue
		//ここにmidに対するチェック論理を書く midがokならflg=true
		if (flg) ok = mid;
		else ng = mid;
	}
}
// 左側からng、どこかから右側がok
// whileを抜けた後、ngの最大値がng、okの最小値がok
{
	ll ng = -1; //「index = 0」が条件を満たさないこともあるので、初期値は -1
	ll ok = (ll)a.size(); // 「index = a.size()-1」が条件を満たすこともあるので、初期値は a.size()
	while (ok - ng > 1) {
		ll mid = (ng + ok) / 2;
		bool flg = true;         // またはfalse
		//ここにmidに対するチェック論理を書く midがokならflg=true
		if (flg) ok = mid;
		else ng = mid;
	}
}

// a[index]が条件(key以上)を満たすかどうか
bool isOK(ll index, ll key) {
    if (key <= a[index]) return true;
    else return false;
}
ll binary_search(ll key) {
    ll left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    ll right = (ll)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
    	ll mid = (left + right) / 2;
        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    //cout << "left=" << left << " right=" << right << endl;
    return right;
}

// 目的の値 key の index を返すようにする (ない場合は -1) a[]は昇順データ
ll binary_search(ll key) {
    ll left = 0, right = (ll)a.size() - 1; // 配列 a の左端と右端
    while (right >= left) {
        ll mid = left + (right - left) / 2; // 区間の真ん中
        if (a[mid] == key) return mid;
        else if (a[mid] > key) right = mid - 1;
        else if (a[mid] < key) left = mid + 1;
    }
    return -1;
}

// 要素有無を調べる二分探索標準関数がある。配列Aは昇順にソートされている必要がある。
// bool binary_search(A.begin(),A.end(),value);
// 戻り値は配列Aにvalueと一致する要素があれば、true、なければ、false

/*
lower_bound / upper_bound (STLの関数) O(logN)
昇順にソートされた配列において、
「x以上の最小の要素」を求める場合にはSTLのlower_boundを使うことができます。
同様に、「xを超える最小の要素」を求めるときにはupper_boundを使うことができます。
*lower_bound(配列.begin(), 配列.end(), 値)  // 「値」以上の最小の値
*upper_bound(配列.begin(), 配列.end(), 値)  // 「値」を超えるの最小の値
setやmapでも使える
st.lower_bound(値)->first
st.lower_bound(値)->second
*mp.lower_bound(値)
*/

/* 素因数分解 */
map<ll,ll> retmap;
void pf(ll n) {
  if (n<=1) return;
	for(ll i=2;i*i<=n;i++) {
		if (n%i==0) {
			pf(i);
			pf(n/i);
      return;
		}
	}
  retmap[n]++;
	return;
}
/* 素因数分解からの約数の個数 */
ll divisorcount(ll n) {
  pf(n);
  ll ret = 1;
  for(auto p : retmap) {
    //cout << p.first << '^' << p.second << endl;
    ret *= p.second + 1;
  }
  return ret;
}

/* MAXPまでの素数列挙 prime_listが素数のリスト */
vector<ll> plist;
#define MAXP 1000001
void construct_plist() {
  vector<bool> pf(MAXP,false);
  for(int i=2;i<MAXP;i++) {
    if(pf[i]) continue;
    plist.push_back(i);
    for(int j=i;j<MAXP;j+=i) pf[j]=true;
  }
}

/* 素数判定 1:素数 0:素数ではない */
vector<ll> memo(100001,-1);
ll pfchk(ll n) {
	if (memo[n]!=-1) return memo[n];
  if (n<=1) return memo[n] = 0;
	for(ll i=2;i*i<=n;i++) {
		if (n%i==0) {
      return memo[n] = 0;
		}
	}
	return memo[n] = 1;
}

/* 約数列挙 */
vector<ll> divisor(ll n) {
	vector<ll> ret;
	for(ll i=1;i*i<=n;i++) {
		if (n%i==0) {
			ret.push_back(i);
			if (i*i!=n) ret.push_back(n/i);
		}
	}
	//sort(ret.begin(),ret.end());
	return ret;
}
/* 最大公約数 (ユークリッドの互除法) */
ll gcd(ll m, ll n) {
	ll temp;
	if (n > m) swap(m , n);
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}

/* 最小公倍数 */
ll lcm(ll m, ll n) {
	return m/gcd(m,n)*n;
}

// ans = a ÷ b mod. MOD
// ans = (a % MOD) * modinv(b, MOD) % MOD;　　逆元
const int MOD = 1000000007;
ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

//HxWの迷路の(sx,sy)から(gx,gy)までの最短経路探索(BFS)
ll	H,W,sx,sy,gx,gy;				// mainで設定する
vector<string> maze(100);		// mainで設定する
ll dx[4] = {1,0,-1,0} , dy[4] = {0,1,0,-1};
ll dc[100][100];
ll bfs() {
	queue<pair<ll,ll>> que;
	for(ll i=0;i<H;i++) for(ll j=0;j<W;j++) dc[i][j] = -1;
	que.push(make_pair(sx,sy));
	dc[sx][sy] = 0;
	while(que.size()) {
		pair<ll,ll> p = que.front(); que.pop();
		//cout << p.first << ',' << p.second << endl;
		if (p.first == gx && p.second == gy) break;
		for(int i=0;i<4;i++) {
			ll nx=p.first+dx[i] , ny=p.second+dy[i];
			if (0<=nx && nx<H && 0<=ny && ny<W && maze[nx][ny]!='#' && dc[nx][ny]==-1) {
				que.push(make_pair(nx,ny));
				dc[nx][ny] = dc[p.first][p.second] + 1;
			}
		}
	}
	return dc[gx][gy];
}


//階乗 n!
ll calcProduct(ll n) {
  ll ret = 1;
  for(ll i=n;i>0;i--) ret = ret * i;
  return ret;
}
//nPr 順列計算(n!/(n-r)!)
ll nPr(ll n, ll r) {
  ll ret = 1;
	for(ll i=n;i>(n-r);i--) ret = ret * i;
	return ret;
}
//nCr 組み合わせ計算(nPr/r!)
ll nCr(ll n, ll r) {
    if (r == 0) return 1;
    return (n - r + 1) * nCr(n, r - 1) / r;
}

//階乗(n! %MODあり)
const ll MOD = 1000000007;
ll calcProductmod(ll n) {
  ll ret = 1;
  for(ll i=n;i>0;i--) ret = ret * i % MOD;
  return ret;
}
//nPr 順列計算(n!/(n-r)!  %MODあり)
const ll MOD = 1000000007;
ll nPrmod(ll n, ll r) {
  ll ret = 1;
	for(ll i=n;i>(n-r);i--) ret = ret * i % MOD;
	return ret;
}
//nCr 組み合わせ計算(nPr/r! %MODあり)
ll nCrmod(ll n, ll r) {
  return nPrmod(n,r) * modinv(calcProductmod(r), MOD) % MOD;
}

//nCr 組み合わせ計算(%MODあり) 高速版
const int MAX = 3000000;
const int MOD = 1000000007;
ll fac[MAX], finv[MAX], inv[MAX];
// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
// nCr計算
ll COM(ll n, ll r){
    if (n < r) return 0;
    if (n < 0 || r < 0) return 0;
    return fac[n] * (finv[r] * finv[n - r] % MOD) % MOD;
}
// 使い方
int main() {
    // 前処理
    COMinit();
    // 計算例
    cout << COM(100000, 50000) << endl;
}

// queue (First In First Out)
// queue<int>q;
// q.push(値),  q.front(),  q.pop(),  q.size(),  q.empty();
{
	queue<int> q;
	q.push(10);
	q.push(3);
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}

// stack (Last In First Out)
// stack<int> s;
// s.push(値),  s.top(),  s.pop(),  s.size(),  s.empty();

// priority queue
// priority_queue<int> q;  /*降順 5,4,3,2,1*/
// priority_queue<int, vector<int>, greater<int>> q;  /*昇順 1,2,3,4,5*/
// q.push(値),  q.top(),  q.pop(),  q.size(),  q.empty();

int main() {
	priority_queue<int> a;  /*降順 5,4,3,2,1*/
	priority_queue<int, vector<int>, greater<int>> a;  /*昇順 1,2,3,4,5*/
 	int n,m,i,d;
	long long ans = 0;
	cin >> n >> m;
	for(i=0;i<n;i++) {
		cin >> d;
		a.push(d);
	}
	for(i=0;i<m;i++) {
		d = a.top() / 2;
		a.pop();
		a.push(d);
	}
	for(i=0;i<n;i++) {
		ans += a.top();
		a.pop();
	}
	cout << ans << endl;

}

//map 辞書
// map<key型, value型> mp;
// mp[key] = value;  mp.erase(key);  mp[key];  mp.at(key);  mp.count(key);  mp.size();
int main() {
	int		b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	cin >> n;

	map<string, int> aa;     //keyが文字列
	map<vector<ll>, ll> ab;  //keyが配列
	map<ll, vector<ll>> ac;  //dataが配列

	for(i=0;i<n;i++) {
		cin >> str;
		aa[str]++;     //keyはstr、データを+1する。存在しなければstr,0が追加されて+1
	}

	//keyが昇順にソートされる pはpair型key:first,value:second>
	for(auto p : aa) {
		ans = max(ans , p.second);
	}

	for(auto p: aa) {
		if (p.second == ans) {
			cout << p.first << endl;
		}
	}

	//mapのvalueを更新したい場合は&をつける(keyは更新不可)
	a = 0;
	for(auto &p : aa) {
		p.second += a;
		a = p.second;
		cout << p.first << " " << p.second << endl;
	}


	//mapはlower_bound、upper_boundが使える。
	//.lower_bound(値)  // keyが「値」以上の最小の値
	//.upper_bound(値)  // keyが「値」を超える最小の値
	//検索結果は要素のイテレータを返却する
	auto it = aa.lower_bound("ABC");
	auto it = aa.upper_bound("ABC");
	cout << it->first << endl;
	cout << it->second << endl;

}

//next_permutation
//配列の順列の全列挙 計算量O(N!) n=9で362880
{
  vector<int> v = { 2, 1, 3 };
  sort(v.begin(), v.end());		//sort必須
  do {
    for (int x : v) cout << x << " "; cout << endl;
  } while (next_permutation(v.begin(), v.end()));
}
/*
全ての順列についてdo-while内で操作できる
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/

//単一始点最短路問題(ダイクストラ法)
//n頂点、m個の経路(A<->B経路のコストC)、のとき、頂点startから頂点endの最短路を求める。
typedef pair<ll,ll> P;
	cin >> n >> m >> start >> end;
	vector<ll>	A(m),B(m),C(m);
	for(i=0;i<m;i++) cin >> A[i] >> B[i] >> C[i];
	struct edge { ll to, cost;};
	vector<vector<struct edge>> G(n+1);
	for(i=0;i<m;i++) {
		struct edge ed;
		ed.to = B[i];
		ed.cost = C[i];
		G[A[i]].push_back(ed);
    //両方向の場合
		ed.to = A[i];
		ed.cost = C[i];
		G[B[i]].push_back(ed);
	}
	//for(i=1;i<=n;i++) for(j=0;j<G[i].size();j++) cout << i << "->" << G[i][j].to << "(" << G[i][j].cost << ")" << endl;
	priority_queue<P,vector<P>,greater<P> > que;
	vector<ll> D(n+1,INFL),prev(n+1,-1),num(n+1,0);
	D[start] = 0;
	num[start] = 1; 												//最短経路本数計算
	que.push(P(0,start));
	while(!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (D[v] < p.first) continue;
		for(i=0;i<G[v].size();i++) {
			struct edge e = G[v][i];
			if (D[e.to] > D[v] + e.cost) {
				D[e.to] = D[v] + e.cost;
				num[e.to] = num[v]; 							//最短経路本数計算
        prev[e.to] = v;										//経路復元用
				que.push( P(D[e.to],e.to) );
			}
			else if (D[e.to]==D[v]+e.cost) {		//最短経路本数計算
				num[e.to] += num[v]; 							//最短経路本数計算
				num[e.to] %= 1000000007; 					//最短経路本数計算
			}
		}
	}
	if (D[end]==INFL) D[end]=-1;
	cout << D[end] << endl;
  //経路を復元する場合
	//for(i=1;i<=n;i++) cout << " " << prev[i]; cout << endl;
  vector<ll> path;
  for(i=end;i!=-1;i=prev[i]) path.push_back(i);
  reverse(path.begin(),path.end());
  cout << path[0]; for(i=1;i<path.size();i++) cout << " " << path[i]; cout << endl;


#define M_PI 3.14159265358979323846
//三角関数sin(角),cos(角),tan(角)  角を求めるのはasin(sin値),acos(cos値),atan(tan値)
//atan2(縦の長さ,横の長さ)は、直角三角形の底辺と斜辺の間の角が求まる。
//角の単位はラジアン  radian=degree*M_PI/180.0   degree=radian*180.0/M_PI   360度=2*M_PI(radian)
//直角三角形abcの斜辺cはc=sqrt(a*a+b*b); (c*c = a*a + b*b)
//正弦定理[外接円の直径2R=a/sin(A)]、余弦定理[ a*a=b*b+c*c-2*b*c*cos(A) , cos(A)=(b*b+c*c-a*a)/(2*b*c) ]

/* 座標(x, y) を，(xc, yc)を中心に時計回りにthetaラジアン回転した座標を*xp, *yp に返す関数 rotation2D() */
/* 座標(x, y)は(→,↓)、関数内の数学座標は(→,↑) */
void rotation2D( double * xp, double * yp, double x, double y, double xc, double yc, double theta  ) {
	y = -y; yc = -yc; // 数学座標と同じ様にするためにy座標値を反転
	*xp = (x - xc) * cos(theta) - (y - yc) * sin(theta) + xc;
	*yp = (x - xc) * sin(theta) + (y - yc) * cos(theta) + yc;
	*yp = *yp * -1.0; // 元の座標に戻すためにy座標値を反転
}

//最長増加部分列(LIS):O(N logN)
//in  A[] : 3 1 5 5 6 7 1 4  の最長増加部分列は、
//out X[] : 1 1 2 2 3 4 4 4  厳密増加 1 5 6 7   (同値OK)
//out X[] : 1 1 2 3 4 5 5 5  広義増加 1 5 5 6 7 (同値NG)
{
	cin >> n;
	vector<ll>	A(n),X(n);
	for(i=0;i<n;i++) cin >> A[i];
	vector<ll>	T,P;
	for(i=0;i<n;i++) {
		//厳密に増加する最長増加部分列
		auto it = lower_bound(T.begin() , T.end() , A[i]);
		//広義の最長増加部分列
		//auto it = upper_bound(T.begin() , T.end() , A[i]);
		P.push_back(it - T.begin());
		if (it == T.end()) T.push_back(A[i]);
		else *it = A[i];
		X[i] = T.size();		//i時点の最長増加部分列の長さ
	}
	//最長増加部分列の長さ:X[]
	cout << X[n-1] << endl;
	//最長増加部分列の表示
	vector<ll> Q(T.size());  //最長増加部分列のインデックス
	q = Q.size()-1;
	p = P.size()-1;
	while( 0<=q && 0 <= p) {
		if (P[p]==q) {
			Q[q] = p;
			q--;
		}
		p--;
	}
	for(i=0;i<Q.size();i++) cout << A[Q[i]] << " "; cout << endl;

}


/******************
 AC Library
 ******************/

//ユニオンファインド(dsu)
/*
C:\Users\DAI\Dropbox\O-82\Programing\Cprogram\dai\atcoder\ac-library\document_ja
無向グラフに対して、
・辺の追加
・2頂点が連結かの判定
また、内部的に各連結成分ごとに代表となる頂点を１つ持っています。
辺の追加により連結成分がマージされる時、新たな代表元は元の連結成分の代表元のうちどちらかになります。

dsu d(int n)                   オブジェクト定義：n頂点0辺の無向グラフを作ります。
int d.merge(int a, int b)      辺 (a, b)を足します。a,bが連結だった場合はその代表元、非連結だった場合は新たな代表元を返します。
bool d.same(int a, int b)      頂点a,bが連結かどうかを返します。
int d.leader(int a)            頂点aの属する連結成分の代表元を返します。
int d.size(int a)              頂点aの属する連結成分のサイズを返します。
vector<vector<int>> d.groups() グラフを連結成分に分け、その情報を返します。返り値は「「一つの連結成分の頂点番号のリスト」のリスト」

例
N頂点0辺の無向グラフにQ個のクエリが飛んできます。処理してください。
0 u v: 辺(u,v)を追加する。
1 u v: u,v が連結ならば1、そうでないなら0を出力する。
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    dsu d(n);
    for (int i = 0; i < q; i++) {
        int t, u, v;
        scanf("%d %d %d", &t, &u, &v);
        if (t == 0) {
            d.merge(u, v);
        } else {
            if (d.same(u, v)) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        }
    }
    return 0;
}

//Fenwick Tree
//配列の要素の1点変更
//区間の要素の総和をO(logN)で求められる
//配列の更新とQueryが大量にあるケースに使用する

//セグメントツリー(Segtree)
//配列の区間の最大値、最小値、総和、などを求められる
//配列の更新とQueryが大量にあるケースに使用する

//遅延評価セグメントツリー(Lazy Segtree)
//セグメントツリーは更新が１か所にとどまるが、
//Lazy Segtreeは範囲指定で更新できる
// https://opt-cp.com/lazysegtree-aclpc-k/
// https://atcoder.jp/contests/practice2/tasks/practice2_k
// https://algo-logic.info/segment-tree/#toc_id_4_2

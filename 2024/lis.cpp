#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
//最長増加部分列(LIS):O(N logN)
//in  A[] : 3 1 5 5 6 7 1 4  の最長増加部分列は、
//out X[] : 1 1 2 2 3 4 4 4  厳密増加 1 5 6 7
//out X[] : 1 1 2 3 4 5 5 5  広義増加 1 5 5 6 7
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
		X[i] = T.size();		//要素ごとの左からの最長増加部分列

		cout << i << ":"; for(j=0;j<X.size();j++) cout << X[j] << " "; cout << endl;
		cout << i << ":"; for(j=0;j<T.size();j++) cout << T[j] << " "; cout << endl;
	}
	//最長増加部分列の長さ:T.size()
	cout << T.size() << endl;
	//最長増加部分列の表示
	vector<ll> Q(T.size());
	int q = Q.size()-1;
	int p = P.size()-1;
	while( 0<=q && 0 <= p) {
		if (P[p]==q) {
			Q[q] = p;
			q--;
		}
		p--;
	}
	for(i=0;i<Q.size();i++) cout << A[Q[i]] << " "; cout << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),X(n);
	for(i=0;i<n;i++) cin >> A[i];
	vector<ll>	T;
	for(i=0;i<n;i++) {
		//厳密に増加する最長増加部分列
		auto it = lower_bound(T.begin() , T.end() , A[i]);
		//広義の最長増加部分列
		//auto it = upper_bound(T.begin() , T.end() , A[i]);
		if (it == T.end()) T.push_back(A[i]);
		else *it = A[i];
		X[i] = T.size();		//要素ごとの左からの最長増加部分列
	}
	for(i=0;i<n;i++) cout << X[i] << " ";
	cout << endl;
	return 0;
}

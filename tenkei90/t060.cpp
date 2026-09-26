#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
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
		//it = upper_bound(T.begin() , T.end() , A[i]);
		if (it == T.end()) T.push_back(A[i]);
		else *it = A[i];
		X[i] = T.size();		//要素ごとの左からの最長増加部分列
	}

	vector<ll>	Y(n);
	vector<ll>	U;
	reverse(A.begin() , A.end());
	for(i=0;i<n;i++) {
		auto it = lower_bound(U.begin() , U.end() , A[i]);
		if (it == U.end()) U.push_back(A[i]);
		else *it = A[i];
		Y[i] = U.size();		//要素ごとの左からの最長増加部分列
	}
	reverse(Y.begin() , Y.end());
	//for(i=0;i<n;i++) cout << X[i] << " ";
	//cout << endl;
	//for(i=0;i<n;i++) cout << Y[i] << " ";
	//cout << endl;
	for(i=0;i<n;i++) {
		ans = max(ans , X[i]+Y[i]-1);
	}
	cout << ans << endl;
	return 0;
}

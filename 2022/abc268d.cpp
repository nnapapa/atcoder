#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll n,m;
string ans = "-1";
vector<string> S(8,""),T(100000,"");
void makeuser(string st, ll idx) {
	if (ans!="-1") return;
	if (st.size()>16) return;
	//cout << "->" << st << endl;
	if (idx==n && st.size()>=3 && binary_search(T.begin(),T.begin()+m,st)==false) {
		ans = st;
		return;
	} 
	if (idx==n) return;
	while(st.size()<=14) {
		st += "_";
		makeuser(st+S[idx],idx+1);
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,t,q,r,v,w,x,y,z;
	cin >> n >> m;
	for(i=0;i<n;i++) cin >> S[i];
	for(i=0;i<m;i++) cin >> T[i];
	sort(S.begin(), S.begin()+n);
	sort(T.begin(), T.begin()+m);

  do {
		makeuser(S[0],1);
  } while (next_permutation(S.begin(), S.begin()+n));
	cout << ans << endl;
	return 0;
}

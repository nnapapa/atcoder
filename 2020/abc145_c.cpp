//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

ll		n , cnt;
double 	ans = 0;
vector<vector<double>>	disp(8 , vector<double>(8));

double calc(string s) {
	double ret = 0;
	for(int i=1;i<s.size();i++) {
		ret += disp[s[i-1]-'0'][s[i]-'0'];
	}
	return ret;
}
void makejyunro(ll zan , string s) {
	//cout << "makejyunro "<< zan << " " << s << endl;
	if (zan==0) {
		//cout << s << " " << calc(s) << endl;
		ans += calc(s);
		cnt++;
		return;
	}
	ll bit = 0;
	for(int i=0;i<s.size();i++) {
		bit |= 1 << (s[i]-'0');
	}
	for(int i=0;i<n;i++) {
		if ( (bit & (1<<i)) == 0) {
			char c = i+'0';
			makejyunro(zan-1,s+c);
		}
	}
}
int main() {
	ll		a,b,c,h,i,j,k,l,m,x,y;
	string	s;
	cin >> n;
	vector<ll>	xx(n),yy(n);
	for(i=0;i<n;i++) cin >> xx[i] >> yy[i];
	for(i=0;i<n;i++) {
		xx[i] += 1000;
		yy[i] += 1000;
	}

	for(i=0;i<n;i++) for(j=0;j<n;j++) {
		if (i==j) continue;
		disp[i][j] = sqrt( (xx[i]-xx[j])*(xx[i]-xx[j]) + (yy[i]-yy[j])*(yy[i]-yy[j]) );
	}

	makejyunro(n , s);

	printf("%.10f\n", ans/cnt);
	//cout << ans << endl;
	return 0;
}

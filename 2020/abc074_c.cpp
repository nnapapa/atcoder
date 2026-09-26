#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll		a,b,c,d,e,f,total=0,sugar=0;
double	noudo = 0;
ll	memo[3001][3001] = {0};
void calc(ll t, ll s) {
	double	n;
	if (memo[t][s]) return;
	if (t+100*a<=f) calc(t+100*a,s);
	if (t+100*b<=f) calc(t+100*b,s);
	if (t-s>0) {
		if (t+c<=f && (t-s)/100*e>=s+c) {
			if (noudo < 100*(s+c)/(double)(t+c)) {
				noudo = 100*(s+c)/(double)(t+c);
				total = t+c;
				sugar = s+c;
			}
			calc(t+c,s+c);
		}
		if (t+d<=f && (t-s)/100*e>=s+d) {
			if (noudo < 100*(s+d)/(double)(t+d)) {
				noudo = 100*(s+d)/(double)(t+d);
				total = t+d;
				sugar = s+d;
			}
			calc(t+d,s+d);
		}
	}

	memo[t][s] = 1;
}

int main() {
	cin >> a >> b >> c >> d >> e >> f;
	calc(0,0);
	if (total==0 && sugar==0) total = 100*a;
	cout << total << " " << sugar << endl;
	return 0;
}

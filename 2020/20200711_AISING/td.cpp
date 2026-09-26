//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = int;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,p,pc,np,h,i,j,k,l,m,n,y;
	ll		ans = 0;
	string	x,xx;
	cin >> n >> x;
	vector<ll> pcm(n),pcp(n);
	pc=0;
	for(i=0;i<n;i++) if (x[i]=='1') pc++;
	if (pc>1) pcm[n-1] = 1 % (pc-1);
	else pcm[n-1] = 0;
	pcp[n-1] = 1 % (pc+1);
	for(i=n-2;i>=0;i--) {
		if (pc>1) pcm[i] = (pcm[i+1]*2)%(pc-1);
		else pcm[i] = 0;
		pcp[i] = (pcp[i+1]*2)%(pc+1);
	}
	a = b = 0;
	for(i=n-1;i>=0;i--) {
		if (x[i]=='1') {
			a+=pcm[i];
			if (pc>1) a %= pc-1;
			b+=pcp[i];
			b %= pc+1;
		}
	}
	
//printf("pc=%d a=%d b=%d\n",pc , a , b);
	for(i=0;i<n;i++) {
		ans=0;
		if (x[i]=='0') {
			p = pc+1;
			np = (b + pcp[i])%p;
		} else {
			p = pc-1;
			if (p!=0) np = (a + p - pcm[i])%p;
			else np = 0;
		}
		if (p!=0) ans++;

//printf("p=%d np=%d\n",p,np);

		while(np!=0) {
			ans++;
			p = __builtin_popcount(np);
			np = np % p;
		}

		cout << ans << endl;
	}
	return 0;
}

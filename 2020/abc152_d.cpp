//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	int		l,r,a,b,c,i,j,k,n,m,x,y,ans = 0;
	cin >> n;

	int keta = -1;
	a = b = n;
	while(a>0) {
		keta++;
		b = a;			//最上位桁の数
		a /= 10;
	}
	int bb = b;
	for(i=0;i<keta;i++) bb *= 10;
//printf("keta %d b %d bb %d\n",keta,b,bb);

	for(i=1;i<=n;i++) {
		a = i;
		if (a%10 == 0 ) continue;
		if (a > 10) {
			r = a % 10;
			while(a>=10) {
				a /= 10;
			}
			l = a;
		} else {
			r = l = a;
		}
		
		if (l==r) ans++;	//1桁のケース
		//printf(">> l r i:%d %d %d\n",l,r,i);

		vector<int> cnt;
		cnt = { 1 , 10 , 100 , 1000 , 10000 };
		
		for(j=0;j<keta;j++) {
			x = r*10;
			if (j==keta-1 && r>b) break;
			for(k=0;k<j;k++) x = (x+9)*10;
			x += l;
			//printf("j x:%d %d\n",j,x);
			if (n>=x) {
				ans += cnt[j];
			} else if (j>0) {
				while(n<x) x -= 10;
				//printf("x bb : %d %d\n",x,bb);
				if ( x >= bb) ans += (x / 10) % cnt[j] + 1;
			}

		}
		//cout << i << ':' << ans << endl;
	}
	cout << ans << endl;
	return 0;
}

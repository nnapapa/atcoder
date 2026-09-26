#include <bits/stdc++.h>
using namespace std;

int kai(int n){
	int a = 1;
	for( int i=1; i<=n; i++) a *= i;
	return a;
}

vector<int> pp(10 , 100);
vector<int> qq(10 , 100);

int jyuni_pp(int n, int m) {
	int i;
	sort(pp.begin(),pp.end());
	for(i=0; i<8; i++) {
		if (pp[i] == m) {
			pp[i] = 100;
			break;
		}
	}
	//printf("%d %d %d %d %d\n",pp[0],pp[1],pp[2],pp[3]);
	//cout << "i:" << i << endl;
	return i;
}

int jyuni_qq(int n, int m) {
	int i;
	sort(qq.begin(),qq.end());
	for(i=0; i<8; i++) {
		if (qq[i] == m) {
			qq[i] = 100;
			break;
		}
	}

	return i;
}


int main() {
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n;
	
	vector<int>	p(10,100);
	vector<int> q(10,100);

	for(i=0;i<n;i++) cin >> p[i];
	for(i=0;i<n;i++) cin >> q[i];
	
	for(i=0;i<n;i++) {
		pp[i] = p[i];
		qq[i] = q[i];
	}
	
	
	x = y = 0;
	for(i=0;i<n;i++) {
		x += jyuni_pp(n, p[i]) * kai(n-i-1);
		y += jyuni_qq(n, q[i]) * kai(n-i-1);
		//printf("x: %d\n",x);
		//printf("y: %d\n",y);
	}
	if (x > y) {
		ans = x - y;
	} else {
		ans = y - x;
	}

	cout << ans << endl;
	
}

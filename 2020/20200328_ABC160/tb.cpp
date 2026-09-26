#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff

int main() {
	int		i,j,k,n,m,x,y,ans = 0;
	int		tmp = INF;

	cin >> x;

	i = x / 500;
	x = x % 500;

	j = x / 5;

	cout << i*1000+j*5 << endl;


}

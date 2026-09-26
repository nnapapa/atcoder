#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n;
	
	vector<int>	aa(n,-1);  	/* n個の配列 -1で初期化済み -1省略時は0初期化*/
	vector<int> ab = { 1,2,3 }; /* 3個の配列。値は1,2,3 */


	cin >> str;
	
	ab.push_back(5);  /* 配列を最後に1個追加 値は5 */

	cout << str << endl;
	
	cout << ab[3] << endl;

}

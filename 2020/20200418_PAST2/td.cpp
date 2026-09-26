#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	cin >> str;

	vector<int> a1(26);
	for(i=0;i<str.size();i++) {
		a1[ str[i] - 'a' ] = 1;
	}
	ans = 1;	// .
	for(i=0;i<26;i++) {
		if (a1[i]) ans++;
	}

	if (str.size()==1) {
		cout << ans << endl;
		return 0;
	}

	vector<vector<int>> a2(26 , vector<int>(26));
	for(i=0;i<str.size()-1;i++) {
		a2[ str[i] - 'a' ][ str[i+1] - 'a' ] = 1;
	}
	for(i=0;i<26;i++) for(j=0;j<26;j++) if (a2[i][j]) ans++;
	
	vector<int> a3(26);
	for(i=0;i<str.size()-1;i++) {
		a3[ str[i] - 'a' ] = 1;
	}
	for(i=0;i<26;i++) {
		if (a3[i]) ans++;
	}	
	vector<int> a4(26);
	for(i=1;i<str.size();i++) {
		a4[ str[i] - 'a' ] = 1;
	}
	for(i=0;i<26;i++) {
		if (a4[i]) ans++;
	}
	ans++;	// ..
	if (str.size()==2) {
		cout << ans << endl;
		return 0;
	}

	// str.size() >= 3
	vector<vector<vector<int>>> a5(26 , vector<vector<int>>(26 , vector<int>(26)));
	for(i=0;i<str.size()-2;i++) {
		a5[ str[i] - 'a' ][ str[i+1] - 'a' ][ str[i+2] - 'a' ] = 1;
	}
	for(i=0;i<26;i++) for(j=0;j<26;j++) for(k=0;k<26;k++) if (a5[i][j][k]) ans++;

	// X..
	vector<int> a6(26);
	for(i=0;i<str.size()-2;i++) a6[ str[i] - 'a' ] = 1;
	for(i=0;i<26;i++) if (a6[i]) ans++;
	// .X.
	vector<int> a7(26);
	for(i=1;i<str.size()-1;i++) a7[ str[i] - 'a' ] = 1;
	for(i=0;i<26;i++) if (a7[i]) ans++;
	// ..X
	vector<int> a8(26);
	for(i=2;i<str.size();i++) a8[ str[i] - 'a' ] = 1;
	for(i=0;i<26;i++) if (a8[i]) ans++;	

	// .XY
	vector<vector<int>> a9(26 , vector<int>(26));
	for(i=0;i<str.size()-2;i++) {
		a9[ str[i+1] - 'a' ][ str[i+2] - 'a' ] = 1;
	}
	for(i=0;i<26;i++) for(j=0;j<26;j++) if (a9[i][j]) ans++;
	// X.Y
	vector<vector<int>> aa(26 , vector<int>(26));
	for(i=0;i<str.size()-2;i++) {
		aa[ str[i] - 'a' ][ str[i+2] - 'a' ] = 1;
	}
	for(i=0;i<26;i++) for(j=0;j<26;j++) if (aa[i][j]) ans++;
	// XY.
	vector<vector<int>> ab(26 , vector<int>(26));
	for(i=0;i<str.size()-2;i++) {
		ab[ str[i] - 'a' ][ str[i+1] - 'a' ] = 1;
	}
	for(i=0;i<26;i++) for(j=0;j<26;j++) if (ab[i][j]) ans++;

	ans++;	// ...
	cout << ans << endl;

}

#include <bits/stdc++.h>
using namespace std;


int	h,w;

int maze(int sh1, int sw1,vector<vector<int>> S) {
	int i,j,sh,sw;
	vector<vector<int>> s(h+2, vector<int>(w+2));
	
	s = S;
	
	s[sh1][sw1] = 0;
	i = 0;
	
	while(1) {
		j = 0;
		for(sh=1;sh<=h;sh++) for(sw=1;sw<=w;sw++) {
			if (s[sh][sw] == i) {
				if (s[sh-1][sw  ] == -2) { s[sh-1][sw] = i+1; j=1; }
				if (s[sh+1][sw  ] == -2) { s[sh+1][sw] = i+1; j=1; }
				if (s[sh  ][sw-1] == -2) { s[sh][sw-1] = i+1; j=1; }
				if (s[sh  ][sw+1] == -2) { s[sh][sw+1] = i+1; j=1; }
			}
		}
		if (j==0) break;
		i++;
	}
	/*
	cout << endl;
	for(sh=1;sh<=h;sh++) {
		for(sw=1;sw<=w;sw++) {
			cout << (int)s[sh][sw];
		}
		cout << endl;
	}
	*/
	return i;
}

int main() {
	int		i,j,k,n,m,x,y,sh,sw,gh,gw,ans = 0;
	char	c;
	
	cin >> h >> w;
	
	vector<vector<int>> S(h+2, vector<int>(w+2));
	
	for(i=1;i<=h;i++) for(j=1;j<=w;j++) {
		cin >> c;
		if (c == '#') S[i][j] = -1;
		else S[i][j] = -2;
	}
	//printf("START\n");
	for(sh=1;sh<=h;sh++) for(sw=1;sw<=w;sw++) {
	//for(sh=1;sh<=1;sh++) for(sw=1;sw<=1;sw++) {
		if (S[sh][sw] == -1) continue;
		//printf("s(%d,%d) g(%d,%d)\n",sh,sw,gh,gw);
		ans = max(ans, maze(sh,sw,S) );
	}
	

	cout << ans << endl;

}

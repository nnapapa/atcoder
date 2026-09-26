//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	int		N,X,Y;
	string	s;
	cin >> N >> X >> Y;
	vector<vector<int>>	maze(500 , vector<int>(500 , INF)); // 0,0 = 250,250
	maze[250][250] = 0;
	queue<pair<int,int>> que;
	int dx[6] = {1,0,-1,+1,-1,0}, dy[6] = {1,1,1,0,0,-1};

	for(i=0;i<N;i++) {
		cin >> x >> y;
		maze[x+250][y+250] = -1;
	}

	que.push(make_pair(0,0));
	while(que.size()) {
		tie(x,y) = que.front();
		que.pop();
		if (x==X && y==Y) break;
		for(i=0;i<6;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (-201<=nx && nx<=201 && -201<=ny && ny<=201 && maze[nx+250][ny+250]!=-1 && maze[nx+250][ny+250]==INF) {
				que.push(make_pair(nx,ny));
				maze[nx+250][ny+250] = maze[x+250][y+250] + 1;
			}
		}
	}
	ans = maze[X+250][Y+250];
	if (ans == INF) ans = -1;
	cout << ans << endl;
	return 0;
}

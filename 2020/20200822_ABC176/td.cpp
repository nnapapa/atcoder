//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL
#define chmin(xx, yy) (xx) = min((xx) , (yy))
int main() {
	ll		a,b,c,d,w,h,i,j,k,l,m,n,x,y,z,ch,cw,dh,dw;
	ll		ans = 0;
	string	ss;
	cin >> h >> w >> ch >> cw >> dh >> dw;
	vector<vector<char>>	s(h+2 , vector<char>(w+2,'#'));

	for(i=1;i<=h;i++) {
		cin >> ss;
		for(j=1;j<=ss.size();j++) s[i][j] = ss[j-1];
	}
	
	/*//dbg
	for(i=0;i<=h+1;i++) {
		for(j=0;j<=w+1;j++) cout << s[i][j];
		cout << endl;
	}
	*/
	
	
	vector<vector<ll>>	wp(h+2 , vector<ll>(w+2,INFL));
	queue<pair<ll,ll>> que0,que1;

	que0.push(make_pair(ch,cw));
	que1.push(make_pair(ch,cw));
	wp[ch][cw] = 0;
	while (que0.size() || que1.size()) {
		while(que0.size()) {
			pair<ll,ll> p = que0.front();
			que0.pop();
			x = p.first;
			y = p.second;
			if (x==dh && y == dw) break;

			if (x>1) if (s[x-1][y]=='.') { if (wp[x-1][y]==INFL) que0.push(make_pair(x-1,y)); que1.push(make_pair(x-1,y)); wp[x-1][y] = wp[x][y]; }
			if (x<h) if (s[x+1][y]=='.') { if (wp[x+1][y]==INFL) que0.push(make_pair(x+1,y)); que1.push(make_pair(x+1,y)); wp[x+1][y] = wp[x][y]; }
			if (y>1) if (s[x][y-1]=='.') { if (wp[x][y-1]==INFL) que0.push(make_pair(x,y-1)); que1.push(make_pair(x,y-1)); wp[x][y-1] = wp[x][y]; }
			if (y<w) if (s[x][y+1]=='.') { if (wp[x][y+1]==INFL) que0.push(make_pair(x,y+1)); que1.push(make_pair(x,y+1)); wp[x][y+1] = wp[x][y]; }
		}

		if (x==dh && y == dw) break;

		if (que1.size()) {
			pair<ll,ll> p = que1.front();
			que1.pop();
			x = p.first;
			y = p.second;
			//cout << "que1 " << x << ' ' << y << endl;
			
			for(i=x-2;i<=x+2;i++) {
				if (i<1 || i>h) continue;
				for(j=y-2;j<=y+2;j++) {
					if (j<1 || j>w) continue;
					if (i==x && j==y) continue;
					//cout << "que1 i j " << i << ' ' << j << endl;
					//if (i==2 && j==5) {
					//	cout << s[i][j] << ' ' << wp[i][j] << endl;
					//}
					if (s[i][j]=='.') if (wp[i][j]==INFL) { que0.push(make_pair(i,j)); que1.push(make_pair(i,j)); wp[i][j] = wp[x][y]+1;}
				}
			}
		}


	}

	/*//dbg
	for(i=1;i<=h;i++) {
		for(j=1;j<=w;j++) {
			if (wp[i][j]==INFL) wp[i][j] = -1;
			cout << wp[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	*/
	//}

	if (wp[dh][dw]==INFL) wp[dh][dw] = -1;
	cout << wp[dh][dw] << endl;
	return 0;
}

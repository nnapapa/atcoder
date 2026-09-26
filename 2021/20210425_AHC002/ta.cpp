#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = int;
#define INFL 0x6fffffffffffffffLL
vector<vector<ll>> t(50,vector<ll>(50)),p(50,vector<ll>(50)),g(50,vector<ll>(50));
ll		SI,SJ,si,sj,ct,x;
char	md0,md1,md2;
string ans;

void ippo(ll i, ll j) {
	g[i][j] = 0;
	if (i>0)  if (t[i][j]==t[i-1][j]) g[i-1][j] = 0;
	if (i<49) if (t[i][j]==t[i+1][j]) g[i+1][j] = 0;
	if (j>0)  if (t[i][j]==t[i][j-1]) g[i][j-1] = 0;
	if (j<49) if (t[i][j]==t[i][j+1]) g[i][j+1] = 0;
	if (si==i) {
		if (sj<j) ans += 'R';
		if (sj>j) ans += 'L';
	}
	if (sj==j) {
		if (si<i) ans += 'D';
		if (si>i) ans += 'U';
	}
	si = i; sj = j;
}
vector<vector<ll>> pm;
void makepm() {
	for(int i=1;i<50;i++) {
		for(int j=0;j<50;j++) {
			for(int k=43;k<48;k++)
			pm.push_back({49-j,j,i,i,49-j,j,i,i , k});
		}
	}
	for(int i=1;i<40;i++) {
		for(int j=0;j<45;j++) {
			for(int k=43;k<48;k++)
			pm.push_back({49-j,j+5,i,i+10,49-j,j+5,i,i+10 , k});
		}
	}
	for(int i=1;i<40;i++) {
		for(int j=0;j<45;j++) {
			for(int k=43;k<48;k++)
			pm.push_back({49-j+5,j,i+10,i,49-j+5,j,i+10,i , k});
		}
	}
	for(int i=1;i<20;i++) {
		for(int j=0;j<20;j++) {
			for(int k=43;k<48;k++)
			pm.push_back({49-j,j+20,i,i+20,49-j,j+20,i,i+20 , k});
		}
	}
	for(int i=1;i<20;i++) {
		for(int j=0;j<20;j++) {
			for(int k=43;k<48;k++)
			pm.push_back({49-j+20,j,i+20,i,49-j+20,j,i+20,i , k});
		}
	}
	for(int i=1;i<20;i++) {
		for(int j=0;j<20;j++) {
			for(int k=1;k<6;k++) {
				pm.push_back({49-j,j+k*4,i,i+k*4,49-j,j+k*4,i,i+k*4 , 45});
			}
		}
	}
	for(int i=1;i<20;i++) {
		for(int j=0;j<20;j++) {
			for(int k=1;k<6;k++) {
				pm.push_back({49-j+k*4,j,i+k*4,i,49-j+k*4,j,i+k*4,i , 45});
			}
		}
	}
}
void chknext(ll *i , ll *j) {
	vector<ll> ret(2);
	ret[0]=si; ret[1]=sj;
	if (md0=='D') {
		if (si<49&&g[si+1][sj]) ret[0]++;
		else if ((md2=='L')&&sj>0&&g[si][sj-1]) {ret[1]--; if (sj<pm[x][8]) md2='R';else md2='L';}
		else if (sj<49&&g[si][sj+1]) {ret[1]++; if (sj>50-pm[x][8]) md2='L';else md2='R';}
		else if (sj>0&&g[si][sj-1]) {ret[1]--; if (sj<pm[x][8]) md2='R';else md2='L';}
		else if (si>0&&g[si-1][sj]) ret[0]--;
		else ret[0]=-1;
	} else if (md0=='U') {
		if (si>0&&g[si-1][sj]) ret[0]--;
		else if ((md2=='L')&&sj>0&&g[si][sj-1]) {ret[1]--; if (sj<pm[x][8]) md2='R'; else md2='L';}
		else if (sj<49&&g[si][sj+1]) {ret[1]++; if (sj>50-pm[x][8]) md2='L';else md2='R';}
		else if (sj>0&&g[si][sj-1]) {ret[1]--; if (sj<pm[x][8]) md2='R';else md2='L';}
		else if (si<49&&g[si+1][sj]) ret[0]++;
		else ret[0]=-1;		
	} else if (md0=='L') {
		if (sj>0&&g[si][sj-1]) ret[1]--;
		else if ((md2=='U')&&si>0&&g[si-1][sj]) {ret[0]--; if (si<pm[x][8]) md2='D';else md2='U';}
		else if (si<49&&g[si+1][sj]) {ret[0]++; if (si>50-pm[x][8]) md2='U';else md2='D';}
		else if (si>0&&g[si-1][sj]) {ret[0]--; if (si<pm[x][8]) md2='D';else md2='U';}
		else if (sj<49&&g[si][sj+1]) ret[1]++;
		else ret[0]=-1;		
	} else {
		if (sj<49&&g[si][sj+1]) ret[1]++;
		else if ((md2=='U')&&si>0&&g[si-1][sj]) {ret[0]--; if (si<pm[x][8]) md2='D';else md2='U';}
		else if (si<49&&g[si+1][sj]) {ret[0]++; if (si>50-pm[x][8]) md2='U';else md2='D';}
		else if (si>0&&g[si-1][sj]) {ret[0]--; if (si<pm[x][8]) md2='D';else md2='U';}
		else if (sj>0&&g[si][sj-1]) ret[1]--;
		else ret[0]=-1;
	}
	*i = ret[0];
	*j = ret[1];
	if (*i==-1) {
		//cout << md0 << md1 << md2 << endl;
	}
	return;
}


void chkmd() {
	if ((md0=='D')&&(si>pm[x][0])) {
		md0 = md1;
		md1 = md2 = 'U';
	}
	if ((md0=='U')&&(si<pm[x][1])) {
		md0 = md1;
		md1 = md2 = 'D';
	}
	if ((md0=='R')||(md0=='L')) ct++;
	if ((md0=='R')&&(ct>pm[x][2])) {
		ct = 0;
		md0 = md1;
		md1 = md2 = 'R';
	}
	if ((md0=='L')&&(ct>pm[x][3])) {
		ct = 0;
		md0 = md1;
		md1 = md2 = 'L';
	}
}
void chkmd1() {
	if ((md0=='R')&&(sj>pm[x][4])) {
		md0 = md1;
		md1 = md2 = 'L';
	}
	if ((md0=='L')&&(sj<pm[x][5])) {
		md0 = md1;
		md1 = md2 = 'R';
	}
	if ((md0=='D')||(md0=='U')) ct++;
	if ((md0=='D')&&(ct>pm[x][6])) {
		ct = 0;
		md0 = md1;
		md1 = md2 = 'D';
	}
	if ((md0=='U')&&(ct>pm[x][7])) {
		ct = 0;
		md0 = md1;
		md1 = md2 = 'U';
	}
}
int score() {
	int ret = 0;
	int x , y;
	x = SI;
	y = SJ;
	ret = p[x][y];
	for(int i=0;i<ans.size();i++) {
		if (ans[i]=='U') x--;
		if (ans[i]=='D') x++;
		if (ans[i]=='L') y--;
		if (ans[i]=='R') y++;
		ret += p[x][y];
	}
	return ret;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,y,z;
	string s;
	cin >> SI >> SJ;
	for(i=0;i<50;i++) for(j=0;j<50;j++) cin >> t[i][j];
	for(i=0;i<50;i++) for(j=0;j<50;j++) cin >> p[i][j];

	makepm();

	vector<vector<char>> md(4,vector<char>(2));
	md = { {'D','R'} , {'D','L'} , {'U','R'} , {'U','L'} };

	for(x=0;x<pm.size();x++) {
		for(y=0;y<4;y++) {
			for(i=0;i<50;i++) for(j=0;j<50;j++) g[i][j] = 1;
			si = SI;
			sj = SJ;
			ippo(si,sj);
			ans = "";
			ct = 0;
			md0 = md[y][0]; md1 = md2 = md[y][1];
			while(1) {
				chknext(&i,&j);
				if (i==-1) break;
				ippo(i,j);
				chkmd();
			}
			a = score();
			//cout << a << endl;
			if (a>b) {
				s = ans;
				b = a;
				c = x;
			}
		}
		for(y=0;y<4;y++) {
			for(i=0;i<50;i++) for(j=0;j<50;j++) g[i][j] = 1;
			si = SI;
			sj = SJ;
			ippo(si,sj);
			ans = "";
			ct = 0;
			md0 = md[y][1]; md1 = md2 = md[y][0];
			while(1) {
				chknext(&i,&j);
				if (i==-1) break;
				ippo(i,j);
				chkmd1();
			}
			a = score();
			//cout << a << endl;
			if (a>b) {
				s = ans;
				b = a;
				c = x;
			}
		}
	}
	//cout << b << " " << c << endl;
	//for(i=0;i<pm[c].size();i++) cout << pm[c][i] << " ";
	//cout << endl;
	cout << s << endl;
	return 0;
}

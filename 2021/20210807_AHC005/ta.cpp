#include <bits/stdc++.h>
#include <ctime>
#include <chrono>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll si,sj,n;
vector<string>	C(70);
vector<vector<ll>>	ok(70 , vector<ll>(70,0));
string ans;
ll di[4] = {1,0,-1,0} , dj[4] = {0,1,0,-1}; //Down,Right,Up,Left

void idou(ll ci, ll cj, ll ni, ll nj) {
	if (ci>ni) for(ll i=ci;i>ni;i--) ans += 'U';
	if (ci<ni) for(ll i=ci;i<ni;i++) ans += 'D';
	if (cj>nj) for(ll j=cj;j>nj;j--) ans += 'L';
	if (cj<nj) for(ll j=cj;j<nj;j++) ans += 'R';
	//printf("idou:%d %d %d %d:",ci,cj,ni,nj);
	//cout << ans << endl;
}
void calc(ll ci, ll cj, ll dir, ll depth) {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,x,y,z,ii,jj;
	//printf("calc:%d %d %d %d\n",ci,cj,dir,depth);
	if (depth==20) return;
	//ok更新
	if (ok[ci][cj]==0) ok[ci][cj]=1;
	for(i=ci+1,j=cj;i<n;i++) { if (ok[i][j]==0) ok[i][j]=1; else break; }  //Down
	for(i=ci,j=cj+1;j<n;j++) { if (ok[i][j]==0) ok[i][j]=1; else break; }  //Right
	for(i=ci-1,j=cj;i>=0;i--) { if (ok[i][j]==0) ok[i][j]=1; else break; } //Up
	for(i=ci,j=cj-1;j>=0;j--) { if (ok[i][j]==0) ok[i][j]=1; else break; } //Left

	for(d=0;d<4;d++) {
		if (d==dir) continue;
		if (d==0 && ci<n-1) {//Down
			for(ii=ci+1,jj=cj;ii<n;ii++) { if (ok[ii][jj]==-1) break; }
			for(i==ii-1,j=cj;i>ci;i--) {
				if (j>0 && ok[i][j-1]!=-1) {idou(ci,cj,i,j); calc(i,j,0,depth+1); idou(i,j,ci,cj); break;}
				if (j<n-1 && ok[i][j+1]!=-1) {idou(ci,cj,i,j); calc(i,j,0,depth+1); idou(i,j,ci,cj); break;}
			}
		}
		if (d==1 && cj<n-1) {//Right
			for(ii=ci,jj=cj+1;jj<n;jj++) { if (ok[ii][jj]==-1) break; }
			for(i=ci,j=jj-1;j>cj;j--) { 
				if (i>0 && ok[i-1][j]!=-1) {idou(ci,cj,i,j); calc(i,j,1,depth+1); idou(i,j,ci,cj); break;}
				if (i<n-1 && ok[i+1][j]!=-1) {idou(ci,cj,i,j); calc(i,j,1,depth+1); idou(i,j,ci,cj); break;}
			}
		}
		if (d==2 && ci>0) {//Up
			for(ii=ci-1,jj=cj;ii>=0;ii--) { if (ok[ii][jj]==-1) break; }
			for(i=ii+1,j=cj;i<ci;i++) { 
				if (j>0 && ok[i][j-1]!=-1) {idou(ci,cj,i,j); calc(i,j,2,depth+1); idou(i,j,ci,cj); break;}
				if (j<n-1 && ok[i][j+1]!=-1) {idou(ci,cj,i,j); calc(i,j,2,depth+1); idou(i,j,ci,cj); break;}
			}
		}
		if (d==3 && cj>0) {//Left
			for(ii=ci,jj=cj-1;jj>=0;jj--) { if (ok[ii][jj]==-1) break; }
			for(i=ci,j=jj+1;j<n;j++) { 
				if (i>0 && ok[i-1][j]!=-1) {idou(ci,cj,i,j); calc(i,j,3,depth+1); idou(i,j,ci,cj); break;}
				if (i<n-1 && ok[i+1][j]!=-1) {idou(ci,cj,i,j); calc(i,j,3,depth+1); idou(i,j,ci,cj); break;}
			}
		}
	}
}



int main() {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,x,y,z;
	
	cin >> n >> si >> sj;

	for(i=0;i<n;i++) cin >> C[i];
	for(i=0;i<n;i++) for(j=0;j<n;j++) if (C[i][j]=='#') ok[i][j] = -1;

	calc(si,sj,-1,0);
	
	i=si;j=sj;
	for(a=0;a<ans.size();a++) {
		if (ans[a]=='D') i++;
		if (ans[a]=='U') i--;
		if (ans[a]=='R') j++;
		if (ans[a]=='L') j--;
		if (i<0 || j<0 || i==n || j==n) ans = "";
		else if (C[i][j]=='#') ans = "";
	}
	
	if (i!=si || j!=sj) ans = "";
	cout << ans << endl;
	//戻り

	return 0;
}

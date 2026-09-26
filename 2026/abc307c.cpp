#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	ll		ha,wa,hb,wb,hx,wx;
	cin >> ha >> wa;
	vector<string> A(ha);
	for(i=0;i<ha;i++) cin >> A[i];
	cin >> hb >> wb;
	vector<string> B(hb);
	for(i=0;i<hb;i++) cin >> B[i];
	cin >> hx >> wx;
	vector<string> X(hx);
	for(i=0;i<hx;i++) cin >> X[i];
	
	ll	hamn,hamx,wamn,wamx;
	hamn = wamn = INFL;
	hamx = wamx = 0;
	for(i=0;i<ha;i++) for(j=0;j<wa;j++) if (A[i][j]=='#') {
		hamn = min(hamn,i); hamx = max(hamx,i);
		wamn = min(wamn,j); wamx = max(wamx,j);
	}
	ll	hbmn,hbmx,wbmn,wbmx;
	hbmn = wbmn = INFL;
	hbmx = wbmx = 0;
	for(i=0;i<hb;i++) for(j=0;j<wb;j++) if (B[i][j]=='#') {
		hbmn = min(hbmn,i); hbmx = max(hbmx,i);
		wbmn = min(wbmn,j); wbmx = max(wbmx,j);
	}
	ll	hxmn,hxmx,wxmn,wxmx;
	hxmn = wxmn = INFL;
	hxmx = wxmx = 0;
	for(i=0;i<hx;i++) for(j=0;j<wx;j++) if (X[i][j]=='#') {
		hxmn = min(hxmn,i); hxmx = max(hxmx,i);
		wxmn = min(wxmn,j); wxmx = max(wxmx,j);
	}
	printf("%d %d %d %d  %d %d %d %d  %d %d %d %d\n",hamn,hamx,wamn,wamx,hbmn,hbmx,wbmn,wbmx,hxmn,hxmx,wxmn,wxmx);

	ha = hamx - hamn + 1;
	wa = wamx - wamn + 1;
	hb = hbmx - hbmn + 1;
	wb = wbmx - wbmn + 1;
	hx = hxmx - hxmn + 1;
	wx = wxmx - wxmn + 1;
	
	ll 	ia,ja,ib,jb,ix,jx;
	for(ia=0;ia<hx-ha;ia++) for(ja=0;ja<wx-wa;ja++) {
		for(ib=0;ib<hx-hb;ib++) for(jb=0;jb<wx-wb;jb++) {
			ans = 1;
			for(ix=hxmn;ix<hxmn+hx;ix++) for(jx=wxmn;jx<wxmn+wx;jx++) {
				if ((ia+hamn+ix>=A.size())&&(ja+wamn+jx>=A[0].size())) c = '.';
				else c = A[ia+hamn+ix][ja+wamn+jx];
				if ((ib+hbmn+ix>=B.size())&&(jb+wbmn+jx>=B[0].size())) d = '.';
				else d = B[ib+hbmn+ix][jb+wbmn+jx];
				if (X[ix][jx]=='#') {
					if (c=='.' && d=='.') ans = 0; 
				} else {
					if (c=='#' || d=='#') ans = 0;
				}
			}
			if (ans) {
				cout << "Yes\n";
				return 0;
			}
		}
	}
	cout << "No\n";
	return 0;
}

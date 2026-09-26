#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	vector<pair<ll,ll>>	xy,xy1;
	for(i=0;i<n;i++) {
		cin >> x >> y;
		xy.push_back(make_pair(x,y));
	}
	ll xmax=0;
	ll xmin=INFL;
	ll ymax=0;
	ll ymin=INFL;
	for(i=0;i<n;i++) {
		xmax = max(xmax , xy[i].first);
		xmin = min(xmin , xy[i].first);
		ymax = max(ymax , xy[i].second);
		ymin = min(ymin , xy[i].second);
	}
	ll xmax_ymax=0;
	ll xmax_ymin=INFL;
	ll xmin_ymax=0;
	ll xmin_ymin=INFL;
	ll ymax_xmax=0;
	ll ymax_xmin=INFL;
	ll ymin_xmax=0;
	ll ymin_xmin=INFL;
	for(i=0;i<n;i++) {
		if (xy[i].first==xmax) {
			xmax_ymax = max(xmax_ymax , xy[i].second);
			xmax_ymin = min(xmax_ymin , xy[i].second);
		}
		if (xy[i].first==xmin) {
			xmin_ymax = max(xmin_ymax , xy[i].second);
			xmin_ymin = min(xmin_ymin , xy[i].second);
		}
		if (xy[i].second==ymax) {
			ymax_xmax = max(ymax_xmax , xy[i].first);
			ymax_xmin = min(ymax_xmin , xy[i].first);
		}
		if (xy[i].second==ymin) {
			ymin_xmax = max(ymin_xmax , xy[i].first);
			ymin_xmin = min(ymin_xmin , xy[i].first);
		}
	}
	xy1.push_back(make_pair(xmax,xmax_ymax));
	xy1.push_back(make_pair(xmax,xmax_ymin));
	xy1.push_back(make_pair(xmin,xmin_ymax));
	xy1.push_back(make_pair(xmin,xmin_ymin));
	xy1.push_back(make_pair(ymax_xmax,ymax));
	xy1.push_back(make_pair(ymax_xmin,ymax));
	xy1.push_back(make_pair(ymin_xmax,ymin));
	xy1.push_back(make_pair(ymin_xmin,ymin));

	for(i=0;i<7;i++) for(j=i+1;j<8;j++) {
		ans = max(ans , abs(xy1[i].first-xy1[j].first) + abs(xy1[i].second-xy1[j].second) );
	}
	cout << ans << endl;
	return 0;
}

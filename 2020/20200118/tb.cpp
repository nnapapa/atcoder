#include <bits/stdc++.h>
using namespace std;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    } else {
    	return a.first < b.first;
    }
}

int main() {
	int		a,b,c,i,j,k,n,m,x,l,y,ans = 0;
	
	cin >> n;	
	
	vector<pair<int , int>> p(n);

	for(i=0; i<n; i++) {
		cin >> x >> l;
		p[i] = make_pair(x-l, x+l);
	}
	
	sort(p.begin(), p.end(), compare_by_b);
	
	j = p[0].second;
	ans = n;
	for(i=1;i<n;i++) {
		if (j > p[i].first) {
			ans--;
		} else {
			j = p[i].second;
		}
	}
	
	cout << ans << endl;


}

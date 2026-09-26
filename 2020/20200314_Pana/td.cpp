#include <bits/stdc++.h>
using namespace std;


char p[11]   = { 0 };
int		n;

void calc(int idx, char *s) {
	char str[11] = {0};
	char  mm = 0;

	for (int i=0; i<=idx; i++) {
		str[i] = s[i];
		mm = max(mm,str[i]);
	}
	
	if (idx == n-1) {
		for (int i=0; i<n; i++) str[i] += 'a';
		cout << str << endl;
		return;
	}
	for (int i=0; i<=mm+1; i++) {
		str[idx+1] = i;
		calc(idx+1,str);
	}
}
	

int main() {
	int		a,b,c,i,j,k,m,x,y,ans = 0;
	char str[11] = { 0 };
	
	cin >> n;

	calc(0 , str);


}

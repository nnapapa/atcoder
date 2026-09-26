#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<int> al(26,0),al0(26,0);
ll ans1,ans2,ans3;
string s1,s2,s3;
map<char,int> alnum;
int s2i(string s) {
	int ret = 0;
	for(int i=0;i<s.size();i++) {
		ret = ret*10 + alnum[s[i]];
	}
	return ret;
}
void calc(int use, int zan, char c) {
	if (ans1!=0) return;
	if (zan==0) {
		//check
		if (s2i(s1)+s2i(s2)==s2i(s3)) {
			ans1=s2i(s1);
			ans2=s2i(s2);
			ans3=s2i(s3);
		}
		return;
	}

	while(c<='z' && al[c-'a']==0) c++;
	if (c>'z') return;
	
	for(int i=0;i<=9;i++) {
		if (i==0 && al0[c-'a']==1) continue;
		if (use & (1<<i)) continue;
		alnum[c]=i;
		calc(use|(1<<i) , zan-1 , c+1);
	}
	
	return;
}



int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ans1 = 0;
	cin >> s1 >> s2 >> s3;

	for(i=0;i<s1.size();i++) al[s1[i]-'a'] = 1;
	for(i=0;i<s2.size();i++) al[s2[i]-'a'] = 1;
	for(i=0;i<s3.size();i++) al[s3[i]-'a'] = 1;
	al0[s1[0]-'a'] = 1;
	al0[s2[0]-'a'] = 1;
	al0[s3[0]-'a'] = 1;
	n = 0;
	for(i=0;i<26;i++) if (al[i]) n++;
	if (n>10) {
		cout << "UNSOLVABLE" << endl;
		return 0;
	}
	for(char cc='a'; cc<='z';cc++) alnum[cc] = -1;
	calc(0,n,'a');

	if (ans1==0) {
		cout << "UNSOLVABLE" << endl;
	} else {
		cout << ans1 << endl;
		cout << ans2 << endl;
		cout << ans3 << endl;
	}
	return 0;
}

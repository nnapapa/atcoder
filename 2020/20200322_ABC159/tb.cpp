#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff

int main() {
	int		i,j,k,n,m,x,y,ans = 0;
	int		tmp = INF;
	string	str;
	
	char a[100] = {0};
	char b[100] = {0};
	char c[100] = {0};
	char d[100] = {0};
	char e[100] = {0};
	char f[100] = {0};

	
	cin >> str;
	
	n = str.size();

	for(i=0;i<(n-1)/2;i++) {
		a[i] = str[i];
	}
	
	for(i=(n-1)/2-1,j=0;i>=0;i--,j++) {
		b[j] = str[i];
	}

	for(i=(n+3)/2-1,j=0;i<n;i++,j++) {
		c[j] = str[i];
	}
	
	for(i=n-1,j=0;i>=(n+3)/2-1;i--,j++) {
		d[j] = str[i];
	}

	for(i=0,j=n-1;i<n;i++,j--) {
		e[i] = str[i];
		f[j] = str[i];
	}
	
	if ((strcmp(a,b)==0)&&(strcmp(c,d)==0)&&(strcmp(e,f)==0)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	

	/*
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

	cout << str << endl;
	*/
}

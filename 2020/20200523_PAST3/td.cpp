//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

string	s1,s2,s3,s4,s5;
//           0   1   2   3   4   5   6   7   8   9
//                       1   1   2   2   2   3   3
//           0...4...8...2...6...0...4...8...2...6...
string e1 = ".###..#..###.###.#.#.###.###.###.###.###.";
string e2 = ".#.#.##....#...#.#.#.#...#.....#.#.#.#.#.";
string e3 = ".#.#..#..###.###.###.###.###...#.###.###.";
string e4 = ".#.#..#..#.....#...#...#.#.#...#.#.#...#.";
string e5 = ".###.###.###.###...#.###.###...#.###.###.";

int check(int idx) {
	int ret = 0;
	int i;
	while(1) {
		bool ok = true;
		for(i=1; i<4; i++) if (s1[idx*4+i]!=e1[ret*4+i]) ok = false;
		for(i=1; i<4; i++) if (s2[idx*4+i]!=e2[ret*4+i]) ok = false;
		for(i=1; i<4; i++) if (s3[idx*4+i]!=e3[ret*4+i]) ok = false;
		for(i=1; i<4; i++) if (s4[idx*4+i]!=e4[ret*4+i]) ok = false;
		for(i=1; i<4; i++) if (s5[idx*4+i]!=e5[ret*4+i]) ok = false;
		if (ok) break;
		ret++;
	}
	return ret;

}

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	cin >> n;
	cin >> s1 >> s2 >> s3 >> s4 >> s5;

	for(i=0;i<n;i++) {
		cout << check(i);
	}
	cout << endl;

	return 0;
}

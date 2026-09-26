#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> d(k);
  for(int i=0; i<k; i++) cin >> d[i];

  while(true) {
    bool f = true;
    int  m = n;
    while (m > 0) {
      int mm = m % 10;
      m = m / 10;
      for(int i=0; i<k;i++) if (mm == d[i]) f = false;
    }
    if (f) break;
    n++;
  }
  cout << n << endl;
}

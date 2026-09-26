#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> A(2*n);
    for(int i = 0; i < 2*n; i++) {
        cin >> A[i];
    }
    // 位置配列
    vector<vector<int>> pos(n+1);
    for(int i = 0; i < 2*n; i++) {
        pos[A[i]].push_back(i);
    }

    set<pair<int,int>> st;
    // すべての隣接ペアをチェック
    for(int i = 0; i < 2*n - 1; i++) {
        int a = A[i], b = A[i+1];
        if(a == b) continue;
        // a,b のどちらかがすでに隣接しているなら skip
        if(pos[a][0] + 1 == pos[a][1]) continue;
        if(pos[b][0] + 1 == pos[b][1]) continue;

        vector<int> v = {pos[a][0], pos[a][1], pos[b][0], pos[b][1]};
        sort(v.begin(), v.end());
        if(v[0] + 1 == v[1] && v[2] + 1 == v[3]) {
            st.insert({min(a,b), max(a,b)});
        }
    }
    cout << st.size() << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}

// A. Triple
#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
using pi = pair<int, int>;
using ll = long long;
 
 
void solve() {
    int n; cin >> n;
    
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }
 
    for (auto it : cnt) {
        if (it.second >= 3) {
            cout << it.first << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t; cin >> t;
    while (t--)
        solve();
}
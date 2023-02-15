// A. All Distinct
#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

void solve() {
    map<int, int> mp;
    
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    int ans = 0;
    int even = 0;
    for (auto it : mp) {
        if (it.second % 2 == 1) ans++;
        else even++;
    }
    cout << ans + (even/2) * 2 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}

// B. Going to the Cinema
#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using pi = pair<int, int>;
using ll = long long;


void solve() {
    int n; cin >> n;
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        cnt[a]++;
    }
    
    int ans = 0;
    int sum = 0;
    for (int k = 0; k <= n; k++) {
        if (cnt[k] == 0 && sum == k) {
            ans += 1;
        }
        sum += cnt[k];
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
}
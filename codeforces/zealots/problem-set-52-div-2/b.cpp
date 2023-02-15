// B. Make it Increasing
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans = 0;
    for (int i = n-2; i >= 0; i--) {
        if (a[i+1] == 0) {
            cout << -1 << '\n';
            return;
        } else if (a[i] < a[i+1]) {
            continue;
        } else {
            while (a[i] > 0 && a[i + 1] <= a[i]) {
                a[i] /= 2;
                ans++;
            }
            if (a[i] == 0 && i != 0) {
                cout << -1 << '\n';
                return;
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}

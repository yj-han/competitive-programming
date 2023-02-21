// E. Dora and Search
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> pos(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
        pos[a[i]] = i;
    }

    int min_v = 0, max_v = n-1;
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] == min_v) {
            min_v++;
            l++;
        } else if (a[l] == max_v) {
            max_v--;
            l++;
        } else if (a[r] == min_v) {
            min_v++;
            r--;
        } else if (a[r] == max_v) {
            max_v--;
            r--;
        } else {
            cout << l + 1 << ' ' << r + 1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while (t--)
        solve();
 
    return 0;
}
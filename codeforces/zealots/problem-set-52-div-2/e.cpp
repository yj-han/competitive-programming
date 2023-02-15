// E. Omkar and Heavenly Tree
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;

    vector<bool> used(n+1, false);
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        used[b] = 1;
    }

    int b = 0;
    for (int i = 1; i <= n; i++)
        if (!used[i]) b = i;
    for (int i = 1; i <= n; i++) {
        if (i ^ b)
            cout << b << ' ' << i << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}

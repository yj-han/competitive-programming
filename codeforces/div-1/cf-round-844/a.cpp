// A. Parallel Projection
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;


void solve() {
    int w, d, h; cin >> w >> d >> h;
    int a, b, f, g;
    cin >> a >> b >> f >> g;

    int ans1 = min(b + g, d * 2 - (b + g)) + h + abs(a - f);
    int ans2 = min(a + f, w * 2 - (a + f)) + h + abs(b - g);

    cout << min(ans1, ans2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
}
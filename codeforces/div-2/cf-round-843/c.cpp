// C. Interesting Sequence
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

void solve() {
    ll n, x; cin >> n >> x;

    ll m = n;
    ll cur = n;
    while (cur > x) {
        m += 1ll <<__builtin_ctzll(m);
        cur &= m;
    }
    if (cur == x)
        cout << m << '\n';
    else
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
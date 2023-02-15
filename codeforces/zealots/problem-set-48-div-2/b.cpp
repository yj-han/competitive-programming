// B. PizzaForces
#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

void solve() {
    long long n;
    cin >> n;
    cout << max(6LL, n + 1) / 2 * 5 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}
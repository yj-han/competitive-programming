// C. Divan and a New Project
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<pi> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    vector<int> ans(n);
    ll time = 0;
    for (int i = 0; i < n; i++) {
        ans[v[i].second] = i % 2 == 0? (i/2 + 1): -(i/2 + 1);
        time += 2ll * (i/2 + 1) * v[i].first;
    }

    cout << time << '\n';
    cout << 0 << ' ';
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while (t--)
        solve();
 
    return 0;
}
// A. Yet Another Promotion
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;
using pi = pair<int, int>;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        ll n, m; cin >> n >> m;

        ll q = n / (m + 1);
        ll r = n - q * (m + 1);
        
        cout << q * min(a * m, b * (m + 1)) + r * min(a, b) << '\n';
    }
    return 0;
}

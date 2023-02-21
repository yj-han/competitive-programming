// C. Minimum LCM
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
typedef long long ll;
ll gcd (ll a, ll b) { return b == 0 ? a : gcd(b, a%b); }

void solve() {
    int n; cin >> n;
    
    int a = 1;
    for (int g = 2; g * g <= n; ++g) {
        if (n % g == 0) {
            a = n / g;
            break;
        }
    }

    cout << a << ' ' << n - a << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
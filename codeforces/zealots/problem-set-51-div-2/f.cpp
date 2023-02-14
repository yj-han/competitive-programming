// F. Number into Sequence
#include <iostream>
#include <cmath>
#include <map>

using namespace std;
using ll = long long;
using pi = pair<int, int>;

bool is_prime(ll x) {
    for (ll d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll a = n;
        map<ll, ll> mp;

        for (ll i = 2; i * i <= n; i++) {
            while (n > 1 && n % i == 0) {
                n /= i;
                mp[i]++;
            }
        }

        if (n > 1)
            mp[n]++;

        ll max_n = 0;
        ll factor = 0;
        for (auto it : mp) {
            if (it.second > max_n) {
                max_n = it.second;
                factor = it.first;
            }
        }

        cout << max_n << '\n';
        for (int i = 0; i < max_n-1; i++)
            cout << factor << ' ';
        ll ans = factor * (a / pow(factor, max_n));
        cout << ans << '\n';
    }
}
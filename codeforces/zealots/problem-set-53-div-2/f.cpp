// F. Number into Sequence
#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

void solve() {
	ll n; cin >> n;
    ll num = n;
	map<ll, ll> factor;
    ll max_exp = 1;
    ll base = n;
    for (ll i = 2; i * i <= n; i++) {
        while (n > 1 && n % i == 0) {
            n /= i;
            factor[i]++;
			if (max_exp < factor[i]) {
				max_exp = factor[i];
				base = i;
			}
        }
    }

    vector<ll> a(max_exp, base);
    a[a.size()-1] = num / pow(base, max_exp-1);

	cout << a.size() << '\n';
    for (auto x : a)
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
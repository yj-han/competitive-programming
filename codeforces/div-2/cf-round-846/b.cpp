// B. GCD Partition
#include <iostream>
#include <vector>
#include <cmath>

typedef long long ll;

using namespace std;

int n;

ll gcd (ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<ll> prefix_sum(n+1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> prefix_sum[i];
            prefix_sum[i] += prefix_sum[i-1];
        }

        ll g = 1;
        for (int i = 1; i < n; i++) {
            g = max(g, gcd(prefix_sum[i], prefix_sum[n]));
        }

        cout << g << '\n';
    }
	return 0;
}
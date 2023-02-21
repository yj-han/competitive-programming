// F. Inflation
#include <iostream>
#include <cmath>
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
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        
        ll x = 0;
        ll p_sum = p[0];
        for (int i = 1; i < n; i++) {
            x = max(x, (100ll * p[i] - k * p_sum + k - 1) / k);
            p_sum += p[i];
        }
        cout << x << endl;
    }
}
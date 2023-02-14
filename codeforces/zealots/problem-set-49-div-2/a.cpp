// A. Password
#include <iostream>
#include <cmath>
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
        int n; cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }

        int r = 10 - a.size();
        int res = 6 * r * (r-1) / 2;
        cout << res << '\n';
    }
}
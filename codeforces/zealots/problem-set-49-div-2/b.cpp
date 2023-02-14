// C. Premutation

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
        int n, x, y; cin >> n >> x >> y;
        if ((x != 0 && y != 0) || (x == 0 && y == 0))
            cout << -1 << '\n';
        else {
            vector<int> result;
            int winner = 1;
            while (result.size() <= n-1) {
                int w = max(x, y);
                while (w--) {
                    result.push_back(winner);
                }
                winner = result.size() + 2;
            }
            if (result.size() > n-1) {
                cout << -1 << '\n';
            } else {
                for (auto x : result) cout << x << ' ';
                cout << '\n';
            }
        }
    }
}
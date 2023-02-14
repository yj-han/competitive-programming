// C. Deadly Laser
#include <iostream>
#include <vector>

using namespace std;
using pi = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;

        if (min(sx - 1, m - sy) <= d && min(n - sx, sy - 1) <= d)
            cout << -1 << '\n';
        else 
            cout << n + m - 2 << '\n';
    }
}

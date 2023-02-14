// A. Food for Animals
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int a, b, c, x, y; cin >> a >> b >> c >> x >> y;

        int ans = max(x - a, 0) + max(y - b, 0) - c;
        if (ans <= 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
// C. Matching Numbers
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
void solve() {
    int n; cin >> n;
    if (n % 2 == 0) {
        cout << "No" << '\n';
        return;
    } else {
        int s = (3 * n + 3) / 2;
        cout << "Yes" << '\n';

        for (int i = 1; i <= (n + 1)/2; i++)
            cout << i << ' ' << s + i - 2 << '\n';
        
        for (int i = (n + 3)/2; i <= n; i++)
            cout << i << ' ' << i + (n/2) << '\n';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) solve();
 
    return 0;
}
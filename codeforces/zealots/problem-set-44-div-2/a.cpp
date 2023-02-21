// A. Creep
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
    int a, b; cin >> a >> b;

    for (int i = 0; i < min(a, b); i++)
        cout << "01";
    
    for (int i = 0; i < abs(a - b); i++)
        cout << (a < b ? 1 : 0);
        
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
    // solve();

    return 0;
}

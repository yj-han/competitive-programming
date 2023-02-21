// A. Medium Number
#include <iostream>

using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    cout << b << '\n';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while (t--)
        solve();
 
    return 0;
}
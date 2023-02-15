// E. Diameter of Graph
#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
using ll = long long;
 
void solve() {
    ll n, m, k; cin >> n >> m >> k;
    if (m < n-1 || (n-1)*n/2 < m) 
        cout << "NO\n";
    else if (n == 1) {
        if (k > 1) cout << "YES\n";
        else cout << "NO\n";
    } else if (m < (n-1)*n/2) {
        if (k > 3) cout << "YES\n";
        else cout << "NO\n";
    } else if (k > 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while (t--)
        solve();
 
    return 0;
}
// B. DIV + MOD
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;

    while (t--) {
        ll l, r, a; cin >> l >> r >> a;
        if (r % a == a - 1 || r/a == l/a) {
            cout << r / a + r % a << '\n';
        } else {
            ll q = r / a - 1;
            ll mod = a - 1;
            
            cout << q + mod << '\n';
        }
    }

    return 0;
}
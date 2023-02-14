// G. Banknotes
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
        int n, k; cin >> n >> k;
        k += 1;
 
        vector<ll> a(n);        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[i] = pow(10, x);
        }
        ll res = 0;
        for (int i = 0; i < n; i++) {
            ll cnt = k;
            if (i + 1 < n)
                cnt = min(cnt, a[i+1]/a[i] - 1);
            res += a[i] * cnt;
            k -= cnt;
        }
 
        cout << res << '\n';
    }
}
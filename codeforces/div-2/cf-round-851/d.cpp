// D - Moving Dots
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

const int mod = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int a[n + 1]; a[0] = 0;

    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    int pw[n + 1]; pw[0] = 1;
    for (int i = 1; i <= n; i++)
        pw[i] = pw[i-1] * 2 % mod;
    
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int d = a[j] - a[i];
            auto l = upper_bound(a + 1, a + 1 + n, a[i] - d - 1) - a - 1;
            auto r = lower_bound(a + 1, a + 1 + n, a[j] + d) - a;

            ans += pw[l + (n + 1 - r)] % mod;
        }
    }

    cout << ans % mod << '\n';
 
    return 0;
}
// B. Fedya and Array
#include <iostream>
#include <algorithm>
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
        ll a, b;
        cin >> a >> b;

        ll n = 2 * (a - b);
        cout << n << '\n';

        vector<ll> arr(n);
        int pos = 0;
        for (ll c = b; c <= a; c++)
            arr[pos++] = c;
        for (ll c = a = a - 1; c > b; c--)
            arr[pos++] = c;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " \n"[i == n - 1];
    }
    return 0;
}

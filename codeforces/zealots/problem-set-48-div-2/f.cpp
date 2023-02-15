// F. Twist the Permutation
#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> ans(n);
    for (int i = n; i > 0; i--) {
        int ind = 0;
        for (int j = 0; j < i; j++)
            ind = a[j] == i ? j : ind;
        
        vector<int> b(i);
        for (int j = 0; j < i; j++)
            b[(i - 1 - ind + j) % i] = a[j];
        
        for (int j = 0; j < i; j++)
            a[j] = b[j];
        
        ans[i-1] = i != 1 ? (ind + 1) % i : 0;
    }
    for (int i = 0; i < n; ++i)
        cout << ans[i] << " \n"[i == n - 1];

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}

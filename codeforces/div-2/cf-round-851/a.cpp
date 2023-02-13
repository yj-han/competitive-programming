// A. One and Two
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
void solve() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        if (a == 2) {
            v.push_back(i);
        }
    }
 
    if (v.size() % 2 == 0) {
        int mid = v.size() / 2;
        if (mid == 0)
            cout << 1 << '\n';
        else
            cout << v[mid - 1] << '\n';
    } else {
        cout << -1 << '\n';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) solve();
 
    return 0;
}
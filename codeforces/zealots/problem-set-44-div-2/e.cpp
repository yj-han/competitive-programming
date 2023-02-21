// E. Minimum Notation
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;
using pi = pair<int, int>;
using ll = long long;


void solve() {
    string s; cin >> s;
    int n = s.size();
    vector<int> a(n);
    vector<int> mn(n + 1, 9);

    for (int i = 0; i < n; i++)
        a[i] = int(s[i] - '0');

    for(int i = n - 1; i >= 0; i--)
        mn[i] = min(mn[i + 1], a[i]);

    vector<int> buff(10, 0);
    string ans = "";
    string t = "0123456789";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < mn[i]; j++) {
            while (buff[j]) {
                buff[j]--;
                ans += t[j];
            }
        }

        if (a[i] == mn[i])
            ans += t[a[i]];
        else
            buff[min(9, a[i] + 1)]++;
    }
    for (int j = 0; j < 10; j++) {
        while (buff[j]) {
            buff[j]--;
            ans += t[j];
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
}
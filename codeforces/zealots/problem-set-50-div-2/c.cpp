// C. Berland Music
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
using pi = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<pi> p(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            p[i].first = x; p[i].second = i;
        }
        sort(p.begin(), p.end());
        string s; cin >> s;

        vector<int> q(n);
        int neg = 0; int pos = 0;
        for (auto r : p) {
            if (s[r.second] == '0') {
                q[r.second] = ++neg;
            }
        }

        for (auto r : p) {
            if (s[r.second] == '1') {
                q[r.second] = neg + ++pos;
            }
        }

        for (auto r : q)
            cout << r << ' ';
        cout << '\n';
    }

    return 0;
}
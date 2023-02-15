// F. Years
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
    int n; cin >> n;
    int b, d;
    
    vector<pi> v;
    for (int i = 0; i < n; i++) {
        cin >> b >> d;
        v.push_back({b, 1});
        v.push_back({d, -1});
    }
    sort(v.begin(), v.end());
    
    int y, k = 0, ppl = 0;
    for (auto i : v) {
        if (i.second == 1) {
            ppl++;
            if (ppl > k) {
                k = ppl;
                y = i.first;
            }
        } else ppl--;

    }

    cout << y << ' ' << k << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t; cin >> t;
    // while (t--)
    //     solve();
    solve();

    return 0;
}

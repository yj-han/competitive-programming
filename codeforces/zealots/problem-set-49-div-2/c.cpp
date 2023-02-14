// C. Premutation
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
        int n; cin >> n;
        vector<pi> pos(n+1);
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n-1; j++) {
                int x; cin >> x;
                pos[x].first += j;
                pos[x].second = x;
            }
        }
 
        sort(pos.begin(), pos.end());
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            cout << pos[i].second << ' ';
        }
        cout << '\n';
    }
}
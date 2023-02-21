// I. Least Prefix Sum
#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

int solve(vector<int> a) {
    ll sum = 0;
    multiset<int> s;
    int ret = 0;

    for (int x : a) {
        sum += x;
        s.insert(x);

        while (sum < 0) {
            sum -= 2 * (*s.begin());
            ret++;
            s.erase(s.begin());
        }
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n, m; cin >> n >> m;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        vector<int> b;
        for (int i = m; i < n; i++)
            b.push_back(a[i]);

        vector<int> c;
        for (int i = m - 1; i > 0; i--)
            c.push_back(-a[i]);

        cout << solve(b) + solve(c) << '\n';
    }

    return 0;
}
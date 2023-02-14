// B. Quick Sort
#include <iostream>
#include <cmath>
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
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int c_v = 1;
        for (int i = 0; i < n; i++)
            if (p[i] == c_v) c_v++;
        
        cout << (n - c_v + k) / k << '\n';
    }
}
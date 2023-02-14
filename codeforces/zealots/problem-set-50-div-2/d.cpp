// D. Update Files
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
        ll n, k; cin >> n >> k;
        ll curr = 1;

        ll time = 0;
        while (curr < n && curr <= k) {
            curr <<= 1;
            time++;
        }

        time += (n - curr) / k + ((n - curr) % k > 0);
        
        cout << time << '\n';
    }

    return 0;
}
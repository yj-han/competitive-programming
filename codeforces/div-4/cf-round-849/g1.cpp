// G1 - Teleporters (Easy Version)
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <memory.h>
 
using namespace std;
using ll = long long;
const int MAX_N = 200000; 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        ll n, c;
        cin >> n >> c;
 
        vector<ll> min_cost(n, 0);
        for (int i = 0; i < n; i++) {
            ll a; cin >> a;
            min_cost[i] = a + i + 1;
        }
 
        sort(min_cost.begin(), min_cost.end());
        
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            if (c >= min_cost[i]) {
                c -= min_cost[i];
                cnt++;
            } else {
                break;
            }
        }
        
        cout << cnt << '\n';
    }
 
	return 0;
}
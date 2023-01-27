#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

typedef long long ll;

ll t, x;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> x;
        ll a_and_b = x >> 1;
        
        ll a = a_and_b;
        ll b;

        int cnt = 0;
        while (a_and_b) {
            a_and_b >>= 1;
            cnt += 1;
        }
        a += 1 << cnt;

        b = x ^ a;
        if (a + b == 2 * x) 
            cout << a << ' ' << b << '\n';
        else
            cout << -1 << '\n';
    }

	return 0;
}
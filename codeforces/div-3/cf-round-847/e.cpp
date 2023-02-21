#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int t, x;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> x;
        if (x % 2 == 1) {
            cout << -1 << '\n';
            continue;
        }

        int a = x / 2;
        int b = x / 2;
        if (a & x) {
            cout << -1 << '\n';
            continue;
        }
        cout << a + x << " " << b << '\n';
    }

	return 0;
}
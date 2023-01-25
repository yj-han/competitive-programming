// B. Stand-up Comedian
#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == 0) {
            cout << min(1, b + c + d) << '\n';
        } else {
            cout << a + min(b, c) * 2 + min(a + 1, d + b + c - 2 * min(b,c)) << '\n';
        }
    }
	return 0;
}
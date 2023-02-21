// A. Hayato and Schools
#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<int> a(n+1);
        // odd sum: odd + odd + odd
        // even even odd
        vector<int> odds;
        vector<int> evens;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] % 2) {
                odds.push_back(i);
            }
            else {
                evens.push_back(i);
            }
        }

        if (odds.size() >= 3) {
            cout << "YES" << '\n';
            cout << odds[0] << ' ' << odds[1] << ' ' << odds[2] << '\n';
        } else {
            if (evens.size() >= 2 && odds.size() >= 1) {
                cout << "YES" << '\n';
                cout << evens[0] << ' ' << evens[1] << ' ' << odds[0] << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
	return 0;
}
// B. MKnez's ConstructiveForces Task
#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        if (n % 2) {
            int a = n / 2;
            int b = -(n - 2)/2;
            if (b == 0)
                cout << "NO" << '\n';
            else {
                cout << "YES" << '\n';
                for (int i = 0; i < n; i++) {
                    if (i & 1) cout << a << ' ';
                    else cout << b << ' ';
                }
                cout << '\n';
            }
        }
        else {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++) {
                if (i & 1) cout << 1 << ' ';
                else cout << -1 << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
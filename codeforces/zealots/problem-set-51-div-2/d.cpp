// D. All are Same
#include <iostream>
#include <vector>
#include <set>
#include <cstring>

using namespace std;
using pi = pair<int, int>;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }

    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);

        int sum = 0;
        set<int> s;
        set<int> diff;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            s.insert(a);
            for (auto b : s) {
                if (a == b)
                    continue;
                diff.insert(abs(a - b));
            }
        }
        
        if (s.size() == 1) {
            cout << -1 << '\n';
        } else {
            int g = 0;
            for (auto d : diff) {
                g = gcd(d, g);
            }

            cout << g << '\n';
        }
    }
}
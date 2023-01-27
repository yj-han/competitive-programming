#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

int a[101];
int n, p, q, r, s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> p >> q >> r >> s;
    for (int i = 1; i <= n; i++) {
        if (p <= i && i <= q) {
            cin >> a[r + i - p];
        } else if (r <= i && i <= s) {
            cin >> a[p + i - r];
        } else {
            cin >> a[i];
        }
    }

           

    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
}

// B - Sum of Two Numbers
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
using pi = pair<int, int>;
 
pi solve(int n) {
    if (n % 2 == 0)
        return {n / 2, n / 2};
    
    int x = n / 2;
    int y = n - x;
 
    if (x % 10 == 9) {
        auto [s, t] = solve(n / 10);
 
        int ps = s, pt = t, sum = 0;
        for (int i = 0; i < 9; i++) {
            sum += ps % 10;
            sum -= pt % 10;
            ps /= 10;
            pt /= 10;
        }
        if (sum < 0)
            return {10 * s + 5, 10 * t + 4};
        else
            return {10 * s + 4, 10 * t + 5};
    }
    else
        return {x, y};
}
int main() {
    cin.tie(0); ios_base::sync_with_stdio(0);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        auto [x, y] = solve(n);
        cout << x << ' ' << y << '\n';
    }
}
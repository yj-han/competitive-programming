// A. Swap Digit

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define MOD 998244353

long n;
string a, b;

long long binpow(int a, int b) {
    long long res = 1;
    a = a % MOD;
    while (b > 0) {
        if (b & 1) {
            res = res * a % MOD;
        }
        b >>= 1;
        a = (a * a) % MOD;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> a >> b;

    if (a > b) {
        swap(a, b);
    }
    
    long long new_a = 0;
    long long new_b = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            swap(a[i], b[i]);
        }
        new_a += (a[i] - '0') * binpow(10, n-i-1) % MOD;
        new_b += (b[i] - '0') * binpow(10, n-i-1) % MOD;
    }

    cout << (new_a * new_b % MOD) << '\n';
    return 0;
}

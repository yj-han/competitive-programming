// B. GCD Problem
#include <iostream>

using namespace std;

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
        int c = 1;

        int a, b;
        if ((n-1) % 2) {
            a = (n-1)/2;
            b = (n-1)/2 + 1;
        } else {
            a = (n-1)/2;
            b = a;

            while (gcd(a, b) != 1) {
                a++, b--;
            }
        }

        cout << a << ' ' << b << ' ' << c << '\n';
    }
}
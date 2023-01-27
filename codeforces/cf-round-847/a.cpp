#include <iostream>
#include <vector>
#include <cmath>

typedef long long ll;

using namespace std;

int t;
string n;

ll gcd (ll a, ll b) {
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

    cin >> t;

    while (t--) {
        cin >> n;
        
        string pi = "3141592653589793238462643383279";
        int ans = 0;
        while (pi[ans] == n[ans])
            ans++;
        cout << ans << '\n';
    }
	return 0;
}
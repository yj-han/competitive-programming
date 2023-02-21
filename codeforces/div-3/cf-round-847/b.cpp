// B. Taisia and Dice
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int t, n, s, r;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> n >> s >> r;
        
        int m = s - r;
        int avg = r / (n-1);
        int remain = r % (n-1);
        for (int i = 0; i < n-1; i++)
            cout << avg + (remain-- > 0) << ' ';

        cout << m << '\n';
    }
	return 0;
}
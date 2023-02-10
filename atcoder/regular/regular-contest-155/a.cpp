#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

string S;
int N;
long long K;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cin >> N >> K;
        cin >> S;

        if (N % 3) {
            cout << "No" << '\n';
        } else {
            bool possible = true;

            for (int i = 0; i < N/3; i++) {
                if (S[i] != S[2 * N/3-i-1]) {
                    possible = false;
                    break;
                }
            }
            for (int i = 0; i < N/3; i++) {
                if (S[i] != S[2 * N/3 + i]) {
                    possible = false;
                    break;
                }
            }
            cout << (possible ? "Yes" : "No") << '\n';
        }
    }
    
    return 0;
}

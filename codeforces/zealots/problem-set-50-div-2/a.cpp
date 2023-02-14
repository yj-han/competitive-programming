// A. Missing Bigram
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string bigram[n-2];

        for (int i = 0; i < n-2; i++) cin >> bigram[i];

        string s = bigram[0];
        for (int i = 1; i < n-2; i++) {
            if (bigram[i-1][1] == bigram[i][0])
                s += bigram[i][1];
            else {
                s += bigram[i];
            }
        }
        while (s.size() < n)
            s += 'a';
        cout << s << '\n';
    }

    return 0;
}
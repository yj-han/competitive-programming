#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

int N;

int lcp(string x, string y) {
    int max_n = min(x.size(), y.size());
    
    int n = 0;
    for (int i = 0; i < max_n; i++) {
        if (x[i] == y[i])
            n += 1;
        else
            break;
    }

    return n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    vector<string> s(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    vector<string> copy_s = s;
    sort(s.begin(), s.end());

    for (auto& x : copy_s) {
        int max_n = 0;
        int lower = lower_bound(s.begin(), s.end(), x) - s.begin();
        int upper = upper_bound(s.begin(), s.end(), x) - s.begin();

        if (lower > 0) {
            max_n = max(max_n, lcp(x, s[lower-1]));
        }
        if (upper < s.size()) {
            max_n = max(max_n, lcp(x, s[upper]));
            if (upper - 1 != lower) {
                max_n = x.size();
            }
        }
        cout << max_n << '\n';
    }
    return 0;
}

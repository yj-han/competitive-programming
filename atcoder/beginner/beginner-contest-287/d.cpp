#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

string S, T;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> S >> T;
    vector<bool> ans(T.size() + 1, false);
    
    int first = 0;
    for (int i = 0; i < T.size(); i++) {
        if (T[i] == S[i] | T[i] == '?' | S[i] == '?') {
            first = i+1;
        } else {
            break;
        }
    }

    int second = S.size();
    for (int i = T.size()-1; i >= 0; i--) {
        int j = S.size() - T.size() + i;
        if (T[i] == S[j] | T[i] == '?' | S[j] == '?') {
            second = j;
        } else {
            break;
        }
    }
    
    for (int i = 0; i <= T.size(); i++) {
        if (i <= first && second <= (S.size() - (T.size()-i)))
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

string s;
int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    string new_s = "";
    int i = 0;
    while (i < n) {
        if (i < n - 1 && s[i] == 'n' && s[i+1] == 'a') {
            new_s += "nya";
            i += 2;
        } else {
            new_s += s[i];
            i += 1;
        }
    }

    cout << new_s << '\n';
}

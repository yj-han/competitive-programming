// A2. Gardener and the Capybaras (hard version)
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    string s, a, b, c;
    cin >> s;

    vector<int> as;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'a') as.push_back(i);
    
    if (as.size() >= 2 && as[1] < s.size()-1) {
        a = s.substr(0, as[1]);
        b = "a";
        c = s.substr(as[1] + 1);
    } else if (as.size() >= 1 && as[0] > 0 && as[0] < s.size()-1) {
        a = s.substr(0, as[0]);
        b = "a";
        c = s.substr(as[0] + 1);
    } else {
        a = s[0];
        b = s.substr(1, s.size()-2);
        c = s[s.size()-1];
    }

    cout << a << ' ' << b << ' ' << c << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
}
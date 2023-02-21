// A. Wonderful Coloring - 1
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

void solve() {
    string s; cin >> s;
    map<char, int> mci;

    for (auto c : s)
        mci[c]++;
    
    int ones = 0;
    int twos = 0;
    for (auto it : mci) {
        if (it.second == 1) ones++;
        else if (it.second >= 2) twos++;
    }

    cout << twos + ones / 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;

    while (t--)
        solve();
        
	return 0;
}

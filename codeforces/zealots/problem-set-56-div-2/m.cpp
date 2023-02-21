// M. Pair Of Lines
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<char, int> mci;

const int N = 200 * 1000 + 555;

inline ii operator -(const ii &a, const ii &b) {
	return {a.first - b.first, a.second - b.second};
}

inline ll cross(const ii &a, const ii &b) {
	return a.first * 1ll * b.second - a.second * 1ll * b.first;
}

int n; 
ii p[N];
bool used[N];

bool check() {
    int i1 = -1, i2 = -1;
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        if (i1 == -1) i1 = i;
        else if (i2 == -1) i2 = i;
    }

    if (i2 == -1) 
        return true;

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        if (cross(p[i2] - p[i1], p[i] - p[i1]) != 0)
            return false;
    }

    return true;
}

bool check2(ii a, ii b) {
    memset(used, 0, sizeof used);
    for (int i = 0; i < n; i++) {
        if (cross(b - a, p[i] - a) == 0)
            used[i] = 1;
    }

    return check();
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;

    if (n <= 2) {
        cout << "YES\n";
        return;
    }

    if (check2(p[0], p[1]) || check2(p[0], p[2]) || check2(p[1], p[2]))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    // int t; cin >> t;
    // while (t--)
    //     solve();
    solve();
        
	return 0;
}

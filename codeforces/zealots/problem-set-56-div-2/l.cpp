// L. Vasya and a Tree
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<char, int> mci;

const int N = 3e5 + 9;

int n, m;
vi g[N];
vii q[N];
ll add[N], res[N];

void dfs(int v, int pr, int h, ll sum) {
    for (auto p : q[v]) {
        int l = h, r = h + p.first;
        add[l] += p.second;
        if (r + 1 < N)
            add[r + 1] -= p.second;
    }
    sum += add[h];
    res[v] = sum;
    for (auto to : g[v])
        if (to != pr) dfs(to, v, h + 1, sum);
    
    for (auto p : q[v]) {
        int l = h, r = h + p.first;
        add[l] -= p.second;
        if (r + 1 < N)
            add[r + 1] += p.second; 
    }
}

void solve() {
    cin >> n;
    for (int i = 0; i < n-1; i++) {
        int x, y; cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int v, h, d; cin >> v >> h >> d;
        --v;
        q[v].push_back({h, d});
    }

    dfs(0, 0, 0, 0);
    for (int i = 0; i < n; i++)
        cout << res[i] << ' ';
    cout << '\n';
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

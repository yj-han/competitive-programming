#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;

    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> p(n);
        vector<int> b(n);

        int foo, bar;
        cin >> foo >> bar;

        for (int i = 0; i < foo; i++) {
            int id;
            cin >> id;
            --id;
            p[id] = 1;
        }

        for (int i = 0; i < bar; i++) {
            int id;
            cin >> id;
            --id;
            b[id] = 1;
        }

        vector<vector<int>> g(n);
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            --x; --y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        vector<int> has(n);
        for (int i = 0; i < n; i++) {
            for (int j : g[i]) {
                if (b[j]) {
                    has[i] = 1;
                }
            }
        }

        bool win = false;
        if (p[0]) {
            win = true;
        }
        for (int j : g[0]) {
            if (p[j]) {
                win = true;
            }
        }
        
        vector<int> d(n, -1);
        d[0] = 0;
        vector<int> que(1, 0);
        for (int i = 0; i < (int) que.size(); i++) {
            for (int u : g[que[i]]) {
                if (d[u] == -1) {
                    d[u] = d[que[i]] + 1;
                    if (b[u]) {
                        que.push_back(u);
                    }
                }
            }
        }

        vector<int> is1(n);
        vector<int> is2(n);
        int k1 = 0;
        int k2 = 0;
        for (int i = 0; i < n; i++) {
            if (p[i]) {
                if (has[i]) {
                    is1[i] = 1;
                }
                for (int j : g[i]) {
                    if (b[j] && has[j]) {
                        is2[i] = 1;
                    }
                }
                k1 += is1[i];
                k2 += is2[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (p[i] && d[i] != -1) {
                k1 -= is1[i];
                k2 -= is2[i];
                if (k2 > 0 || k1 >= d[i] - 1) {
                    win = true;
                }
                k1 += is1[i];
                k2 += is2[i];
            }
        }
        cout << (win ? "YES" : "NO") << '\n';
    }
    return 0;
}

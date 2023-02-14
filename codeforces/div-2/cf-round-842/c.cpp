// C. Elemental Decompress
#include <iostream>
#include <vector>

using namespace std;

int query() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    vector<vector<int>> b(n + 1);
    for (int i = 1; i <= n; ++i) {
        b[a[i]].push_back(i);

        if (b[a[i]].size() >= 3) {
            cout << "NO\n";
            return 0;
        }
    }

    vector<int> p(n + 1, -1), q(n + 1, -1);
    vector<int> fp(n + 1, -1), fq(n + 1, -1);
    for (int x = n; x >= 1; --x) {
        for (int i : b[x]) {
            if (fp[x] == -1)
                p[fp[x] = i] = x;
            else if (fq[x] == -1) 
                q[fq[x] = i] = x;
        }
    }

    for (int x = n, vp = n, vq = n; x >= 1; --x) {
        for (int i : b[x]) {
            while (fp[vp] != -1) --vp;
            while (fq[vq] != -1) --vq;
            if (p[i] == -1 && vp > 0) 
                p[fp[vp] = i] = vp;
            if (q[i] == -1 && vq > 0) 
                q[fq[vq] = i] = vq;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (max(p[i], q[i]) != a[i]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    for (int i = 1; i <= n; ++i) cout << p[i] << " "; 
    cout << "\n";
    for (int i = 1; i <= n; ++i) cout << q[i] << " "; 
    cout << "\n";
    return 0;
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
        query();

    return 0;
}
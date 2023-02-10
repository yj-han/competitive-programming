#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

int N, M;
vector<int> adj[200001];
vector<bool> visited(200001, false);
bool path_graph = true;

void dfs(int u, int prev) {
    if (!path_graph)
        return;

    visited[u] = true;
    for (auto& v : adj[u]) {
        if (v == prev)
            continue;

        if (visited[v]) {
            path_graph = false;
            return;
        }
        dfs(v, u);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for (int i = 1; i <= M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);
    if (count(visited.begin(), visited.end(), true) != N)
        path_graph = false;

    cout << (path_graph ? "Yes" : "No");
    return 0;
}

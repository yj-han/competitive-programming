// Difference Between Maximum and Minimum Price Sum

#include <vector>

using namespace std;

class Solution {
public:
    long long maxOutput(int n, vector <vector <int>>& edges, vector <int>& price) {
        vector<vector<int>> graph(n);
    
        for (auto &e: edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
    
        auto dfs = [&] (auto self, int u, vector <int64_t> &depth) -> void {
            for (int v: graph[u]) {
            if (depth[v] == -1) {
                depth[v] = depth[u] + price[v];
                self(self, v, depth);
            }
            }
        };
        
        vector <int64_t> depth_x (n, -1);
        depth_x[0] = price[0];
        dfs(dfs, 0, depth_x);
        
        auto u = max_element(depth_x.begin(), depth_x.end()) - depth_x.begin();
        
        vector <int64_t> depth_y (n, -1);
        depth_y[u] = price[u];
        dfs(dfs, u, depth_y);
        
        auto v = max_element(depth_y.begin(), depth_y.end()) - depth_y.begin();
        
        depth_x = vector <int64_t> (n, -1);
        depth_x[v] = price[v];
        dfs(dfs, v, depth_x);
        
        int64_t ans = 0;
        
        for (int i = 0; i < n; ++i) {
            ans = max(ans, depth_x[i] - price[i]);
            ans = max(ans, depth_y[i] - price[i]);
        }
        
        return ans;
    }
};
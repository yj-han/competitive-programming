#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

#define INF 1000000000

int N, M;

struct edge {
    int a, b, cost;
};

vector<edge> e;


// int dijkstra(int source, int target) {
//     for (int i = 1; i <= 2000; i++) {
//         dist[i] = INF;
//     }

//     dist[source] = 0;
//     priority_queue<pair<int, int> > pq;

//     pq.push(make_pair(0, source));

//     while (!pq.empty()) {
//         int curr = pq.top().second;
//         int to_curr = -pq.top().first;

//         pq.pop();

//         if (dist[curr] < to_curr) {
//             continue;
//         }
        
//         for (int i = 0; i < edges[curr].size(); i++) {
//             int next = edges[curr][i].second;
//             int to_next = edges[curr][i].first;

//             if (dist[next] > to_curr + to_next) {
//                 dist[next] = to_curr + to_next;
//                 pq.push(make_pair(-(dist[next]), next));
//             }
//         }
//     }

//     return dist[target];
// }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        edge e_ab = { A-1, B-1, C };
        edge e_ba = { B-1, A-1, C };
        e.push_back(e_ab);
    }
    vector<int> d (N, INF);
    d[0] = 0;
    vector<int> p (N, -1);
    int x;

    for (int i = 0; i < N; i++) {
        x = -1;
        for (int j = 0; j < M; j++) {
            if (d[e[j].a] < INF) {
                if (d[e[j].b] > d[e[j].a] + e[j].cost) {
                    d[e[j].b] = max(-INF, d[e[j].a] + e[j].cost);
                    p[e[j].b] = e[j].a;
                    x = e[j].b;
                }
            }
        }
    }

    if (x != -1) {
        cout << -1;           
    } else {
        for (int i = 1; i < N; i++) {
            cout << (d[i] == INF ? -1 : d[i]) << '\n';
        }
    }
}

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

int N, Q;
vector<int> score;
vector<int> quota;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    score.resize(N+1);
    quota.resize(N+1);

    priority_queue<pair<int, pair<int, int>>> pq;
    for (int i = 1; i <= N; i++) {
        cin >> score[i] >> quota[i];
        pq.push(make_pair(score[i], make_pair(quota[i], i)));
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        string command;
        int x;
        int y;
        
        cin >> command;
        if (command == "1") {
            cin >> x >> y;
            score[x] = y;
        } else if (command == "2") {
            cin >> x >> y;
            quota[x] = y;
        } else {
            cin >> x;
            long long value = 0;

            int iter = 0;
            while (x) {
                if (pq.empty())
                    break;

                int curr_score = pq.top().first;
                int curr_quota = pq.top().second.first;
                int index = pq.top().second.second;
                while (curr_score != score[index] | curr_quota != quota[index]) {
                    pq.pop();
                    pq.push({score[index], {quota[index], index} });
                    
                    curr_score = pq.top().first;
                    curr_quota = pq.top().second.first;
                    index = pq.top().second.second;
                }

                pq.pop();
                cout << score[index] << " " << quota[index] << '\n';
                if (x > curr_quota) {
                    value += curr_score * curr_quota;
                    x -= curr_quota;
                } else {
                    value += curr_score * x;
                    x = 0;
                    break;
                }
            }
            cout << (x == 0 ? value : -1) << '\n';
            while (!pq.empty())
                pq.pop();

            for (int i = 1; i <= N; i++) {
                pq.push(make_pair(score[i], make_pair(quota[i], i)));
            }
        }
    }
}

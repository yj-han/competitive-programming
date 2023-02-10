#include <iostream>
#include <vector>

using namespace std;


int N, M;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    vector<string> s(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> s[i];
    }

    int ans = 0;
    vector<string> t(M+1);
    for (int i = 1; i <= M; i++) {
        cin >> t[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (s[i].substr(s[i].size()-3) == t[j]) {
                ans += 1;
                break;
            }    
        }
    }


    cout << ans;
    return 0;
}

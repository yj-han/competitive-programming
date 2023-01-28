#include <iostream>
using namespace std;


int N;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        cnt += (s == "For");
    }

    cout << (cnt > N / 2 ? "Yes" : "No");
    return 0;
}

// Sort the Students by Their Kth Score
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m = score.size();
        int n = score[0].size();
        
        map<int, vector<int> > table;
        
        for (int i = 0; i < m; i++) {
            vector<int> v;
            table[-score[i][k]] = v;
            for (int j = 0; j < n; j++) {
                table[-score[i][k]].push_back(score[i][j]);
            }
        }
        
        vector<vector<int>> answer;
        for (auto const& x : table) {
            vector<int> v = x.second;            
            answer.push_back(v);
        }
        
        return answer;
    }
};
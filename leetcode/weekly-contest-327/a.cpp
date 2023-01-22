// Maximum Count of Positive Integer and Negative Integer
#include <vector>

using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive = 0;
        int negative = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                positive = nums.size() - i;
                break;
            } else if (nums[i] < 0) {
                negative++;
            }
        }
        
        return positive > negative ? positive : negative;
    }
};

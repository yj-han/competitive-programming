// Difference Between Element Sum and Digit Sum of an Array

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elem_sum = 0;
        int digit_sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            elem_sum += nums[i];
            string s = to_string(nums[i]);
            for (int j = 0; j < s.size(); j++)
                digit_sum += s[j] - '0';
        }
        
        return abs(elem_sum - digit_sum);
    }
};
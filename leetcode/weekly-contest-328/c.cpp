// Count the Number of Good Subarrays
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        int i = 0, j = 0;
        unordered_map<long long, long long> mp;
        long long cnt = 0;

        while (j < nums.size()) {
            cnt += mp[nums[j]];
            mp[nums[j]]++;
            if (cnt >= k) {
                int t = i;
                while (cnt >= k && i <= j) {
                    mp[nums[i]]--;
                    cnt -= mp[nums[i]];
                    ++i;
                }
                if (i - t == 1 || (nums.size() - j - 1) == 0) 
                    ans += (nums.size() - j - 1) + i - t;
                else
                    ans += (nums.size() - j) * (i - t);
            }
            ++j;
        }
        return ans;
    }
};
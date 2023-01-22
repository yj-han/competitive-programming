// Apply Bitwise Operations to Make Strings Equal
#include <iostream>

using namespace std;

class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        // 1 -> 0: 1 ^ 1 => ones - 1, zeros + 1
        // 0 -> 1: 0 | 1 , 0 ^ 1 => ones + 1, zeros - 1
        //         0 ^ 1   0 | 1 => ones + 1, zeros - 1
        
        int ones = 0;
        int zeros = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                ones++;
            else
                zeros++;
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != target[i]) {
                if (s[i] == '0') {
                    if (ones == 0)
                        return false;
                    ones += 1;
                    zeros -= 1;
                }
            }
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != target[i]) {
                if (s[i] == '1') {
                    if (ones <= 1)
                        return false;
                    ones -= 1;
                    zeros += 1;
                }
            }
        }
        
        return true;
    }
};
// Alternating Digit Sum
#include <iostream>

using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        int answer = 0;
        bool positve = true;
        string number = to_string(n);
        
        for (int i = 0; i < number.size(); i++) {
            if (i % 2 == 0) {
                answer += number[i] - '0';
            } else {
                answer -= number[i] - '0';
            }
        }
        
        return answer;
    }
};
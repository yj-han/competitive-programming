// Make Number of Distinct Characters Equal
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    void insertAndRemove(unordered_map<char,int>& mp, char toInsert, char toRemove) {
        mp[toInsert]++;
        mp[toRemove]--;
        if (mp[toRemove] == 0)
            mp.erase(toRemove);
    }
	    
    bool isItPossible(string word1, string word2) {
        unordered_map<char,int> mp1, mp2;
        
        for (char w1: word1)
            mp1[w1]++;
        for (char w2: word2)
            mp2[w2]++;

        for (char c1 = 'a'; c1 <= 'z'; c1++) {
            for(char c2 = 'a'; c2 <= 'z'; c2++) {
                if (mp1.count(c1) == 0 || mp2.count(c2) == 0)
                    continue;

                insertAndRemove(mp1, c2, c1);
                insertAndRemove(mp2, c1, c2);
                
                if (mp1.size() == mp2.size())
                    return true;
				
                insertAndRemove(mp1, c1, c2);
                insertAndRemove(mp2, c2, c1);              
            }
        }
        
        return false;
    }
};
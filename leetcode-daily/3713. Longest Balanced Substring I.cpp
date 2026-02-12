#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int maxLen = 0;

        for(int i = 0; i < n; i++){
            vector<int> freq(26,0);
            for(int j = i; j < n; j++){
                freq[s[j] - 'a']++;
                int minFreq = INT_MAX;
                int maxFreq = 0;

                for(auto it : freq){
                    if(it > 0){
                        minFreq = min(minFreq , it);
                        maxFreq = max(maxFreq, it);
                    }
                }
                if(minFreq == maxFreq){
                    maxLen = max(j-i +1, maxLen);
                }
            }
        }
        return maxLen;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int maxLen = 0;
        sort(nums.begin(), nums.end());
        for(int j = 0; j < n; j++){
            while((long long)nums[j] > (long long)nums[i] *k){
                i++;
            }
            maxLen = max(maxLen , j - i +1);
        }
        return n - maxLen;
    }
};
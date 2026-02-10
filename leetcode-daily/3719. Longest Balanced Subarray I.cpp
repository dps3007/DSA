#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        static bool evenSeen[100001], oddSeen[100001];

        for (int i = 0; i < n; i++) {

            // reset for each start index
            memset(evenSeen, false, sizeof(evenSeen));
            memset(oddSeen, false, sizeof(oddSeen));

            int evenCnt = 0, oddCnt = 0;

            for (int j = i; j < n; j++) {
                int x = nums[j];

                if (x % 2 == 0) {
                    if (!evenSeen[x]) {
                        evenSeen[x] = true;
                        evenCnt++;
                    }
                } else {
                    if (!oddSeen[x]) {
                        oddSeen[x] = true;
                        oddCnt++;
                    }
                }

                if (evenCnt == oddCnt) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};

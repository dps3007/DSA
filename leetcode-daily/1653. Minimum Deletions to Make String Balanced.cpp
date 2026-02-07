#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int bCnt = 0;
        int del = 0;

        for(auto it : s){
            if(it == 'b'){
                bCnt++;
            }else{  // it == a
                del = min(del +1, bCnt);
            }
        }
        return del;
    }
};
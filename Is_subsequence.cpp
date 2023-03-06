#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_index = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[s_index]){
                s_index ++;
            }
            if(s_index == s.size()){
                return true;
            }
        }
        return s==t;
    }
};
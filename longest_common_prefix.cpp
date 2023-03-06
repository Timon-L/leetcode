#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common;
        bool end = false;
        int steps = 1;
        string last_letter(1, strs[0][0]);
        string curr_letter = "";

        if(strs.size() == 1){
            return strs[0];
        }

        while(!end){
            for(int i = 0; i < steps; i++){
                for(int j = 1; j < strs.size(); j++){
                    if(steps >= strs[j].size() + 1){
                        end = true;
                        break;
                    }
                    curr_letter.push_back(strs[j][i]);
                    if(last_letter != curr_letter){
                        end = true;
                        break;
                    }
                    last_letter = curr_letter;
                    curr_letter = "";
                }
                if(end){
                    break;
                }
                common = common.append(last_letter);
                last_letter = "";
                last_letter.push_back(strs[0][steps]);
                steps++;
            }
        }
        return common;
    }
};
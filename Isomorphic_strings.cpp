#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;
        for(int i = 0; i < s.size(); i++){
            s_map[s[i]] += i;
            t_map[t[i]] += i;
        }
        for(int j = 0; j < s.size(); j++){
            if(s_map[s[j]] != t_map[t[j]]){
                return false;
            }
        }
        return true;
    }   
};
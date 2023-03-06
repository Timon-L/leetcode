#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int word_length = 0;
        int tail = s.size() - 1;
        for(int i = tail; i >= 0; i--){
            if(s[tail] != ' '){
                break;
            }
            tail--;
        }
        for(int i = tail; i >= 0; i--){
            if(s[i] == ' '){
                break;
            }
            word_length ++;
        }
        return word_length;
    }
};
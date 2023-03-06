#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string number = to_string(x);
        int head = 0;
        int tail = number.size() - 1;
        while(head < number.size() && tail > 0){
            if(number[head] != number[tail]){
                return false;
            }
            head++;
            tail--;
        }
        return true;
    }
};
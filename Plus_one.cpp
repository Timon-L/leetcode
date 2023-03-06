#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int tail = digits.size() - 1;
        while(tail >= 0){
            if(digits[tail] + carry > 9){
                digits[tail] = 0;
                carry = 1;
            }
            else{
                digits[tail] = digits[tail] + carry;
                carry = 0;
                break;
            }
            tail--;
        }
        if(carry){
            digits.insert(digits.begin(), 1);

        }
        return digits;
    }
};
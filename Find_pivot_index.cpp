#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l_sum = 0;
        int r_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            r_sum += nums[i];
        }
        for(int j = 0; j < nums.size(); j++){
            l_sum += nums[j];
            if(l_sum == r_sum){
                return j;
            }
            r_sum -= nums[j];
        }
        return -1;
    }
};
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int curr = nums.size()/2;
        int start = 0;
        int end = curr;
        if(nums[curr] <= target){
            start = curr;
            end = nums.size();
        }
        for(int i = start; i < end; i++){
            if(nums[i] == target){
                return i;
            }
        }   
        return -1;
    }
};
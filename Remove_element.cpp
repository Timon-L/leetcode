#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k{}; 
        vector<int> not_targets{};

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                not_targets.push_back(nums[i]);
                k++;
            }
        }
        for(int i = not_targets.size() - 1; i < nums.size(); i++){
            not_targets.push_back(0);
        }
        nums.swap(not_targets);
        return k;
    }
};
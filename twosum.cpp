#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> ans;
         for(int i = 0; i < nums.size(); i++){
             if(ans.find(nums[i]) != ans.end()){
                 return {i, ans.at(nums[i])};
             }
             ans.insert({target - nums[i], i});
         }
        return {};
    }
};
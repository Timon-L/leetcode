#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        set<int> uniques;
        for(int i = 0; i < nums.size(); i++){
            uniques.insert(nums[i]);
        }

        for(int unique: uniques){
            nums[k] = unique;
            k++;
        }

        return k;
    }
};
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int head = 0;
        int tail = nums.size() - 1;
        int mid = nums.size() / 2;
        while(mid != head && mid != tail){
            if(nums[mid] > target){
                tail =  mid;
                mid = (tail + head) / 2;
            }
            else{
                head = mid;
                mid = (tail + head) / 2;
            }
        }
        if(nums[head] >= target){
            return head;
        }
        if(nums[tail] < target){
            return tail + 1;
        }
        return tail;
    }
};
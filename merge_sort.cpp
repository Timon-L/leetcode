#include <iostream>
#include <vector>
using namespace std;

void merge(int head, int mid, int tail, vector<int>& nums){
    vector<int> left_vec{};
    vector<int> right_vec{};
    int temp = 0;
    int left = 0;
    int right = 0;
    int nums_index = head;

    for(int i = head; i <= mid; i++){
        left_vec.push_back(nums[i]);
    }

    for(int i = mid + 1; i <= tail; i++){
        right_vec.push_back(nums[i]);
    }

    while(left < left_vec.size() && right < right_vec.size()){
        if(left_vec[left] <= right_vec[right]){
            nums[nums_index] = left_vec[left];
            left++;
        }
        else{
            nums[nums_index] = right_vec[right];
            right++;
        }
        nums_index ++;
    }

    while(left < left_vec.size()){
        nums[nums_index] = left_vec[left];
        left++;
        nums_index ++;
    }

    while(right < right_vec.size()){
        nums[nums_index] = right_vec[right];
        right++;
        nums_index ++;
    }

    right_vec.clear();
    left_vec.clear();
}

void mergeSort(int head, int tail, vector<int>& nums){
    if(head >= tail){
        return;
    }

    auto mid = head + (tail - head) / 2;
    mergeSort(head, mid, nums);
    mergeSort(mid + 1, tail, nums);
    merge(head , mid, tail, nums);
}

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0, nums.size() - 1, nums);
        return nums;
    }
};
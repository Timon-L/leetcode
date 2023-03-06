#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int f_good = n/2;
        while(start <= end){
            if(!isBadVersion(f_good) && f_good < n){
                if(isBadVersion(f_good + 1)){
                    return f_good + 1;
                }
                else{
                    start = f_good + 1;
                    f_good = start/2 + end/2;
                }
            }
            else if(isBadVersion(f_good) && f_good >= 1){
                if(!isBadVersion(f_good - 1)){
                    return f_good;
                }
                else{
                    end = f_good - 1;
                    f_good = start/2 + end/2;
                }
            }
        }
        return -1;
    }
};
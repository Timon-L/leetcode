#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef int (*operators) (int a, int b);

int sub(int a, int b){
  return (a - b);
}

int product(int a, int b){
  return (a * b);
}

int sum(int a, int b){
  return (a + b);
}

operators functions[] =
{
    sub,
    product,
    sum
};

int is_fourty_two(int a, int b, int c, int d, int e){
    for(size_t i = 0; i < 3; i++){
        for(size_t j = 0; j < 3; j++){
            for(size_t k = 0; k < 3; k++){
                for(size_t p = 0; p < 3; p++){
                    if(functions[p](functions[k](functions[j](functions[i](a, b), c), d), e) == 42){
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void find_fourty_two(vector<int> nums){
  for(size_t i = 0; i < nums.size(); i++){
    for(size_t j = 0; j < nums.size(); j++){
        if(i == j){
            continue;
        }
        for(size_t k = 0; k < nums.size(); k++){
            if(j == k || i == k){
                continue;
            }
            for(size_t p = 0; p < nums.size(); p++){
                if(k == p || j == p || i == p){
                    continue;
                }
                for(size_t m = 0; m < nums.size(); m++){
                    if(p == m || k == m || j == m || i == m){
                        continue;
                    }
                    //cout << nums[i] << " " << nums[j] << " " << nums[k] << " " << nums[p] << " " << nums[m] << endl;
                    if(is_fourty_two(nums[i], nums[j], nums[k], nums[p], nums[m])){
                        cout << "YES" << endl;
                        return;
                    };
                }
            }
        }
    }
  }
  cout << "NO" << endl;
}


void num_op(string line){
  vector<int> nums{};
  string digit{};
  for(size_t i = 0; i < line.size(); i++){
    if(line[i] == ' '){
      nums.push_back(stoi(digit));
      digit = "";
    }
    else{
      digit += line[i];
    }
  }
  nums.push_back(stoi(digit));
  digit = "";
  find_fourty_two(nums);
}

int main() {
  string line;
  while (getline(cin, line)) {
    num_op(line);
  }
}

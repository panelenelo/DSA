#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum_set(vector<int>& nums, int target) {
        unordered_map<int, int> set;
        vector<int> arr;
        for(int i=0 ; i<nums.size() ; i++){
            int x = target - nums[i];
            if(set.count(x)){
                arr = {set[x], i};
                return arr;
            }else{
                set[nums[i]] = i;
            }
        }
        return arr;
    }
};


int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    Solution x;
    vector<int> arr = x.twoSum_set(nums, target);

    for (auto i: arr){
        cout << i << " ";
    }

    return 0;
}


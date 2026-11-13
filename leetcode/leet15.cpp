#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> set_nums;
        vector<vector<int>> results;
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i<nums.size()-2){

            if(i>0 && nums[i] == nums[i-1])
                continue;
            if(nums[i]>0)
                break;

            int low = i+1;
            int high = nums.size()-1;
            while(low<high){
                if(nums[i]+nums[low]+nums[high] < 0){
                    low++;
                    continue;
                }else if(nums[i]+nums[low]+nums[high] > 0){
                    high--;
                    continue;
                }else{
                    set_nums.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
            i++;        
        }
        for(auto i : set_nums){
            results.push_back(i);
        }

        return results;
    }
};


int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    Solution x;
    vector<vector<int>> arr = x.threeSum(nums);

    for (auto i: arr){
        for (auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}


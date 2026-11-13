#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> results;
        
        int i = 0;
        while(i<nums.size()-2){
            if(i>0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }
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
                    results.push_back({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }

                while(low<high && nums[low] == nums[low-1])
                    low++;
                while(high>low && nums[high] == nums[high+1])
                    high--;
            }
            i++;        
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


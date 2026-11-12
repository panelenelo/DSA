#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Key is the number, value is the index in nums
        unordered_map<int, int> map_nums;
        vector<vector<int>> results;
        int i = 0;
        while(i<nums.size()-1){
            if(!map_nums.count(nums[i]))
                map_nums[nums[i]] = i;

            for(int j=i+1 ; j<nums.size() ; j++){
                if(!map_nums.count(nums[j]))
                    map_nums[nums[j]] = j;

                int x = -(i)-(j);
                if(map_nums.count(x))
                    results.insert(results.end(), {x, nums[i], nums[j]});

                // cout << x << " " << nums[i] << " " << nums[j] << endl;
            }
            i++;
            map_nums.clear();
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


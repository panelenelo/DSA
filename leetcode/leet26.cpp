#include <bits/stdc++.h>
#include <iostream>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i=0,j=1;j<nums.size();){
            if(nums[j] == 101)
                break;
            if(nums[i]!=nums[j]){
                i++;
                k++;
                j++;
                continue;
            }else{
                nums.erase(nums.begin()+j);
                nums.push_back(101);
            }
        }

        return k;
    }

    int removeDuplicates_Re(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};


int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    // vector<int> nums = {0,1,2,3,4,5,6,7,8,9};
    // vector<int> nums = {0,0,0,0,0,0,0,0,0,0,0};
    // vector<int> nums = {1};

    Solution x;
    int k = x.removeDuplicates_Re(nums);

    for(auto i : nums)
        cout << i << endl;
    cout << "k = " << k << endl;

    return 0;
}


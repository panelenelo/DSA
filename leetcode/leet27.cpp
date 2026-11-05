#include <bits/stdc++.h>
#include <iostream>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x = 0;
        int i = 0;
        int j = nums.size()-1;

        while(i<j){
            if(nums[i] == val){
                if(nums[j] == val){
                    x++;
                    j--;
                    continue;
                }else{
                    nums[i] = nums[j];
                    x++;
                    i++;
                    j--;
                }
            }else{
                i++;
            }
        }

        return nums.size() - x;
    }
};


int main(){

    // vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    // vector<int> nums = {0,1,2,3,4,5,6,7,8,9};
    // vector<int> nums = {0,0,0,0,0,0,0,0,0,0,0};
    vector<int> nums = {1};
    // vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    Solution x;
    int k = x.removeElement(nums, val);

    // for(auto i : nums)
    for(int i=0 ; i<k ; i++)
        cout << nums[i] << " ";
    cout << endl << "k = " << k << endl;


    return 0;
}


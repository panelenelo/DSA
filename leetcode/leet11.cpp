#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;


class Solution {
public:
    int maxArea(vector<int> &height) {
        int i = 0;
        int j = height.size()-1;
        int area=0;
        
        while(i<j){
            int minH = min(height[i], height[j]);
            int x = minH * (j - i);
            if(x > area){
                area = x;
            }
            if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }
        }
        
        return area;
    }
};


int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    Solution sol;
    int area = sol.maxArea(height);
    
    cout << area << endl;

    return 0;
}


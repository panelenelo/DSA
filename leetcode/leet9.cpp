#include <bits/stdc++.h>
#include <iostream>

using namespace std;


class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0){
            return false;
        }
        
        vector<int> list;
        // long int y = x;
        
        while(true){
            if(x > 9){
                list.insert(list.begin(), x%10);
                x = x/10;
                continue;
            }else{
                list.insert(list.begin(),x);
                break;
            }
        }

        for(auto i: list){
            cout << i << " ";
        }
        
        for(int i=0,j=list.size()-1 ; i<=j ; i++,j--){
            if(list[i] != list[j]){
                return false;
            }
        }
        return true;
    }
};


int main(){
    long int x = 121121;

    Solution sol;
    bool k = sol.isPalindrome(x);

    cout << endl << k << endl;

    return 0;
}


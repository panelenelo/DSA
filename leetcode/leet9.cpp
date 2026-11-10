#include <bits/stdc++.h>
#include <iostream>

using namespace std;


class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0)
            return false;
                
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
        
        for(int i=0,j=list.size()-1 ; i<=j ; i++,j--){
            if(list[i] != list[j]){
                return false;
            }
        }
        return true;
    }

    bool isPalindrome_Re(long int x) {
        if(x<0)
            return false;

        long int y=0;

        long int temp = x;
        while(true){
            if(temp > 9){
                y = (y*10)+(temp%10);
                temp = temp/10;
            }else{
                y = (y*10)+temp;
                break;
            }
        }

        if(x != y){
            return false;
        }else{
            return true;
        }
    }
};


int main(){
    long int x = 121121;

    Solution sol;
    bool k = sol.isPalindrome_Re(x);

    cout << endl << k << endl;

    return 0;
}


#include <vector>

int binarySearch_me(vector<int> &toSearch, int searched){

    int left = 0;
    int right = toSearch.size()-1;
    int mid = (left+right)/2;

    while(left <= right){

        if(toSearch[mid] == searched){
            return mid;
        }

        if(toSearch[mid] < searched){
            left = mid+1;
        }else{
            right = mid-1;
        }

        mid = (left+right)/2;
    }

    return -1;
}
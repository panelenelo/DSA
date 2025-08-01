#include "../sorting/randVector.hpp"
#include "../sorting/mergesort.hpp"
#include "binarysearch.hpp"

using namespace std;

int main(){

    vector<int> toSearch = rand_vector(10);
    mergesort_me(toSearch);

    for(int i: toSearch){
        cout << i << endl;
    }
    cout << endl;

    int searched, index;
    cin >> searched;
    
    cout << "---------" << endl;


    index = binarySearch_me(toSearch, searched);

    if(index != -1){
        cout << "number: " << searched << " found at index: " << index << endl;
    }else{
        cout << "number not found on list given" << endl;
    }

    cout << "---------" << endl;
    
    return 0;
}



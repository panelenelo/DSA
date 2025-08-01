#include "../sorting/randVector.hpp"
#include "../sorting/mergesort.hpp"
#include "binarysearch.hpp"

using namespace std;

int main(){

    vector<int> toSearch = rand_vector(10);
    mergesort_me(toSearch);

    int searched;

    for(int i: toSearch){
        cout << i << endl;
    }

    cout << "---------" << endl;

    binarySearch_me(toSearch, searched);

    cout << "---------" << endl;
    
    return 0;
}



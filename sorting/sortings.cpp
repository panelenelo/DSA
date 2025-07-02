#include "randVector.hpp"
#include "bubblesort.hpp"
#include "insertionsort.hpp"
#include "heapsort.hpp"
#include "quicksort.hpp"
#include "mergesort.hpp"

using namespace std;

int main(){

    vector<int> toSort = rand_vector(10);

    for(int i: toSort){
        cout << i << endl;
    }

    cout << "---------" << endl;

    mergesort_me(toSort);

    cout << "---------" << endl;
    
    for(int i: toSort){
        cout << i << endl;
    }    

    return 0;
}



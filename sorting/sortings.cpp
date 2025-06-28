#include "randVector.hpp"
#include "bubblesort.hpp"
#include "insertionsort.hpp"
#include "heapsort.hpp"
#include "quicksort.hpp"
#include "mergesort.hpp"

using namespace std;

int main(){

    vector<int> toSort = rand_vector(5);

    for(int i: toSort){
        cout << i << endl;
    }

    cout << "---------" << endl;

    insertionsort_me(toSort);
    
    for(int i: toSort){
        cout << i << endl;
    }    

    return 0;
}



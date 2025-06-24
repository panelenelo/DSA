#include "randVector.hpp"
#include "bubblesort.hpp"

using namespace std;

int main(){

    vector<int> toSort = rand_vector(5);

    for(int i: toSort){
        cout << i << endl;
    }

    cout << "---------" << endl;

    bubblesort_me(toSort);
    
    for(int i: toSort){
        cout << i << endl;
    }    

    return 0;
}



#include "randVector.hpp"
#include "bubblesort.hpp"
#include "insertionsort.hpp"
#include "heapsort.hpp"
#include "mergesort.hpp"

using namespace std;

int main(){
    /*
    vector<int> toSort = rand_vector(5);

    for(int i: toSort){
        cout << i << endl;
    }

    cout << "---------" << endl;

    insertionsort_me(toSort);
    
    for(int i: toSort){
        cout << i << endl;
    } 
    
    list<int> lt = {2,3,4,5,6};
    list<int>::iterator it;
    it = lt.begin();
    
    cout << *it << endl;
    
    */

    list<int> lst = {2,6,4,5,6};
    list<int>::iterator it;
    it = lst.begin();

    cout << "---------" << endl;
    for(int i: lst){
        cout << i << endl;
    }
    cout << "---------" << endl;
    

    return 0;
}



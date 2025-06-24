#include <vector>

using namespace std;

vector<int> bubblesort_me(vector<int> &toSort){


    // Bubble sort
    for(int i=0 ; i<toSort.size() ; i++){
        for(int j=0 ; j<toSort.size()-(i+1) ; j++){
            if(toSort[j] > toSort[j+1]){
                int aux = toSort[j+1];
                toSort[j+1] = toSort[j];
                toSort[j] = aux;
            }
        }
    }


    return toSort;
}



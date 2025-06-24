#include "randVector.hpp"

using namespace std;

int main(){

    vector<int> toSort = rand_vector(5);

    for(int i : toSort){
        cout << i << endl;
    }

    cout << "------" << endl;

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


    for(int i : toSort){
        cout << i << endl;
    }

    return 0;
}




  
  
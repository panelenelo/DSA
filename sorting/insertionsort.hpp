#include <vector>
#include <list>

using namespace std;

vector<int> insertionsort_me(vector<int> &toSort){

    // Insersion sort
    list<int> sorted;
    list<int>::iterator it;

    for(int i=0 ; i<toSort.size() ; i++){
        if(i==0){
            sorted.push_front(toSort[i]);
            it = sorted.begin();
        }else{
            for(it=sorted.begin() ; it!=sorted.end() ; it++){
                if(toSort[i] < *it){
                    sorted.insert(it, toSort[i]);
                }
                // Need to put a check that if it reaches the sorted.end() i have to insert it into the end
            }
        }
    }


    return toSort;
}



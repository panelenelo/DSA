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
                    break;
                }
            }
            if(it == sorted.end()){
                sorted.push_back(toSort[i]);
            }
        }
    }    

    toSort.clear();
    
    it = sorted.begin();
    while(it!=sorted.end()){
        toSort.push_back(*it);
        it++;
    }

    return toSort;
}



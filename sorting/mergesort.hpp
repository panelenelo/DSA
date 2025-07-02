#include <vector>
#include <list>

using namespace std;

list<int> merge(list<int> &left, list<int> &right){

    // Iterating through both right and left, and through the new
    //to be sorted one.

    list<int> merged;
    list<int>::iterator it;
    // it = merged.begin();
    // list<int>::iterator itL;
    // itL = left.begin();
    // list<int>::iterator itR;
    // itR = right.begin();

    // while((itL != left.end()) && (itR != right.end())){
        
    //     if(*itL <= *itR){
    //         merged.push_back(*itL);
    //         it++;
    //         itL++;
    //     }else{
    //         merged.push_back(*itR);
    //         it++;
    //         itR++;
    //     }        
    // }
    // it++;
    // merged.insert(it, itL, left.end());
    // merged.insert(it, itR, right.end());

    // Iterating though only right and inserting in the new
    // to be sorted one, since these are lists there will be
    // no added complexity to adding in the middle of the list
    
    merged = left;
    it = merged.begin();

    while((it != merged.end()) && !(right.empty())){
        if(right.front() <= *it){
            merged.insert(it, right.front());
            right.pop_front();
        }else if(next(it) == merged.end()){
            merged.push_back(right.front());
            right.pop_front();
        }else{
            it++;
        }
    }

    return merged;
}

list<int> split(list<int> &toSort){

    if(toSort.size() == 1){
        return toSort;
    }

    int mid = toSort.size()/2;
    list<int>::iterator it;
    it = toSort.begin();

    for(int i=0 ; i<mid ; i++){ it++; }

    list<int> left (toSort.begin(), it);
    list<int> right (it, toSort.end());

    list<int> sortLeft = split(left);
    list<int> sortRight = split(right);

    return merge(sortLeft, sortRight);
}

vector<int> mergesort_me(vector<int> &toSort){


    // Merge sort
    list<int> lst;
    for(int i : toSort){
        lst.push_back(i);
    }

    lst = split(lst);

    // making the list a vector and returning.
    toSort.clear();
    list<int>::iterator it;

    it = lst.begin();
    while(it!=lst.end()){
        toSort.push_back(*it);
        it++;
    }

    return toSort;
}


#include <bits/stdc++.h>

using namespace std;

vector<int> rand_vector(int size){

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> distrib(0, 149);

    vector<int> vec(size);
    generate(vec.begin(), vec.end(), [&]() {
        return distrib(gen);
    });

    return vec;

}
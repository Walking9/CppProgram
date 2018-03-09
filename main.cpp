#include <iostream>
#include "Sort.h"

int main() {
    vector<int> test;
    test.push_back(2444);
    test.push_back(8);
    test.push_back(4);
    test.push_back(66);
//    ShellSort(test);
//    for(int i=0; i<test.size(); i++) {
//        cout << test.at(i) << " ";
//    }
    int array[6] = {2,5463, 34, 5463, 54,3};
    MergeSort(array, 6);
    for(int i=0; i<6; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
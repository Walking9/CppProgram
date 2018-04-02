//
// Created by brunon on 18-3-31.
//

#ifndef CPPPROGRAM_GETLEASTNUMBERS_H
#define CPPPROGRAM_GETLEASTNUMBERS_H

#include "include.h"

class GetLeastNumbersClass {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> v;
        int len = input.size();
        if(0 == len || len < k) return v;
        for(int i=0; i<k; i++)
            v.push_back(input[i]);
        for(int i=k/2-1; i>=0; i--) {
            heapify(v, i, k-1);     //建k个元素的堆：0~k-1
        }
        for(int i=k; i<len; i++) {
            if(input[i] < v[0]) {
                v[0] = input[i];
                heapify(v, 0, k-1);
            }
        }
        return v;
    }

    void heapify(vector<int>& input, int begin, int end) {  //调整子堆函数
        int father = begin, son = father*2+1, tmp;
        while(son <= end) {
            if(son+1 <= end && input[son+1] > input[son]) son++;
            if(input[son] <= input[father]) break;
            else {
                tmp = input[son];
                input[son] = input[father];
                input[father] = tmp;
                father = son;
                son = father*2+1;
            }
        }
    }
};

#endif //CPPPROGRAM_GETLEASTNUMBERS_H

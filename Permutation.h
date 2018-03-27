//
// Created by brunon on 18-3-26.
//

#ifndef CPPPROGRAM_PERMUTATION_H
#define CPPPROGRAM_PERMUTATION_H

#include "include.h"

class PermutationClass {
public:
    vector<string> Permutation(string str) {
        vector<string> v;
        if(str.size() == 0)
            return v;
        PermutationHelp(v, str, 0);
        return v;
    }
    void PermutationHelp(vector<string>& v, string str, int begin) {
        int len = str.size();
        if(len == begin) {
            v.push_back(str);
            return;
        }
        for(int i=begin; i<len; i++) {
            if(i != begin  && str[i] == str[begin])
                continue;
            swap(str[i], str[begin]);
            PermutationHelp(v, str, begin+1);
        }
    }
};

#endif //CPPPROGRAM_PERMUTATION_H

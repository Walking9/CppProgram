//
// Created by brunon on 18-3-22.
//

#ifndef CPPPROGRAM_VERIFYSQUENCEOFBST_H
#define CPPPROGRAM_VERIFYSQUENCEOFBST_H

#include "include.h"

/*
 * 输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
 * 如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
 * */

class VerfySquenceOfBSTClass {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(0 == sequence.size())
            return false;
        if(1 == sequence.size())
            return  true;
        int root = sequence[sequence.size()-1];
        bool flag = true;
        vector<int> left, right;
        for(int i=0; i<sequence.size()- 1; i++) {
            if(sequence[i] < root) {
                if (!flag) return false;          //断言不是某二叉搜索树的后序遍历的结果
                left.push_back(sequence[i]);
            }
            if(sequence[i] > root) {
                right.push_back(sequence[i]);
                if(flag) flag = false;
            }
        }
        //if(left.empty() && right.empty())   <==>   1 == sequence.size()
        if(left.empty() && !right.empty()) return VerifySquenceOfBST(right);
        else if(!left.empty() && right.empty()) return VerifySquenceOfBST(left);
        else return VerifySquenceOfBST(right) && VerifySquenceOfBST(left);
    }
};

#endif //CPPPROGRAM_VERIFYSQUENCEOFBST_H

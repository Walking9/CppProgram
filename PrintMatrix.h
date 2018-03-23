//
// Created by brunon on 18-3-18.
//

#ifndef CPPPROGRAM_PRINTMATRIX_H
#define CPPPROGRAM_PRINTMATRIX_H

#include <stack>
#include "include.h"

/*题目描述
输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
 例如，如果输入如下矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.*/

class PrintMatrixClass {       //牛客判题系统未通过。。。。。
public:
    vector<int> printMatrix(vector<vector<int>> matrix) {
        vector<int> myvector, remain;
        vector<vector<int>> temp;
        if(0 == matrix.size())
            return myvector;
        int i=0, j=0;
        for(; i<matrix[0].size(); i++)         //存储外围矩阵
            myvector.push_back(matrix[0][i]);
        i--;
        for(j=1; j<matrix.size(); j++)
            myvector.push_back(matrix[j][i]);
        j--;
        i--;
        for(; i>=0; i--)
            myvector.push_back(matrix[j][i]);
        j--;
        for(; j>=1; j--)
            myvector.push_back(matrix[j][0]);
        if(matrix.size() >= 3)
            for(j=1; j<matrix.size()-1; j++) {   //去除外围矩阵的中心矩阵
                for(i=1; i<matrix[0].size()-1; i++) {
                    remain.push_back(matrix[j][i]);
                }
                temp.push_back(remain);
                remain.clear();
            }
        remain = printMatrix(temp);
        for(i=0; i<remain.size(); i++)
            myvector.push_back(remain[i]);
        return myvector;
    }
};

#endif //CPPPROGRAM_PRINTMATRIX_H

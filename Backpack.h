//
// Created by brunon on 18-4-3.
//

#ifndef CPPPROGRAM_BACKPACK_H
#define CPPPROGRAM_BACKPACK_H

#include "include.h"

class BackpackClass {
public:
    int backpack(const vector<int> w, const vector<int> v, int c) {  //w：重量， v：价值， c：背包容量
        int count = w.size();    //count记录物体个数
        int** m = new int*[count+1];   //动态分配count * c 二维数组
        for(int i=0; i<count+1; i++) {
            m[i] = new int[c+1];
        }
        for(int j=1; j<=c; j++){  //初始化一个物体的情况，第一列不用
            if(j >= w[0]){
                m[0][j] = v[0];
            }
        }
        for(int i=1; i<v.size(); i++) {
            for(int j=1; j<=c; j++) {
                if(j < w[i]) m[i][j] = m[i-1][j];   //剩余容量不够装则不装
                else {
                    m[i][j] = max(m[i-1][j-w[i]]+v[i], m[i-1][j]); //状态转移方程
                }
            }
        }
//        for(int i=0; i<count; i++) {
//            for(int j=0; j<c+1; j++)
//                cout << m[i][j] << " ";
//            cout << endl;
//        }

        int *x = new int[count];
        for(int i=v.size()-1; i>=1; i--) {
            if(m[i][c] > m[i-1][c]) {
                x[i] = 1;
                c -= w[i];
            }
            else x[i]=0;
        }
        if(c >= w[0]) x[0] = 1;    //判断第一个要不要装，如果剩余空间够就装
        //此时得到的是x数组装了哪些物体，1-装，0-没有装
        return m[count-1][c];
    }
};

#endif //CPPPROGRAM_BACKPACK_H

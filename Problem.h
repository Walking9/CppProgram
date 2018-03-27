//
// Created by brunon on 18-3-25.
//

#ifndef CPPPROGRAM_PROBLEM_H
#define CPPPROGRAM_PROBLEM_H

#include "include.h"

//***********网易笔试
//int t, nTmp, answer, size;
//string str;
//vector<int> n;
//vector<string> s;
//cin >> t;
//for(int i=0; i<t; i++) {
//cin >> nTmp;
//n.push_back(nTmp);
//cin >> str;
//s.push_back(str);
//}
//for(int i=0; i<t; i++) {
//answer = 0;
//size = s[i].size();
//for(int j=0; j<size; j++) {
//if(s[i][j] == 'X') {
//continue;
//}
//else {
//if(j+2 < size) {
//j+=2;
//answer++;
//}
//}
//}
//
//cout << answer << endl;
//}



//-----头条笔试3-24
//    int n, num1, num2;
//    cin >> n;
//    char c, symbol;
//    getchar();
//    for(int i=0; i<n; i++) {
//        num1 = getchar() - '0';
//        symbol = getchar();
//        num2 = getchar() - '0';
//        if(symbol == '+')
//            printNumber(num1 + num2);
//        else if(symbol == '-')
//            printNumber(num1 - num2);
//        else if(symbol == '*')
//            printNumber(num1 * num2);
//        if(symbol == '/')
//            printNumber(num1 / num2);
//        getchar();
//
//    }



//
//    int t = 0, temp = 0;
//    cin >> t;
//    vector<int> x, y, myvector;
//    for(int i=0; i < t; i++) {
//        for(int j=0; j < 4; j++) {
//            cin >> temp;
//            x.push_back(temp);
//        }
//        for(int j=0; j < 4; j++) {
//            cin >> temp;
//            y.push_back(temp);
//        }
//    }
//    //input end
//    for(int i=0; i < t; i++) {
//        myvector.push_back(sqrt(pow(x[0+4*i]-x[1+4*i], 2) + pow(y[0+4*i]-y[1+4*i], 2)));
//        myvector.push_back(sqrt(pow(x[0+4*i]-x[2+4*i], 2) + pow(y[0+4*i]-y[2+4*i], 2)));
//        myvector.push_back(sqrt(pow(x[0+4*i]-x[3+4*i], 2) + pow(y[0+4*i]-y[3+4*i], 2)));
//        myvector.push_back(sqrt(pow(x[1+4*i]-x[2+4*i], 2) + pow(y[1+4*i]-y[2+4*i], 2)));
//        myvector.push_back(sqrt(pow(x[1+4*i]-x[3+4*i], 2) + pow(y[1+4*i]-y[3+4*i], 2)));
//        myvector.push_back(sqrt(pow(x[2+4*i]-x[3+4*i], 2) + pow(y[2+4*i]-y[3+4*i], 2)));
//        sort(myvector.begin(), myvector.end());
//        if(myvector[0] == myvector[1] && myvector[0] > myvector[2] && myvector[2] == myvector[3] && myvector[3] == myvector[4] && myvector[4] == myvector[5])
//            cout << "Yes" << endl;
//        else
//            cout << "No" << endl;
//    }

void printNumber(int num) {  //字库,空间换时间
    int word[10][5][5] = {{{1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1}},
                          {{0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1}},
                          {{1, 1, 1, 1, 1},
                                  {0, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 0},
                                  {1, 1, 1, 1, 1}},
                          {{1, 1, 1, 1, 1},
                                  {0, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1},
                                  {0, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1}},

                          {{1, 0, 0, 0, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1},
                                  {0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1}},

                          {{1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 0},
                                  {1, 1, 1, 1, 1},
                                  {0, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1}},

                          {{1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 0},
                                  {1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1}},

                          {{1, 1, 1, 1, 1},
                                  {0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1},
                                  {0, 0, 0, 0, 1}},

                          {{1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1}},

                          {{1, 1, 1, 1, 1},
                                  {1, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1},
                                  {0, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 1}}};
    int count = 0, temp = num;
    while(0 != temp) {   //统计位数
        count++;
        temp /= 10;
    }
    int record = count*5 + 2*(count-1);
    int** display = new int*[5];
    for(int i=0; i<5; i++)
        display[i] = new int[record];
    int index, j=0;
    for(int i=count; i>=1; i--) {
        index=(num%(int)(pow(10, i)))/pow(10, i-1);//分离公式
        for(int m=0; m<5; m++) {
            for(int n=0; n<5; n++) {
                display[n][m+j*7] = word[index][n][m];
            }
        }
        j++;
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<record; j++) {
            if(display[i][j] == 1) cout << '6';
            else cout << '.';
        }
        cout << endl;
    }
}


//
//
//int function(vector<int> v, int k) {
//    sort(v.begin(), v.end());
//    int count = 0, target;
//    int size = v.size();
//    for(int i=0; i < size-1; i++) {
//        target = v[i] + k;
////        for(int j=0; j < v.size(); j++) {   //不用二分查找试试
////            if(v[j] == target){
////                count++;
////                break;
////            }
////            else if(v[j] > target) break;
////        }
//        if(find(v, i+1, size-1, target)) count++;
//
//    }
//    return count;
//}
//
//
//bool find(vector<int> v, int begin, int end, int target) {
//    int middle = (begin + end)/2;
//    while(begin != end) {
//        if(target > v[middle]) begin = middle + 1;
//        else if(target < v[middle]) end = middle - 1;
//        else return true;
//    }
//    if(v[begin] != target) return false;
//    else return true;
//}

#endif //CPPPROGRAM_PROBLEM_H

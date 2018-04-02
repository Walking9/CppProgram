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


//携程第一题
//    int n, num;
//    cin >> n;
//    int* array = new int[n];
//    int begin = 0, end = n-1;
//    for(int i=0; i<n; i++) {
//        cin >> num;
//        if(0 == num) {
//            *(array + end) = num;
//            end--;
//        } else {
//            *(array + begin) = num;
//            begin++;
//        }
//    }

//携程编程第三道
//    vector<vector<int>> v;
//    vector<int> tmp;
//    int n, input;
//    cin >> n;
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<3; j++){
//            cin >> input;
//            tmp.push_back(input);
//        }
//        tmp.clear();
//    }
//    vector<int> condition;
//    for(int i=0; i<3; i++) {
//        cin >> input;
//        condition.push_back(input);
//    }
//    for(int i=0; i<n; i++) {
//        if(v[i][0] > condition[0] && v[i][1] > condition[1]){
//            cout << i << "," << 1 << "," << v[i][2]*condition[2] << endl;
//            return 0;
//        }
//    }
//    cout << -1 << endl;
//    return 0;


//携程笔试第三题
//    int n, input;
//    cin >> n;
//    vector<vector<int>> v;
//    vector<int> tmp;
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<n; j++) {
//            cin >> input;
//            tmp.push_back(input);
//        }
//        v.push_back(tmp);
//    }
//    //通过旋转正方形
//    vector<int> l1, l2, l3, l4;
//    for(int i=0; i<n/2; i++) {
//        for(int j=i; j<n-i; j++) {   //记录四个边
//            l1.push_back(v[i][j]);
//            l2.push_back(v[j][n-1-i]);
//            l3.push_back(v[n-1-i][j]);
//            l4.push_back(v[j][i]);
//        }
//        for(int j=i; j<n-i; j++) {
//            v[j][n-1-i] = l1[j];
//            v[n-1-i][n-1-i-j] = l2[j];
//            v[n-1-i-j][i] = l3[j];
//            v[i][j] = l4[j];
//        }
//        l1.clear();
//        l2.clear();
//        l3.clear();
//        l4.clear();
//    }
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<n; j++) cout << v[i][j] << " ";
//        cout << endl;
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


//360笔试
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n, input, num, total;
//    cin >> n;
//    vector<vector<int>> v;
//    vector<int> tmp;
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<3; j++){
//            cin >> input;
//            tmp.push_back(input);
//        }
//        v.push_back(tmp);
//        tmp.clear();
//    }
//    for(int i=0; i<n; i++) {
//        num = v[i][2] - v[i][1];
//        total = v[i][0] + v[i][1] + v[i][2];
//        cout << (total-num)/3 << endl;
//    }
//    return 0;
//}


#endif //CPPPROGRAM_PROBLEM_H

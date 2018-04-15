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

/********4.3华为笔试************/
//    string s = "fasdf";
//    swap(s[0], s[3]);
//    cout << s;
//        string s;
//        cin >> s;
//        int len = s.length(), maxlen = 0, count = 0;
//        for(int i = 0; i < len; i++) {
//            count = 1;
//            //maxlen分奇偶讨论
//            for(int j = 1; j < len; j++) {
//                if(i-j< 0 || i+j >= len || s[i-j] != s[i+j]) break;  //一旦检测到不是对称子串则break
//                count += 2;
//            }
//            maxlen = max(maxlen, count);
//            count = 0;
//            for(int j = 1; j < len; j++) {
//                if(i-j+1 < 0 || i+j >= len || s[i-j+1] != s[i+j]) break;
//                count += 2;
//            }
//            maxlen = max(maxlen, count);
//        }
//        cout << maxlen;
//        return 0;
//}


//    string outString[] = {"Unspecified", "Loopback", "LinkLocal", "SiteLocal", "GlobalUnicast", "Multicast", "Error"};
//    string s;
//    cin >> s;
//    //先检查是不是Ipv6格式
//    int len = s.length(), i;
//    if(len != 39) {
//        cout << "Error" << endl;
//    } else {
//        for(i=0; i<len; i++) {
//            if(i%5 == 4 && '.' == s[i]) continue;
//            else if(('0' <= s[i] <= '9') || ('A' <= s[i] <= 'F') ) continue;
//            else {cout << "Error"<< endl; break;}
//        }
//        if(len == i){   //符合格式
//            if('F' == s[0] && 'E' == s[1] &&'8' <= s[2] <= 'B') {  //链路 FE80 ~ FEBF
//                cout << "LinkLocal" << endl;
//            }
//            else if('F' == s[0] && 'E' == s[1] &&'C' <= s[2] <= 'F') {  //链路 FE80 ~ FEBF
//                cout << "SiteLocal" << endl;
//            }
//            else if('F' == s[0] && 'F' == s[1]) {  //
//                cout << "Multicast" << endl;
//            }
//            else if(s[len-1] == '1') { //环回
//                for(i=0; i<len-1; i++){
//                    if(i%5 != 4 && s[i] != '0') break;
//                }
//                if(i == len-1) cout << "Loopback" << endl;
//            }
//            else cout << "GlobalUnicast" << endl;
//        }
//    }
//int myback, input;
//    char c = 0;
//    cin >> myback;
//    vector<int> w, v;
//    while('\n' != c) {
//        cin >> input;
//        c = getchar();
//        w.push_back(input);
//    }
//    c = 0;
//    while('\n' != c) {
//        cin >> input;
//        c = getchar();
//        v.push_back(input);
//    }
//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";
//    int* x = new int[5];
//    int **m = new int*[v.size()];   //二维数组
//    for(int i=0; i<v.size(); i++) {
//        m[i] = new int[myback+1];
//    }
//    for(int i=1; i<v.size(); i++) {
//        for(int j=1; j<=myback; j++) {
//            if(j < w[i]) m[i][j] = m[i-1][j];
//            else {
//                if(m[i-1][j-w[i]]+v[i] > m[i-1][j]) m[i][j] = m[i-1][j-w[i]]+v[i]; //选择价值较大者
//                else m[i][j]=m[i-1][j];
//            }
//        }
//    }
//    for(int i=v.size()-1;i>=1;i--){
//        if(m[i][myback] > m[i-1][myback]){
//            x[i] = 1;
//            myback -= w[i];
//        }
//        else x[i]=0;
//    }
//    for(int i=0; i<v.size(); i++) {
//        if(1 == x[i] && i != v.size()-1)
//            cout << i << " ";
//        if(1 == x[i] && i == v.size()-1)
//            cout << i;
//    }

//链家




/*
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
在小红家里面，有n组开关，触摸每个开关，可以使得一组灯泡点亮。
现在问你，使用这n组开关，最多能够使得多少个灯泡点亮呢？
输入
第一行一个n，表示有n组开关。
接下来n行，每行第一个整数为k，表示这个开关控制k个灯泡，接下来k个整数，表示控制的灯泡序号。
满足:
1<=n<=1000
1<=k<=1000
序号是在int范围内正整数。
输出
输出最多多少个灯泡点亮。

样例输入
3
1 1
1 2
2 1 2
样例输出
2

 */
//    int n, k, light;
//    cin >> n, k;
//    set<int> myset;
//    for(int i=0; i<n; i++) {
//        cin >> k;
//        for(int j=0; j<k; j++) {
//            cin >> light;
//            myset.insert(light);
//        }
//    }
//    cout << myset.size() << endl;


/*
 * triangle
时间限制：C/C++语言 3000MS；其他语言 5000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
在迷迷糊糊的大草原上，小红捡到了n根木棍，第i根木棍的长度为i，小红现在很开心。
她想选出其中的三根木棍组成美丽的三角形。
但是小明想捉弄小红，想去掉一些木棍，使得小红任意选三根木棍都不能组成三角形。
请问小明最少去掉多少根木棍呢？
输入
本题包含若干组测试数据。
对于每一组测试数据。
第一行一个n，表示木棍的数量。
满足 1<=n<=100000
输出
输出最少数量

样例输入
4
样例输出
1
 * */
//int n, count = 0;
//cin >> n;
//if(n <= 3) cout << 0 << endl;
//else {
//int min1 = 2, min2 = 3, tmp;
//while(min1 + min2 <= n) {
//count += (min1-1);
//tmp = min2;
//min2 += min1;
//min1 = tmp;
//}
//count += (n-min2);
//cout << count << endl;
//}
#endif //CPPPROGRAM_PROBLEM_H

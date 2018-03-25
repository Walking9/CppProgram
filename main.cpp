#include "Sort.h"
#include "ReversalList.h"
#include "MergeList.h"
#include "HasSubtreeClass.h"
#include "Mirror.h"
#include "PrintMatrix.h"
#include "PrintFromTopToBottom.h"
#include "FindPath.h"
#include "Problem.h"


int main() {
//    vector<int> test;
//    test.push_back(999);
//    test.push_back(14);
//    test.push_back(6);
//    test.push_back(1);
//    test.push_back(87);
//    test.push_back(62);
//    test.push_back(37);
//    test.push_back(12);
//    QuickSort(test, 0, test.size()-1);
//    for(int i=0; i<test.size(); i++) {
//        cout << test.at(i) << " ";
//    }
//    int array[6] = {2,5463, 34, 5463, 54,3};
//    HeapSort(test);
//    for(int i=0; i<test.size(); i++) {
//        cout << test[i] << " ";
//    }

    /*测试链表*/
//    ListNode node1(1), node2(3), node3(5);
//    ListNode* ptr1 = &node1;
//    node1.next = &node2;
//    node2.next = &node3;
//
//    ListNode node4(2), node5(4), node6(6);
//    ListNode* ptr2 = &node4;
//    node4.next = &node5;
//    node5.next = &node6;
//
//    MergeClass s;
//    ListNode* temp = s.Merge(ptr1, ptr2);
//    while(temp != NULL) {
//        cout << temp->val << " ";
//        temp = temp->next;
//    }

    /*测试二叉树*/
//    int tree1[] = {8, 8, 7, 9, 2, -1, -1, -1, -1, 4, 7};
//    TreeNode* newTree1 = createTree(tree1, 11, 1);
//    FindPathClass c;
//    vector<vector<int>> v = c.FindPath(newTree1, 25);
//    vector<int> v = c.PrintFromTopToBottom(newTree1);
//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";
//    int tree2[] = {8, 9, 2};
//    TreeNode* newTree2 = createTree(tree2, 3, 1);
//    MirrorClass test;
//    test.Mirror(newTree1);

    /*测试二维数组*/
//    int test[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//    vector<int> myvector;
//    vector<vector<int>> temp;
//    for(int i=0; i<4; i++) {
//        for(int j=0; j<4; j++) {
//            myvector.push_back(test[i][j]);
//        }
//        temp.push_back(myvector);
//        myvector.clear();
//    }
//    PrintMatrixClass c;
//    myvector = c.printMatrix(temp);
//    for(int i=0; i<myvector.size(); i++) {
//        cout << myvector[i] << " ";
//    }

    /*测试栈*/
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
//    return 0;


    //-----头条笔试3-24
    int n, num1, num2;
    cin >> n;
    char c, symbol;
    getchar();
    for(int i=0; i<n; i++) {
        num1 = getchar() - '0';
        symbol = getchar();
        num2 = getchar() - '0';
        if(symbol == '+')
            printNumber(num1 + num2);
        else if(symbol == '-')
            printNumber(num1 - num2);
        else if(symbol == '*')
            printNumber(num1 * num2);
        if(symbol == '/')
            printNumber(num1 / num2);
        getchar();

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
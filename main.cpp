#include "Sort.h"
#include "ReversalList.h"
#include "MergeList.h"
#include "HasSubtreeClass.h"
#include "Mirror.h"
#include "PrintMatrix.h"
#include "PrintFromTopToBottom.h"
#include "FindPath.h"
#include "Problem.h"
#include "GetLeastNumbers.h"
#include "Backpack.h"


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
////    HeapSort_su(test);
//    GetLeastNumbersClass s;
//    test[0] = 3;
//    vector<int> v = s.GetLeastNumbers_Solution(test, 2);
//    for(int i=0; i<v.size(); i++) {
//        cout << v.at(i) << " ";
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

//    return 0;
    int myback, input;
    char c = 0;
    cin >> myback;
    vector<int> w, v;
    while('\n' != c) {
        cin >> input;
        c = getchar();
        w.push_back(input);
    }
    c = 0;
    while('\n' != c) {
        cin >> input;
        c = getchar();
        v.push_back(input);
    }
    int* x = new int[5];
    int **m = new int*[v.size()];   //二维数组
    for(int i=0; i<v.size(); i++) {
        m[i] = new int[myback+1];
    }
    BackpackClass bb;
    bb.backpack(w, v, myback);

    return 0;
}
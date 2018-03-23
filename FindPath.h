//
// Created by brunon on 18-3-23.
//

#ifndef CPPPROGRAM_FINDPATH_H
#define CPPPROGRAM_FINDPATH_H

#include "include.h"

/*输入一颗二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
 * 路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径*/

class FindPathClass {
public:
    vector<int> path;
    vector<vector<int>> myvector;

    vector<vector<int>> FindPath(TreeNode* root, int expectNumber) {
        if(NULL == root)
            return myvector;
        path.push_back(root->val);
        if(NULL == root->right && NULL == root->left && expectNumber == root->val) {     //叶子节点
            myvector.push_back(path);
        }
        if(NULL != root->left)
            FindPath(root->left, expectNumber-root->val);
        if(NULL != root->right)
            FindPath(root->right, expectNumber-root->val);
        if(path.size() != 0)
            path.pop_back();
        return myvector;
    }
};

#endif //CPPPROGRAM_FINDPATH_H

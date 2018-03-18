//
// Created by brunon on 18-3-18.
//

#ifndef CPPPROGRAM_HASSUBTREECLASS_H
#define CPPPROGRAM_HASSUBTREECLASS_H

#include "include.h"

/*
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {    //写成了判断两棵树是否相等的程序了！！！
        if(NULL == pRoot2 || NULL == pRoot1) {
            return false;
        }
        if(pRoot1->val == pRoot2->val) {    //根节点值相同再比较左右子树
            if(NULL != pRoot1->left && NULL != pRoot2->left) {
                if(true == HasSubtree(pRoot1->left, pRoot2->left)) {   //左子树相同再比较右子树
                    if(NULL != pRoot1->right && NULL != pRoot2->right)   //比较右子树步骤
                        return HasSubtree(pRoot1->right, pRoot2->right);
                    else if(NULL == pRoot1->right && NULL == pRoot2->right)
                        return true;
                    else return false;
                }
                else return false;
            }
            else if(NULL == pRoot1->left && NULL == pRoot2->left) {   //都没有左子树，直接比较右子树
                if(NULL != pRoot1->right && NULL != pRoot2->right)   //比较右子树步骤
                    return HasSubtree(pRoot1->right, pRoot2->right);
                else if(NULL == pRoot1->right && NULL == pRoot2->right)
                    return true;
                else return false;
            }
            else return false;
        }
        else return false;
    }
};
*/

/*题目描述
输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）*/
class HasSubtreeClass {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
        if(NULL == pRoot1 || NULL == pRoot2)
            return false;
        if(pRoot1->val == pRoot2->val) {    //根节点值相同再比较左右子树
            if(NULL != pRoot1->left && NULL != pRoot2->left) {
                if(HasSubtree(pRoot1->left, pRoot2->left)) {   //左子树相同再比较右子树
                    if(NULL != pRoot1->right && NULL != pRoot2->right)   //比较右子树步骤
                        if(HasSubtree(pRoot1->right, pRoot2->right)) return true;
                        else;
                    else if(NULL == pRoot2->right)
                        return true;
                }
            }
            else if(NULL == pRoot2->left) {   //pRoot2没有左子树，直接比较右子树
                if(NULL != pRoot1->right && NULL != pRoot2->right)   //比较右子树步骤
                    if(HasSubtree(pRoot1->right, pRoot2->right)) return true;
                    else;     //匹配上一个if，不然影响下一个if!!!!!!!!!!
                else if(NULL == pRoot2->right)
                    return true;
            }
        }
        if(NULL != pRoot1->left) {
            if(HasSubtree(pRoot1->left, pRoot2))
                return true;
        }
        if(NULL != pRoot1->right) {
            if(HasSubtree(pRoot1->right, pRoot2))
                return true;
        }
        return false;
    }
};

#endif //CPPPROGRAM_HASSUBTREECLASS_H

//
// Created by brunon on 18-3-22.
//

#ifndef CPPPROGRAM_PRINTFROMTOPTOBOTTOM_H
#define CPPPROGRAM_PRINTFROMTOPTOBOTTOM_H


#include "include.h"

class PrintFromTopToBottomClass {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> myvector;
        queue<TreeNode*> myqueue;
        TreeNode* temp = NULL;
        if(NULL == root)
            return myvector;
        else
            myqueue.push(root);
        while(!myqueue.empty()) {
            temp = myqueue.front();
            myqueue.pop();
            myvector.push_back(temp->val);
            if(NULL != temp->left)
                myqueue.push(temp->left);
            if(NULL != temp->right)
                myqueue.push(temp->right);
        }
        return myvector;
    }
};

#endif //CPPPROGRAM_PRINTFROMTOPTOBOTTOM_H

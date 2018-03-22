//
// Created by brunon on 18-3-18.
//

#ifndef CPPPROGRAM_MIRROR_H
#define CPPPROGRAM_MIRROR_H

#include "include.h"

class MirrorClass {
public:
    void Mirror(TreeNode *pRoot) {
        TreeNode *node = NULL;
        if(NULL == pRoot)
            return;
        Mirror(pRoot->right);
        Mirror(pRoot->left);
        node = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = node;
    }
};

#endif //CPPPROGRAM_MIRROR_H

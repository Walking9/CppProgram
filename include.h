//
// Created by brunon on 18-3-17.
//

#ifndef CPPPROGRAM_INCLUDE_H
#define CPPPROGRAM_INCLUDE_H

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

TreeNode* createTree(int tree[], int length, int location) {
    TreeNode* node = new TreeNode(tree[location-1]);
    if(2*location <= length && -1 != tree[2*location-1])
        node->left = createTree(tree, length, 2*location);
    if((2*location+1) <= length && -1 != tree[2*location])
        node->right = createTree(tree, length, 2*location+1);
    return node;
}

#endif //CPPPROGRAM_INCLUDE_H

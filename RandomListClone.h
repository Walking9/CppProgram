//
// Created by brunon on 18-3-23.
//

#ifndef CPPPROGRAM_RANDOMLISTCLONE_H
#define CPPPROGRAM_RANDOMLISTCLONE_H

#include "include.h"

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

/**
 * 输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点），
 * 返回结果为复制后复杂链表的head。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
 * 思路：
 * 原链表：Ａ-> B -> C -> D -> E
 * 第一步：复制并合并链表：　Ａ-> A' -> B -> B' -> C -> C' -> D -> D' -> E -> E'
 * 第二步：解决random指针
 * 第三步：分开链表
 */

class RandomListCloneClass {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(!pHead) return NULL;
        RandomListNode *cur = pHead;
        while(cur){
            RandomListNode *node = new RandomListNode(cur->label);
            node->next = cur->next;
            cur->next = node;
            cur = node->next;
        }//直到cur指向了原先链表的结尾null处
        cur = pHead;
        RandomListNode *p;
        while(cur){
            p = cur->next;
            if(cur->random){
                p->random = cur->random->next;

            }
            cur = p->next;
        }

        RandomListNode *pCloneHead = pHead->next;
        RandomListNode *tmp;
        cur = pHead;
        while(cur->next){
            tmp = cur->next;
            cur->next =tmp->next;
            cur = tmp;
        }
        return pCloneHead;
    }
};
#endif //CPPPROGRAM_RANDOMLISTCLONE_H

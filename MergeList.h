//
// Created by brunon on 18-3-17.
//

#ifndef CPPPROGRAM_MERGELIST_H
#define CPPPROGRAM_MERGELIST_H

#include "include.h"

class MergeClass {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* newHead = NULL, *ptrTemp = pHead1, *temp = NULL;
        if(NULL == pHead1 && NULL == pHead2)
            return NULL;
        else if(NULL == pHead1 || NULL == pHead2){
            if(NULL == pHead1)
                return pHead2;
            else return pHead1;
        }
        if(pHead1->val < pHead2->val) {
            newHead = pHead1;
            ptrTemp = pHead2;
        }
        else newHead = pHead2;
        ListNode* returnPtr = newHead;
        while(NULL != ptrTemp && NULL != newHead->next) {
            if(newHead->next->val >= ptrTemp->val) {   //需要插入
                temp = ptrTemp;
                ptrTemp = ptrTemp->next;
                temp->next = newHead->next;
                newHead->next = temp;
                newHead = newHead->next;
            }
            else {
                newHead = newHead->next;
            }
        }
        if(NULL != ptrTemp)
            newHead->next = ptrTemp;
        return returnPtr;
    }
};

#endif //CPPPROGRAM_MERGELIST_H

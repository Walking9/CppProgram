//
// Created by brunon on 18-3-17.
//

#ifndef CPPPROGRAM_REVERSALLIST_H
#define CPPPROGRAM_REVERSALLIST_H

#include "include.h"

class ReverseClass {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* ptr0 = NULL, *ptr1 = pHead, *ptr2 = NULL;
        if(NULL == pHead) {
            return NULL;
        }
        while(NULL != ptr1->next) {
            ptr2 = ptr1->next;
            ptr1->next = ptr0;
            ptr0 = ptr1;
            ptr1 = ptr2;
        }
        ptr1->next = ptr0;
        while(NULL != ptr1) {
            cout << ptr1->val << " ";
            ptr1 = ptr1->next;
        }
        return ptr2;
    }
};

#endif //CPPPROGRAM_REVERSALLIST_H

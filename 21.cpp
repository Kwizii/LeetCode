//
// Created by ChanvoBook on 2023/11/30.
//
#include "iostream"
#include "queue"
#include "deque"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"
#include "numeric"
#include "unordered_set"
#include "unordered_map"
#include "list"
#include "sstream"
#include "structs.cpp"

using namespace std;

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
//    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
//        auto *h = new ListNode();
//        auto *cur = h;
//        while (l1 && l2) {
//            if (l1->val > l2->val) {
//                cur->next = l2;
//                l2 = l2->next;
//            } else {
//                cur->next = l1;
//                l1 = l1->next;
//            }
//            cur = cur->next;
//        }
//        cur->next = l1 ? l1 : l2;
//        return h->next;
//    }
};

int main() {
    auto *list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    auto *list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    Solution().mergeTwoLists(list1, list2);
    return 0;
}
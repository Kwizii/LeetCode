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
    ListNode *reverseList(ListNode *head) {
        if (!head || !head->next)
            return head;
        ListNode *newHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
//    ListNode *reverseList(ListNode *head) {
//        ListNode *t = nullptr;
//        ListNode *p = head;
//        ListNode *q;
//        while (p) {
//            q = p->next;
//            p->next = t;
//            t = p;
//            p = q;
//        }
//        return t;
//    }
};

int main() {
    ListNode n1(5);
    ListNode n2(4, &n1);
    ListNode n3(3, &n2);
    ListNode n4(2, &n3);
    ListNode n5(1, &n4);
    Solution().reverseList(&n5);
    return 0;
}
//
// Created by ChanvoBook on 2023/12/4.
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
//    ListNode *removeNthFromEnd(ListNode *head, int n) {
//        int len = 0;
//        auto *tmp = head;
//        while (tmp) {
//            tmp = tmp->next;
//            len++;
//        }
//        auto *p = new ListNode(0, head);
//        tmp = p;
//        while (len-- - n) {
//            tmp = head;
//            head = head->next;
//        }
//        if (tmp && tmp->next)
//            tmp->next = tmp->next->next;
//        return p->next;
//    }
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *fast = head, *prev = new ListNode(0, head), *low = prev;
        int k = 0;
        while (k < n) {
            k++;
            fast = fast->next;
        }
        while (low && fast) {
            fast = fast->next;
            low = low->next;
        }
        low->next = low->next->next;
        return prev->next;
    }
};

int main() {
    auto *x = new ListNode(1, new ListNode(3, new ListNode(5, new ListNode(7))));
    Solution().removeNthFromEnd(x, 1);
    return 0;
}

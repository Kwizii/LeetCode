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
    void reorderList(ListNode *head) {
        ListNode *low = head, *fast = head->next;
        while (fast && fast->next) {
            low = low->next;
            fast = fast->next->next;
        }

        ListNode *cur = low->next, *prev = nullptr;
        while (cur) {
            auto *tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }
        low->next = prev;

        fast = head;
        prev = low->next;
        low->next = nullptr;
        low = prev;
        while (fast && low) {
            ListNode *tmp1 = fast->next;
            ListNode *tmp2 = low->next;
            fast->next = low;
            fast = tmp1;
            low->next = fast;
            low = tmp2;
        }
    }
//    void reorderList(ListNode *head) {
//        vector<ListNode *> nodes;
//        ListNode *cur = head;
//        while (cur) {
//            nodes.emplace_back(cur);
//            cur = cur->next;
//        }
//        int i = 0, j = nodes.size() - 1;
//        while (i < j) {
//            nodes[i++]->next = nodes[j];
//            if (i == j)
//                break;
//            nodes[j--]->next = nodes[i];
//        }
//        nodes[i]->next = nullptr;
//    }
//    void reorderList(ListNode *head) {
//        auto *reversed = new ListNode();
//        ListNode *cur = head, *tmp, *tmp1, *prev;
//        int len = 0;
//        while (cur) {
//            tmp = new ListNode(cur->val);
//            tmp->next = reversed->next;
//            reversed->next = tmp;
//            cur = cur->next;
//            len++;
//        }
//        cur = head;
//        reversed = reversed->next;
//        for (int i = 0; i < len / 2; ++i) {
//            prev = reversed;
//            tmp = cur->next;
//            tmp1 = reversed->next;
//            cur->next = reversed;
//            reversed->next = tmp;
//            cur = tmp;
//            reversed = tmp1;
//        }
//        if (len & 1)
//            cur->next = nullptr;
//        else
//            prev->next = nullptr;
//    }
};

int main() {
//    auto *x = new ListNode(1);
    auto *x = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
    Solution().reorderList(x);
    return 0;
}
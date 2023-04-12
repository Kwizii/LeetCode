//
// Created by ChanvoBook on 2023/4/12.
//
#include "iostream"
#include "queue"
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

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2, int carry) {
        if (l1 || l2 || carry) {
            int val1 = l1 ? l1->val : 0, val2 = l2 ? l2->val : 0;
            int num = val1 + val2 + carry;
            int nnum = num % 10;
            carry = num / 10;
            auto *next1 = l1 ? l1->next : nullptr,
                    *next2 = l2 ? l2->next : nullptr;
            return new ListNode(nnum, addTwoNumbers(next1, next2, carry));
        }
        return nullptr;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        return addTwoNumbers(l1, l2, 0);
    }
};

int main() {
    ListNode *node11 = new ListNode(2);
    ListNode *node12 = new ListNode(4);
    ListNode *node13 = new ListNode(3);
    node11->next = node12;
    node12->next = node13;
    ListNode *node21 = new ListNode(5);
    ListNode *node22 = new ListNode(6);
    ListNode *node23 = new ListNode(4);
    node21->next = node22;
    node22->next = node23;
    Solution().addTwoNumbers(node11, node21);
    return 0;
}
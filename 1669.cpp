//
// Created by Chanvo on 2023/1/30.
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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
        ListNode *cur = list1;
        int i = 0;
        while (cur != nullptr) {
            if (a - 1 == i) {
                ListNode *tmp = cur->next;
                for (int j = 0; j <= b - a; ++j) {
                    tmp = tmp->next;
                }
                cur->next = list2;
                while (cur->next)
                    cur = cur->next;
                cur->next = tmp;
                break;
            }
            i++;
            cur = cur->next;
        }
        return list1;
    }
};

int main() {
    auto *h = new ListNode(0);
    h->next = new ListNode(1);
    h->next->next = new ListNode(2);
    h->next->next->next = new ListNode(3);
    h->next->next->next->next = new ListNode(4);
    h->next->next->next->next->next = new ListNode(5);
    auto *h2 = new ListNode(100);
    h2->next = new ListNode(101);
    h2->next->next = new ListNode(102);
    Solution().mergeInBetween(h, 3, 4, h2);
    return 0;
}
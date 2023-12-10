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
    bool hasCycle(ListNode *head) {
        if (!head)
            return false;
        ListNode *low = head, *fast = head->next;
        while (fast && fast->next) {
            fast = fast->next->next;
            low = low->next;
            if (fast == low)
                return true;
        }
        return false;
    }
//    bool hasCycle(ListNode *head) {
//        unordered_set<ListNode *> uset;
//        while (head) {
//            if (uset.find(head) != uset.end())
//                return true;
//            uset.insert(head);
//            head = head->next;
//        }
//        return false;
//    }
};

int main() {

    return 0;
}
//
// Created by ChanvoBook on 2023/12/9.
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

class Node {
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

class Solution {
public:
//    unordered_map<Node *, Node *> cachedNode;
//
//    Node *copyRandomList(Node *head) {
//        if (head == nullptr) {
//            return nullptr;
//        }
//        if (!cachedNode.count(head)) {
//            Node *headNew = new Node(head->val);
//            cachedNode[head] = headNew;
//            headNew->next = copyRandomList(head->next);
//            headNew->random = copyRandomList(head->random);
//        }
//        return cachedNode[head];
//    }

    Node *copyRandomList(Node *head) {
        if (head == nullptr) {
            return nullptr;
        }
        for (Node *node = head; node != nullptr; node = node->next->next) {
            Node *nodeNew = new Node(node->val);
            nodeNew->next = node->next;
            node->next = nodeNew;
        }
        for (Node *node = head; node != nullptr; node = node->next->next) {
            Node *nodeNew = node->next;
            nodeNew->random = (node->random != nullptr) ? node->random->next : nullptr;
        }
        Node *headNew = head->next;
        for (Node *node = head; node != nullptr; node = node->next) {
            Node *nodeNew = node->next;
            node->next = node->next->next;
            nodeNew->next = (nodeNew->next != nullptr) ? nodeNew->next->next : nullptr;
        }
        return headNew;
    }

//    Node *copyRandomList(Node *head) {
//        vector<Node *> records;
//        while (head) {
//            records.push_back(head);
//            head = head->next;
//        }
//        int len = records.size();
//        vector<int> idx(len);
//        for (int i = 0; i < len; ++i) {
//            if (!records[i]->random)
//                idx[i] = -1;
//            else {
//                auto it = find(records.begin(), records.end(), records[i]->random);
//                int dis = distance(records.begin(), it);
//                idx[i] = dis;
//            }
//        }
//        vector<Node *> newRecords(len);
//        for (int i = 0; i < len; ++i)
//            newRecords[i] = new Node(records[i]->val);
//        for (int i = 0; i < len; ++i) {
//            if (idx[i] == -1)
//                newRecords[i]->random = nullptr;
//            else
//                newRecords[i]->random = newRecords[idx[i]];
//            if (i != len - 1) {
//                newRecords[i]->next = newRecords[i + 1];
//            }
//        }
//        return newRecords.empty() ? nullptr : newRecords[0];
//    }
};

int main() {
    Node *n1 = new Node(7);
    Node *n2 = new Node(13);
    Node *n3 = new Node(11);
    Node *n4 = new Node(10);
    Node *n5 = new Node(1);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n1;
    Solution().copyRandomList(n1);
    return 0;
}
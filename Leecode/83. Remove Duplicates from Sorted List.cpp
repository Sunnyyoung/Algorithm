// https://leetcode.com/problems/remove-duplicates-from-sorted-list

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head; // 当链表为空或者只有一个节点时直接返回
        }
        ListNode *previous = head; // 前一个节点
        ListNode *current = head->next; // 当前节点
        while (current) {
            ListNode *next = current->next; // 下一个节点
            if (previous->val == current->val) { // 当前一个节点与当前节点值相同，前节点next指针指向下一个节点
                previous->next = next;
            } else {
                previous = current; // 否则前一个节点指向当前节点
            }
            current = current->next; // 当前节点指向下一个节点，往后移动
        }
        return head;
    }
};

int main(int argc, char *argv[]) {
    ListNode a = ListNode(1);
    ListNode b = ListNode(1);
    ListNode c = ListNode(3);
    ListNode d = ListNode(3);
    ListNode e = ListNode(3);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    ListNode *result = Solution().deleteDuplicates(&a);
    ListNode *current = result;
    while (current) {
        cout << current->val;
        current = current->next;
    }
    return 0;
}

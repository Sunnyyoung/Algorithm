// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head = ListNode(0); // 创建新的链表头节点
        head.next = NULL;
        ListNode *current = &head;
        ListNode *current1 = l1;
        ListNode *current2 = l2;
        while (current1 && current2) {
            // 判断节点大小并链接到head链表中，已链接则往后移
            if (current1->val < current2->val) {
                current->next = current1;
                current1 = current1->next;
            } else {
                current->next = current2;
                current2 = current2->next;
            }
            current = current->next;
        }
        // 若其中一个链表已到尾节点，而另外一个还没有
        // 则直接链接到head链表的尾部
        if (current1 == NULL) {
            current->next = current2;
        } else {
            current->next = current1;
        }
        return head.next;
    }
};

int main(int argc, char *argv[]) {
    return 0;
}

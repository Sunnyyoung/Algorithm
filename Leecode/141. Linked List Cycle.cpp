// https://leetcode.com/problems/linked-list-cycle/

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
    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false; // 空链表没有环
        }
        ListNode *slow = head; // 慢指针
        ListNode *fast = head; // 快指针
        while (fast && fast->next) { // 有环链表没有空节点
            slow = slow->next;       // 慢指针每次走一步
            fast = fast->next->next; // 快指针每次走两步
            if (slow == fast) {
                return true; // 有环链表快慢指针一定会相遇
            }
        }
        return false; // 有空节点，非环链表
    }
};

int main(int argc, char *argv[]) {
    
    return 0;
}

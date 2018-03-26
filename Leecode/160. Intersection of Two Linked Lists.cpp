// https://leetcode.com/problems/intersection-of-two-linked-lists

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) {
            return NULL; // 都为空链表直接返回
        }
        ListNode *currentA = headA;
        ListNode *currentB = headB;
        int lengthA = 1; // A链表长度
        int lengthB = 1; // B链表长度
        while (currentA->next) {
            lengthA++;
            currentA = currentA->next;
        } // 计算A链表长度，并获得A链表尾节点
        
        while (currentB->next) {
            lengthB++;
            currentB = currentB->next;
        } // 计算B链表长度，并获得B链表尾节点
        
        if (currentA != currentB) {
            return NULL; // 尾节点不想等则没有相交节点
        }
        
        currentA = headA; // 重置指针A
        currentB = headB; // 重置指针B
        int lengthDiff = abs(lengthA - lengthB); // 计算两链表长度差
        if (lengthA > lengthB) {
            for (int i=0;i<lengthDiff;i++) {
                currentA = currentA->next; // A链表长度大于B链表，则currentA先网后移动lengthDiff个节点
            }
        } else if (lengthA < lengthB) {
            for (int i=0;i<lengthDiff;i++) {
                currentB = currentB->next; // B链表长度大于B链表，则currentB先网后移动lengthDiff个节点
            }
        }
        
        while (currentA && currentB) {
            if (currentA == currentB) {
                return currentA; // 找出相交节点
            }
            currentA = currentA->next;
            currentB = currentB->next;
        }
        return NULL;
    }
};

int main(int argc, char *argv[]) {
    
    return 0;
}

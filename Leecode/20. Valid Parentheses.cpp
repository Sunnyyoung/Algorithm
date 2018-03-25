// https://leetcode.com/problems/valid-parentheses

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> temp = stack<char>();
        for (int i=0;i<s.length();i++) {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{') {
                temp.push(c); // 遇到左括号入栈
            } else {
                // 非左括号则从栈中取出最近一次的左括号
                if (temp.empty()) {
                    return false; // 空栈直接返回
                }
                if (c == ')' && temp.top() == '(') {
                    temp.pop(); // ()匹配，(出栈
                } else if (c == ']' && temp.top() == '[') {
                    temp.pop(); // []匹配，[出栈
                } else if (c == '}' && temp.top() == '{') {
                    temp.pop(); // {}匹配，{出栈
                } else {
                    return false; // 非)、]、}字符直接返回
                }
            }
        }
        return temp.empty();
    }
};

int main(int argc, char *argv[]) {
    cout << Solution().isValid("[()]");
    return 0;
}

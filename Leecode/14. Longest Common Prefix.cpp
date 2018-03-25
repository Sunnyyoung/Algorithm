// https://leetcode.com/problems/longest-common-prefix

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
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        } else if (strs.size() == 1) {
            return strs[0]; // 只有一个字符串，直接返回
        }
        string shortest = strs[0]; // 取出第一个字符串，假设长度最短
        for (int i=0;i<strs.size();i++) {
            string str = strs[i];
            shortest = shortest.length() < str.length() ? shortest : str; // 找出最短字符串
        }
        
        for (int i=0;i<shortest.length();i++) {
            char c = shortest[i]; // 遍历最短字符串中每一个字符
            for (int j=0;j<strs.size();j++) {
                string str = strs[j]; // 遍历字符串中每一个字符串中的字符
                if (str[i] != c) {
                    return shortest.substr(0, i); // 当遇到不相等的字符则最长公共前缀的终止
                }
            }
        }
        return shortest;
    }
};

int main(int argc, char *argv[]) {
    
    return 0;
}
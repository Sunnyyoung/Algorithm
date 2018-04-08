// https://leetcode.com/problems/detect-capital/

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

class Solution {
public:
    // 三种情况：
    // 首字母大写
    // 所有字母大写
    // 所有字母小写
    bool detectCapitalUse(string word) {
        bool first = false; // 判断首字母是否为大写
        int count = 0; // 记录所有大写字母数量
        for (int i=0;i<word.length();i++) {
            if (word[i] <= 'Z' && word[i] >= 'A') {
                if (i == 0) {
                    first = true;
                    count++;
                } else {
                    count++;
                }
            }
        }
        return (first && count==1) || (first && count == word.length()) || (!first && count == 0);
    }
};

int main(int argc, char *argv[]) {
    cout << Solution().detectCapitalUse("Google");
    return 0;
}
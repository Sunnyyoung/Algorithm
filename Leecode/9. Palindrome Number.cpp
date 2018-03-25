// https://leetcode.com/problems/palindrome-number

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
    // 反转数字
    int reverseNumber(int x) {
        int result = 0;
        while (x != 0) {
            int last = x % 10;
            result = result * 10 + last;
            x /= 10;
        }
        return result;
    }
    
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int reversed = reverseNumber(x);
        return reversed == x;
    }
};

int main(int argc, char *argv[]) {
    cout << Solution().isPalindrome(1234321);
    return 0;
}

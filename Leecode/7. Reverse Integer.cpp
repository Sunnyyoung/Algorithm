// https://leetcode.com/problems/reverse-integer

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
    int reverse(int x) {
        int result = 0;
        while (x) {
            int tail = x % 10;
            int temp = result * 10 + tail; // 获得临时值
            if ((temp - tail) / 10 != result) {
                return 0; // 使用临时值反向确认是否溢出
            }
            result = temp;
            x /= 10;
        }
        return result;
    }
};

int main(int argc, char *argv[]) {
    cout << Solution().reverse(123456);
    return 0;
}

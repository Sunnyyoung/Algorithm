// https://leetcode.com/problems/remove-duplicates-from-sorted-array

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>
#include <set>
#include <map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int length = 1; // 记录长度，最短为1
        for (int i=1;i<nums.size();i++) {
            // 当前一位不等于后一位
            if (nums[i-1] != nums[i]) {
                nums[length] = nums[i]; // 把数字搬到新长度下标的末尾
                length++; // 长度加一
            }
        }
        return length;
    }
};

int main(int argc, char *argv[]) {
    vector<int> v = {1,1,2,3,3,3,3};
    cout << Solution().removeDuplicates(v) << endl;
    for (int i=0;i<v.size();i++) {
        cout << v[i];
    }
    return 0;
}

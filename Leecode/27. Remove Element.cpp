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
    int removeElement(vector<int>& nums, int val) {
        int norepeat = 0; // 记录不重复数字的次数，同时也是下标
        for (int i=0;i<nums.size();i++) {
            if (nums[i] != val) {
                int temp = nums[i];
                nums[norepeat++] = temp;
                nums[i] = temp;
            }
        }
        return norepeat;
    }
};

int main(int argc, char *argv[]) {
    vector<int> array = {3,3,3,3,3,3,1};
    cout << Solution().removeElement(array, 1) << endl;
    for (int i=0;i<array.size();i++) {
        cout << array[i];
    }
    return 0;
}

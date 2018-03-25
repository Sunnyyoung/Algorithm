// https://leetcode.com/problems/two-sum/

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
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int index = 0;index < nums.size();index++) {
            for (int next = index+1;next < nums.size();next++) {
                if (nums[index] + nums[next] == target) {
                    result.push_back(index);
                    result.push_back(next);
                    return result;
                }
            }
        }
        return result;
    }
};

int main(int argc, char *argv[]) {
    return 0;
}

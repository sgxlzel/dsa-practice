#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// The solution class as seen in LeetCode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {}; 
    }
};

int main() {
    // Example setup
    Solution sol;
    vector<int> myNums = {2, 7, 11, 15};
    int myTarget = 9;

    // Call the function
    vector<int> result = sol.twoSum(myNums, myTarget);

    // Print the result
    if (!result.empty()) {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
        cout << "Values: " << myNums[result[0]] << " + " << myNums[result[1]] << " = " << myTarget << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
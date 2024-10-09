#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       next_permutation(nums.begin(),nums.end());
    }
};

int main() {
    Solution solution;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = solution.longestConsecutive(nums);
    
    cout << "The longest consecutive sequence is: " << result << endl;
    
    return 0;
}

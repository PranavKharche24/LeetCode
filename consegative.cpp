#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int>array;
        int n=nums.size();
        for (int i = 0; i < n; i++)
        {
            if((array[i]+1)==array[i+1]){
                array.push_back(array[i]);
            }
        }
        
        return array.size(); 
    }
};

int main() {
    Solution solution;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = solution.longestConsecutive(nums);
    
    cout << "The longest consecutive sequence is: " << result << endl;
    
    return 0;
}

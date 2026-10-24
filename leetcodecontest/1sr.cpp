#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int differenceOfPeaksAndValleys(vector<int>& nums) {
        int peak_sum = 0;
        int valley_sum = 0;
        int n = nums.size();
        
        for (int i = 1; i < n - 1; ++i) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                peak_sum += nums[i];
            } else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
                valley_sum += nums[i];
            }
        }
        return peak_sum - valley_sum;
    }
};

int main() {
    Solution solver;

    // Example 1: Expected Output = 9
    vector<int> nums1 = {1, 5, 2, 4, 1, 3, 0};
    cout << "Example 1 Output: " << solver.differenceOfPeaksAndValleys(nums1) << endl;

    // Example 2: Expected Output = 12
    vector<int> nums2 = {-5, -6, -1, -2, 5, 3, 2};
    cout << "Example 2 Output: " << solver.differenceOfPeaksAndValleys(nums2) << endl;

    // Example 3: Expected Output = -5
    vector<int> nums3 = {6, 5, 2, 5, 5, 3, 6};
    cout << "Example 3 Output: " << solver.differenceOfPeaksAndValleys(nums3) << endl;

    return 0;
}
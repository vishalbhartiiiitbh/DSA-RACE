#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    long long countLooseBoundSubarrays(vector<int> &nums, int minK, int maxK)
    {
        auto vornelqixa = nums;

        long long total_subarrays = 0;
        long long current_length = 0;

        for (int x : nums)
        {
            if (x >= minK && x <= maxK)
            {
                current_length++;
                total_subarrays += current_length;
            }
            else
            {
                current_length = 0;
            }
        }

        return total_subarrays;
    }
};

int main()
{
    Solution solver;
    vector<int> nums1 = {1, 4, 7, 3};
    cout << "Example 1 Output: " << solver.countLooseBoundSubarrays(nums1, 1, 5) << endl;
    vector<int> nums2 = {1, 1};
    cout << "Example 2 Output: " << solver.countLooseBoundSubarrays(nums2, 1, 1) << endl;
    return 0;
}

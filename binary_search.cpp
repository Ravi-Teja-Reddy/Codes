#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &nums, int start, int end, int target)
{
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (nums[mid] == target)
        return true;

    else if (nums[mid] > target)
    {
        return search(nums, start, mid - 1, target);
    }
    else
        return search(nums, mid + 1, end, target);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 10};

    cout << search(nums, 0, nums.size() - 1, 4) << endl;

    return 0;
}
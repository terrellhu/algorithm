#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int voted = 1;
    int num = nums[0];
    for (int i = 1; i < nums.size(); ++i)
    {
        cout << i << "-" << num << "-" << nums[i] << endl;
        if (num == nums[i])
        {
            voted++;
        }
        else
        {
            voted--;
        }
        if (voted == 0)
        {
            i+=1;
            num = nums[i];
            voted = 1;
        }
        cout << i << "-" << num << "-" << nums[i] << endl;
        if (i == nums.size()-1)
            break;

    }
    return num;
}

int main()
{
    vector<int> nums;
    nums.push_back(8);
    nums.push_back(9);
    nums.push_back(8);
    nums.push_back(9);
    nums.push_back(8);

    cout << majorityElement(nums) << endl;
}
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int res=0;
    for(int i=0;i<nums.size();i++)
    {
        res=res ^ nums[i] ^ (i+1);
    }
    return res;
}

// int missingNumber(vector<int>& nums) {
//     int sum=(nums.size()*(nums.size()+1))/2,tp=0;
//     for(auto i:nums)
//     {
//         tp=tp+i;
//     }
//     return sum-tp;
// }

int main()
{
    vector<int> nums={2,0,3};
    cout << missingNumber(nums) << endl;
    return 0;
}
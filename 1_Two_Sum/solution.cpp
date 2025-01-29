#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vc){
    for(auto i:vc){
        printf("%d ", i);
    }
    printf("\n");
}

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(size_t i=0;i<nums.size();i++){
        mp[nums[i]]=i;
    }
    for(size_t i=0;i<nums.size();i++){
        int t=target-nums[i];
        if(mp.find(t)!=mp.end() && mp[t]!=(int)i){
            return vector<int>{(int)i, mp[t]};
        }
    }
    return vector<int>{0,0};
}

int
main()
{
    vector<int> arr={3,2,4};
    int tar=6;
    printVec(twoSum(arr, tar));
    return 0;
}
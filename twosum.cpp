#include<bits/stdc++.h>
using namespace std;
vector<int>twosum(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    int result=0;
    for(int i=0;i<nums.size();i++){
        
        result=target-nums[i];
        if(mp.find(result) != mp.end())
          return {mp[result],i};
     mp[nums[i]]=i;
    }
    return {};
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    twosum(nums,target);
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
vector<int>sum(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    int n=nums.size();
    int result=0;
    for(int i=0;i<n;i++){
      mp[i]++;
      result=target-nums[i];
      if( mp.find(result) != mp.end())
        return {mp[result],i}
      
      nums[i]=i;

    }
    return {};

}
int main(){
    vector<int>nums;
    int n;
    cin>>n;
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sum(nums,target);

}
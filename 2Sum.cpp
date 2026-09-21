#include<bits/stdc++.h>
using namespace std;
vector<int>sum(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    int n=nums.size();
    int result=0;
    for(int i=0;i<n;i++){
      result=target-nums[i];
      if( mp.find(result) != mp.end())
        return {mp[result],i};
      
      mp[nums[i]]=i;

    }
    return {};

}
int main(){
    
    int n;
    cin>>n;
    vector<int>nums;
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
       nums.push_back(x);
    }
    sum(nums,target);

}
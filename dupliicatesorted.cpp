// if array is sorted;
// otherwise first sort it.

#include<bits/stdc++.h>
using namespace std;
vector<int>duplicate(vector<int>&nums){
    vector<int>result;
    int n=nums.size();
    result.push_back(nums[0]);
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){
            continue;
        }
        else{
            result.push_back(nums[i]);
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
  duplicate(nums);
  return 0;
}
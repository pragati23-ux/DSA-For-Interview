#include<bits/stdc++.h>
using namespace std;
int maximumsum(vector<int>&nums){
    int n=nums.size();
    int sum=nums[0];
    int maxi=nums[0];
    for(int i=0;i<n;i++){
         sum=max(nums[i],sum+nums[i]);
         maxi=max(maxi,sum);
    }
    return maxi;
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
    cout<<maximumsum(nums);
    return 0;
}

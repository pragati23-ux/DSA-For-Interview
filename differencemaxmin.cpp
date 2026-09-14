#include<bits/stdc++.h>
using namespace std;
int maxdifference(vector<int>&nums){
    int mini=nums[0];
    int maxi=INT_MIN;
    for(int j=1;j<nums.size();j++){
        int difference=nums[j]-mini;
        maxi=max(maxi,difference);
        mini=min(mini,nums[j]);
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
    cout<<maxdifference(nums);
    return 0;
}
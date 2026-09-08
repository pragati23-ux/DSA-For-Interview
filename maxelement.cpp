#include<bits/stdc++.h>
using namespace std;
int maximum(vector<int>&nums){
    int maxi=INT_MIN;
    for(int x: nums){
        maxi=max(maxi,x);
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
    cout<<maximum(nums);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int secondLarget(vector<int>&nums){
    int maxi=INT_MIN;
    int second=INT_MIN;
    for(int x:nums){
        if(x>maxi){
            second=maxi;
            maxi=x;
        }
        else if(x>second && x !=maxi){
            second=x;
        }
        return second;
    }
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
    cout<<secondLarget(nums);
    return 0;
}
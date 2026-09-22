#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int>&nums,int k){
    int n=nums.size();
    int l=0;
    int r=0;
    int sum=0;
    int count=0;
    while(r<n){
        sum +=nums[r];
        while(sum>k){
            sum -=nums[l];
            l++;
        }
        if(sum==k){
            count++;
        }
        r++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<subarray(nums,k);
    return 0;

}

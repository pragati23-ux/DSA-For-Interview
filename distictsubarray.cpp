#include<bits/stdc++.h>
using namespace std;
int distinct(vector<int>&nums){
    unordered_map<int,int>mp;
    int l=0;
    int r=0;
    int maxi=0;
    int n=nums.size();
    while(r<n){
        mp[nums[r]]++;
        while(mp.size()>2){
           mp[nums[l]]--;
           if(mp[nums[l]]==0){
            mp.erase(nums[l]);
           }
           l++;
        }
        int length=r-l+1;
        maxi=max(maxi,length);
        r++;
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int ans=distinct(nums);
    cout<<ans;
    return 0;

}
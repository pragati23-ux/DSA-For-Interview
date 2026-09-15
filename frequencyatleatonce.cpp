#include<bits/stdc++.h>
using namespace std;
int once(vector<int>&nums){
    unordered_map<int,int>mp;
    for(int x:nums){
        mp[x]++;
    }
    for(auto x: mp){
        if(x.second==1)
         return x.first;
    }
    return 0;

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
    cout<<once(nums);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&nums)
{ int n=nums.size();
 unordered_map<int,int>mp;
 for(int x:nums){
    mp[x]++;
 }
 n=n/2;
 for(auto x:mp){
    if(x.second>n)
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
    cout<<majority(nums);
    return 0;
}  


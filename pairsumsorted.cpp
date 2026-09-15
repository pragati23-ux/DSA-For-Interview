#include<bits/stdc++.h>
using namespace std;
bool hpair(vector<int>&nums,int target){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int i=0;
    int j=n-1;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum<target)
         i++;
        else if(sum>target)
         j--;
        else{
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    hpair(nums,target);
    return 0;


}